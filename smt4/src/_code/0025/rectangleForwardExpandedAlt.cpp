#include "common.h"
extern "C" {
void FUN_00296dc4(u32 first,u32 second,u32 third,u32 fourth,f32 a,f32 b,f32 c,f32 d,f32 e,f32 f,f32 g,f32 h,f32 i,f32 j,f32 k,f32 l);
/* Forward both rectangles, offsetting the second rectangle by ten units. */
void rectangleForwardExpandedAlt(u32 id,f32 a,f32 b,f32 c,f32 d,f32 e,f32 f) {
    f32 k = e + 10.0f;
    f32 j = d + 10.0f;
    f32 h = b + 10.0f;
    f32 g = a + 10.0f;
    u32 first, second, third;
    first = second = third = id;
    FUN_00296dc4(id,first,second,third,a,b,c,d,e,f,g,h,c,j,k,f);
}
}
