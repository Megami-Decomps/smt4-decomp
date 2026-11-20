#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern Vector4 g_colorWhite;   /* opaque white */
extern Vector4 *g_defaultDrawColor;   /* the colour draws use when they are given none */

/* Sets up opaque white and makes it the default draw colour. */
void gfxInitDefaultDrawColor(void)
{
    Vector4 *white = &g_colorWhite;
    white->w = white->z = white->y = white->x = 1.0f;
    g_defaultDrawColor = white;
}

} /* extern "C" */
