#include "gui.h"

void				gui_resize_start(t_gui *gui)
{
	rt_assert(!gui->resize_in_process, "GUI invalid resize sequence");
	gui_queue_block(gui->queue);
	gtk_window_set_resizable(gui->window, TRUE);
	gui->resize_in_process = rt_true;
}

void				gui_resize_finish(t_gui *gui)
{
	rt_assert(gui->resize_in_process, "GUI invalid resize sequence");
	gtk_window_set_resizable(gui->window, FALSE);
	gui->resize_in_process = rt_false;
	gui_queue_unblock(gui->queue);
}