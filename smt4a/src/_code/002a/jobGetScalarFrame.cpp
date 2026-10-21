#include "shard/W5_W5Match2_ScalarGetters.h"
extern "C" {
JobFloatState *jobGetWork(void);
/* Read the current job's scalar value. */
f32 jobGetScalarFrame(void) { return jobGetWork()->value; }
}
