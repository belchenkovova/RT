#include "object_interaction.h"

void						object_sphere_build(t_object *space, va_list *args)
{
	t_object_sphere	*data;

	data = (t_object_sphere *)space->data;
	data->position = va_arg(*args, API_FLOAT4);
	data->radius = va_arg(*args, double);
	space->type = object_sphere;
}
