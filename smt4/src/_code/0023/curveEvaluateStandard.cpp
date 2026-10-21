/* NON_MATCHING: compiler schedules the constant-one floating move differently around curve setup. */
#include "common.h"
extern "C" {
f32 FUN_002be5a4(u32 value,u32 mode,u32 argument,f32 first,f32 second,f32 third,f32 fourth,f32 scale);
/* Evaluate the standard curve and truncate its floating result. */
s32 curveEvaluateStandard(u32 argument,u32 value) { return (s32)FUN_002be5a4(value,1,argument,0.0f,-20.0f,0.0f,0.0f,1.0f); }
}
