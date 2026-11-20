#include "shard/W5_W5Match2_ScalarGetters.h"
extern "C" {
extern FloatState84 g_quadColorState;
/* Read the state's scalar value. */
f32 jobGetScalarValue(void) { return g_quadColorState.value; }
}
