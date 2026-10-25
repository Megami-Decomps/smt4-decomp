/* NON_MATCHING: loads and arithmetic now match retail (separate VLDRs, handle in r3); only the 1.0f constant load is scheduled before `mov r1, r2` instead of after. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern void debugDrawText(u32 handle, u32 value, f32 x, f32 y, f32 scale);

static inline void drawText(u32 handle, u32 value, f32 x, f32 y, f32 scale)
{
    debugDrawText(handle, value, x, y, scale);
}

/* Places the text element two units above the supplied position. */
void FUN_00192a9c(const Point2 *position, const u32 *handle, u32 value)
{
    drawText(*handle, value, position->x, position->y - 2.0f, 1.0f);
}

} /* extern "C" */
