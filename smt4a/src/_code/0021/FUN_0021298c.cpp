/* NON_MATCHING: armcc combines the position loads into VLDMIA; retail uses separate VLDRs and different argument scheduling. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern void debugDrawText(u32 handle, u32 value, f32 x, f32 y, f32 scale);

/* Places the text element two units above the supplied position. */
void FUN_0021298c(const Point2 *position, const u32 *handle, u32 value)
{
    debugDrawText(*handle, value, position->x, position->y - 2.0f, 1.0f);
}

} /* extern "C" */
