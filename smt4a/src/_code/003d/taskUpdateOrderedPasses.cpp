#include "task/TaskPasses.h"

extern "C" {

void taskListUpdate(u32 list);

void taskUpdateOrderedPasses(u32 pass) { taskListUpdate(0); taskListUpdate(1); taskListUpdate(2); taskListUpdate(3); taskListUpdate(4); taskListUpdate(3); taskListUpdate(4); }

}
