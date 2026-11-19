#include "shard/W5_W5Match1_RecordKeys.h"

#include "text/DebugText.h"

/* The fixed-opacity debug label, also used by IV's FUN_00192a9c. */
static __inline void drawText(u32 color, const char *text, f32 x, f32 y)
{
    debugDrawText(color, x, y, 1.0f, text);
}

extern "C" {

/* List-row draw callback: draws the text two units above the supplied position. */
void FUN_0021298c(const Point2 *position, const u32 *color, const char *text)
{
    drawText(*color, text, position->x, position->y - 2.0f);
}

} /* extern "C" */
