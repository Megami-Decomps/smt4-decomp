/* NON_MATCHING: compiler schedules the constant-one floating move differently around curve setup. */
#include "common.h"
#include "text/TextDraw.h"
extern "C" {
/* Evaluate the standard curve and truncate its floating result. */
s32 curveEvaluateStandard(u32 argument,u32 value) { return (s32)textDrawString(value,1,(const char *)argument,0.0f,-20.0f,0.0f,0.0f,1.0f); }
}
