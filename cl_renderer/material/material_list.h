#ifndef MATERIAL_LIST_H
# define MATERIAL_LIST_H

# include "color_list.h"

# define CAST_						(t_material)

# define MATERIAL_LIGHT				CAST_{COLOR_BLACK, LIGHT}
# define MATERIAL_LIGHT_BASIC		CAST_{COLOR_BLACK, LIGHT_BASIC}
# define MATERIAL_LIGHT_AMBIENT		CAST_{COLOR_BLACK, LIGHT_AMBIENT}

# define MATERIAL_WHITE				CAST_{COLOR_WHITE, COLOR_BLACK, .0, 0., 0.}
# define MATERIAL_RED				CAST_{COLOR_RED, COLOR_BLACK, .0, 0., 0.}
# define MATERIAL_GREEN				CAST_{COLOR_GREEN, COLOR_BLACK, .0, 0., 0.}
# define MATERIAL_BLUE				CAST_{COLOR_BLUE, COLOR_BLACK, .0, 0., 0.}
# define MATERIAL_NONE				CAST_{COLOR_NONE, COLOR_NONE, .0, 0., 0.}

# define MATERIAL_MIRROR			CAST_{COLOR_BLACK, COLOR_BLACK, .0, .5, 0.}
# define MATERIAL_GLASS				CAST_{COLOR_BLACK, COLOR_BLACK, .0, 0., 1.}

# define MATERIAL_TEXTURE			CAST_{COLOR_BLACK, COLOR_BLACK, .0, 0., 1., 2}

#endif
