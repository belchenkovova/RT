#ifndef JSON_DEFAULTS_H
# define JSON_DEFAULTS_H

# include "json_parse.h"

# define GLOBAL_MATERIAL MATERIAL_WHITE
# define GLOBAL_POSITION (t_vector3){0., 0., 0.}
# define GLOBAL_TEXTURE "chess.jpg"

# define SETTINGS_USE_RM 0
# define SETTINGS_USE_DOUBLE 0

# define CAMERA_AXIS_X (RT_F4_API){1., 0., 0.}
# define CAMERA_AXIS_Y (RT_F4_API){0., 1., 0.}
# define CAMERA_AXIS_Z (RT_F4_API){0., 0., 1.}
# define CAMERA_AXIS_FORWARD (RT_F4_API){1., 0., 0.}
# define CAMERA_AXIS_FORWARDBACKUP (RT_F4_API){1., 0., 0.}
# define CAMERA_POS (RT_F4_API){0., 0., -30.}
# define CAMERA_ROT (RT_F4_API){0., 0., 0.}
# define CAMERA_APERTURESIZE 5.f
# define CAMERA_FOCALLENGTH 40.f

# define AMBIENT_NAME "Ambient light"
# define AMBIENT_MATERIAL GLOBAL_MATERIAL
# define AMBIENT_TEXTURE GLOBAL_TEXTURE

# define POINT_NAME "Point light"
# define POINT_MATERIAL MATERIAL_LIGHT
# define POINT_TEXTURE GLOBAL_TEXTURE
# define POINT_POSITION GLOBAL_POSITION

# define DIRECT_NAME "Direct light"
# define DIRECT_MATERIAL MATERIAL_LIGHT
# define DIRECT_TEXTURE GLOBAL_TEXTURE
# define DIRECT_DIRECTION (t_vector3){0., -1., 0.}

# define SPHERE_NAME "Sphere"
# define SPHERE_MATERIAL GLOBAL_MATERIAL
# define SPHERE_TEXTURE GLOBAL_TEXTURE
# define SPHERE_POSITION GLOBAL_POSITION
# define SPHERE_RADIUS 1.

# define PLANE_NAME "Plane"
# define PLANE_MATERIAL GLOBAL_MATERIAL
# define PLANE_TEXTURE GLOBAL_TEXTURE
# define PLANE_POSITION GLOBAL_POSITION
# define PLANE_NORMAL (t_vector3){0., 1., 0.}
# define PLANE_LIMITING 0

# define CONE_NAME "Cone"
# define CONE_MATERIAL GLOBAL_MATERIAL
# define CONE_TEXTURE GLOBAL_TEXTURE
# define CONE_TOP (t_vector3){0., 1., 0.}
# define CONE_BOTTOM (t_vector3){0., 0., 0.}
# define CONE_RADIUS 1.

# define CYLINDER_NAME "Cylinder"
# define CYLINDER_MATERIAL GLOBAL_MATERIAL
# define CYLINDER_TEXTURE GLOBAL_TEXTURE
# define CYLINDER_TOP (t_vector3){0., 1., 0.}
# define CYLINDER_BOTTOM (t_vector3){0., 0., 0.}
# define CYLINDER_RADIUS 1.

# define BOX_NAME "Box"
# define BOX_MATERIAL GLOBAL_MATERIAL
# define BOX_TEXTURE GLOBAL_TEXTURE
# define BOX_POSITION GLOBAL_POSITION
# define BOX_SIZE (t_vector3){1., 1., 1.}

# define PARABOLOID_NAME "Paraboloid"
# define PARABOLOID_MATERIAL GLOBAL_MATERIAL
# define PARABOLOID_TEXTURE GLOBAL_TEXTURE
# define PARABOLOID_EXTREMUM (t_vector3){0., 0., 0.}
# define PARABOLOID_AXIS (t_vector3){0., 1., 0.}
# define PARABOLOID_RADIUS 1.

# define MOEBIUS_NAME "Moebius strip"
# define MOEBIUS_MATERIAL GLOBAL_MATERIAL
# define MOEBIUS_TEXTURE GLOBAL_TEXTURE
# define MOEBIUS_POSITION GLOBAL_POSITION
# define MOEBIUS_RADIUS 1.f
# define MOEBIUS_HALFWIDTH .5f

# define TORUS_NAME "Torus"
# define TORUS_MATERIAL GLOBAL_MATERIAL
# define TORUS_TEXTURE GLOBAL_TEXTURE
# define TORUS_POSITION GLOBAL_POSITION
# define TORUS_RADIUS 1.f
# define TORUS_WIDTH .5f

# define MANDELBULB_NAME "Mandelbulb"
# define MANDELBULB_MATERIAL GLOBAL_MATERIAL
# define MANDELBULB_TEXTURE GLOBAL_TEXTURE
# define MANDELBULB_POSITION GLOBAL_POSITION
# define MANDELBULB_ITERATIONS 50
# define MANDELBULB_POWER 8.

# define JULIA_NAME "Julia"
# define JULIA_MATERIAL GLOBAL_MATERIAL
# define JULIA_TEXTURE GLOBAL_TEXTURE
# define JULIA_POSITION GLOBAL_POSITION
# define JULIA_ITERATIONS 50
# define JULIA_VALUE (t_vector3){.1, .3, .5, .5}

# define CSG_NAME "CSG"
# define CSG_MATERIAL GLOBAL_MATERIAL
# define CSG_TEXTURE GLOBAL_TEXTURE
# define CSG_POSITIVE 0
# define CSG_NEGATIVE 1

# define EXPLOSION_NAME "Explosion"
# define EXPLOSION_MATERIAL GLOBAL_MATERIAL
# define EXPLOSION_TEXTURE GLOBAL_TEXTURE
# define EXPLOSION_POSITION GLOBAL_POSITION
# define EXPLOSION_RADIUS 1.f
# define EXPLOSION_NOISE_AMPLITUDE 0.7f

# define PCUBE_NAME "Perforated cube"
# define PCUBE_MATERIAL GLOBAL_MATERIAL
# define PCUBE_TEXTURE GLOBAL_TEXTURE
# define PCUBE_POSITION GLOBAL_POSITION
# define PCUBE_ITERATIONS 3
#endif