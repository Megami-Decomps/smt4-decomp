#include "shard/W5_W5Match2_ScalarGetters.h"
extern "C" {
extern FloatState84 DAT_006306f8;
/* Read the state's scalar value. */
f32 jobGetScalarValue(void) { return DAT_006306f8.value; }
}
