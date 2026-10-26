/* NON_MATCHING: everything matches except the position of the 1.0f alpha load: retail loads it after `mov r1, r2` (the text argument), the build before it. */
#include "shard/W5_W5Match1_RecordKeys.h"

struct TextRenderer;
extern "C" void debugDrawText(TextRenderer *renderer, const char *text, f32 x, f32 y, f32 alpha);

/* Draws `text` at (x, y) with full alpha. */
static __inline void drawText(TextRenderer *renderer, const char *text, f32 x, f32 y)
{
    debugDrawText(renderer, text, x, y, 1.0f);
}

extern "C" {

/* List-row draw callback: draws the text two units above the supplied position. */
void FUN_0021298c(const Point2 *position, TextRenderer *const *renderer, const char *text)
{
    drawText(*renderer, text, position->x, position->y - 2.0f);
}

} /* extern "C" */
