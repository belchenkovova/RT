#include "gui_object_x.h"

t_gui_object_light_point		gui_object_light_point_init
								(t_gui_init_light_point *init,
								GtkBuilder *builder)
{
	t_gui_object_light_point	light;

	light.position_x = RT_GUI_GET(builder, init->position_x);
	light.position_y = RT_GUI_GET(builder, init->position_y);
	light.position_z = RT_GUI_GET(builder, init->position_z);
	return (light);
}

void							gui_object_light_point_get
								(t_gui_object_light_point *gui,
								t_object *object)
{
	t_object_light_point		*data;

	data = (t_object_light_point *)object->data;
	gui_entry_set_f(gui->position_x, data->position.x);
	gui_entry_set_f(gui->position_y, data->position.y);
	gui_entry_set_f(gui->position_z, data->position.z);
}

void 							gui_object_light_point_set
								(t_gui_object_light_point *gui,
								t_object *object)
{
	t_object_light_point		*data;

	data = (t_object_light_point *)object->data;
	data->position.x = gui_entry_get_f(gui->position_x);
	data->position.y = gui_entry_get_f(gui->position_y);
	data->position.z = gui_entry_get_f(gui->position_z);
}