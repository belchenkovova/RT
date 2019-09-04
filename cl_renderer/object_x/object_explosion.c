#include "object_interaction.h"

void					object_explosion_build(t_object *space, va_list *args)
{
	t_object_explosion	*data;

	data = (t_object_explosion *)space->data;
	data->position = va_arg(*args, RT_F4_API);
	data->radius = (RT_F)va_arg(*args, double);
	data->displacement_value = (RT_F)va_arg(*args, double);
	space->type = object_type_explosion;
}