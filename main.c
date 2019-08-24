#include "gui.h"
#include "gui_signal_connect_x.h"
#include "cl_renderer.h"
#include "material_list.h"

void				scene_test_a(t_scene *scene)
{
	object_build(
		scene_get_space(scene), object_sphere,
		MATERIAL_WHITE,
		(RT_F4_API){-10., 10., -40.}, 2.);
	object_build(
		scene_get_space(scene), object_sphere,
		MATERIAL_WHITE,
		(RT_F4_API){10., 10., -40.}, 2.);
	object_build(
		scene_get_space(scene), object_sphere,
		MATERIAL_LIGHT,
		(RT_F4_API){-10., 0., -10.}, 3.);
//	object_build(
//		scene_get_space(scene), object_sphere,
//		MATERIAL_LIGHT,
//		(RT_F4_API){10., 0., -10.}, 3.);
	object_build( // front
		scene_get_space(scene),
		object_plane,
		MATERIAL_WHITE,
		(RT_F4_API){0., 0., -70.},
		(RT_F4_API){0., 0., 1.});
//	object_build( // back
//		scene_get_space(scene),
//		object_plane,
//		MATERIAL_WHITE,
//		(RT_F4_API){0., 0., 100.},
//		(RT_F4_API){0., 0., -1.});
//	object_build( // left
//		scene_get_space(scene),
//		object_plane,
//		MATERIAL_GREEN,
//		(RT_F4_API){-30., 0., 0.},
//		(RT_F4_API){1., 0., 0.});
//	object_build( // right
//		scene_get_space(scene),
//		object_plane,
//		MATERIAL_RED,
//		(RT_F4_API){30., 0., 0.},
//		(RT_F4_API){-1., 0., 0.});
//	object_build( // upper
//		scene_get_space(scene),
//		object_plane,
//		MATERIAL_WHITE,
//		(RT_F4_API){0., 50., 0.},
//		(RT_F4_API){0., -1., 0.});
//	object_build( // lower
//		scene_get_space(scene),
//		object_plane,
//		MATERIAL_WHITE,
//		(RT_F4_API){0., -50., 0.},
//		(RT_F4_API){0., 1., 0.});
}


void				scene_test_b(t_scene *scene)
{
	object_build(
		scene_get_space(scene),
		object_light_ambient,
		MATERIAL_WHITE);
	object_build(
		scene_get_space(scene),
		object_light_point,
		MATERIAL_WHITE,
		(RT_F4_API){0., 1., 0.});
	object_build(
		scene_get_space(scene),
		object_light_direct,
		MATERIAL_WHITE,
		(RT_F4_API){0., 1., 0.});
	object_build(
		scene_get_space(scene), object_sphere,
		MATERIAL_LIGHT,
		(RT_F4_API){-10., 0., -10.}, 3.);
	object_build(
		scene_get_space(scene),
		object_plane,
		MATERIAL_WHITE,
		(RT_F4_API){0., -50., 0.},
		(RT_F4_API){0., 1., 0.});
	object_build(
		scene_get_space(scene),
		object_cone,
		MATERIAL_WHITE,
		(RT_F4_API){0., 1., 0.},
		(RT_F4_API){0., 0., 0.},
		1.);
	object_build(
		scene_get_space(scene),
		object_cylinder,
		MATERIAL_WHITE,
		(RT_F4_API){0., 1., 0.},
		(RT_F4_API){0., 0., 0.},
		1.);
	object_build(
		scene_get_space(scene),
		object_box,
		MATERIAL_WHITE,
		(RT_F4_API){0., 0., 0.},
		(RT_F4_API){1., 1., 1.});
	object_build(
		scene_get_space(scene),
		object_paraboloid,
		MATERIAL_WHITE,
		(RT_F4_API){0., 0., 0.},
		(RT_F4_API){0., 1., 0.},
		1.);
	object_build(
		scene_get_space(scene),
		object_moebius,
		MATERIAL_WHITE,
		(RT_F4_API){0., 0., 0.},
		1.,
		1.);
	object_build(
		scene_get_space(scene),
		object_julia,
		MATERIAL_WHITE,
		20,
		(RT_F4_API){1., 2., 3., 4,});
}

void				scene_test_c(t_scene *scene)
{}

int					main(int argc, char **argv)
{
	t_gui			*gui;

	gui = gui_new(&argc, &argv);
	gui_signal_connect_all(gui);
	scene_test_b(gui->renderer->data.scene);
	gui->renderer->data.camera->position.z = 30.;
	scene_update(gui->renderer->data.scene);
	gui_update(gui);
	gui_loop(gui);
	gui_delete(&gui);
	return (0);
}

/*
 * TODO :
 * 1. Fix bug when switching tabs of the notebook
 * 2. Fix bug when opening scene tab for the first time on run
 * 4. Figure out how to resize image
 * 5. RM objects greyed out when RT is chosen
 * 6. Write entry block for scene_add
 */