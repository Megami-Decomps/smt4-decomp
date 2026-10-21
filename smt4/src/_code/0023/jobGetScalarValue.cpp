#include "shard/W5_W5Match2_ScalarGetters.h"
extern "C" {
extern FloatState84 DAT_004d4680;
/* Read the state's scalar value. */
f32 jobGetScalarValue(void) { return DAT_004d4680.value; }
}
