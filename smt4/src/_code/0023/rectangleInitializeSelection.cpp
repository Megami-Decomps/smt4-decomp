#include "shard/W5_W5Match2_PlainData.h"
extern "C" {
/* Set position and selection while clearing the rectangle extents. */
void rectangleInitializeSelection(EmptyRange *range,s32 x,s32 y,s32 selection) { range->selection=selection; range->width=0.0f; range->height=0.0f; range->x=(f32)x; range->y=(f32)y; }
}
