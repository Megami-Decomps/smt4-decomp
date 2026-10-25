/* Ordered update passes of the task lists (smt4a). */
#ifndef SMT4A_TASK_TASKPASSES_H
#define SMT4A_TASK_TASKPASSES_H

#include "common.h"

extern "C" {

/* Updates the ordered task-list passes, including the final repeated passes. The argument is not used. */
void taskUpdateOrderedPasses(u32 pass);

} /* extern "C" */

#endif
