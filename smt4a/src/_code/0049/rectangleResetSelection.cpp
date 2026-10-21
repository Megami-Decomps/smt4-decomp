/* NON_MATCHING: compiler stores the selection sentinel before clearing the rectangle floats. */
#include "shard/W5_W5Match2_PlainData.h"
extern "C" {
/* Clear the rectangle and invalidate its selection. */
void rectangleResetSelection(EmptyRange *range) { range->x=0.0f; range->y=0.0f; range->width=0.0f; range->height=0.0f; range->selection=-1; }
}
