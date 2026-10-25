/* NON_MATCHING: compiler changes floating argument setup order and the chain of argument copies (r3 -> r2 -> r1). */
#include "common.h"
extern "C" {
void FUN_00296dc4(u32 first,u32 second,u32 third,u32 fourth,f32 a,f32 b,f32 c,f32 d,f32 e,f32 f,f32 g,f32 h,f32 i,f32 j,f32 k,f32 l);
/* Forward both rectangles, offsetting the second rectangle by ten units. */
void rectangleForwardExpanded(u32 id,f32 a,f32 b,f32 c,f32 d,f32 e,f32 f) { FUN_00296dc4(id,id,id,id,a,b,c,d,e,f,a+10.0f,b+10.0f,c,d+10.0f,e+10.0f,f); }
}
