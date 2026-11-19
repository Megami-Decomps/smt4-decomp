/* NON_MATCHING: everything matches except the position of the 1.0f alpha load: retail loads it after `mov r1, r2` (the text argument), the build before it. */
#include "shard/W5_W5Match1_RecordKeys.h"

#include "text/DebugText.h"

/* The fixed-opacity debug label, also used by IV's FUN_00192a9c. */
static __inline void drawText(u32 color, const char *text, f32 x, f32 y)
{
    debugDrawText(color, text, x, y, 1.0f);
}

extern "C" {

/* List-row draw callback: draws the text two units above the supplied position. */
void FUN_0021298c(const Point2 *position, const u32 *color, const char *text)
{
    drawText(*color, text, position->x, position->y - 2.0f);
}

} /* extern "C" */
