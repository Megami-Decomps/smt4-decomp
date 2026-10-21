#include "common.h"
extern "C" {
void taskListUpdate(u32 list);
/* Update the ordered task-list passes, including the final repeated passes. */
void taskUpdateOrderedPasses(void) { taskListUpdate(0); taskListUpdate(1); taskListUpdate(2); taskListUpdate(3); taskListUpdate(4); taskListUpdate(3); taskListUpdate(4); }
}
