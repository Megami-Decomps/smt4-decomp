/* NON_MATCHING: retail emits 'vldr s4, [pc, #40]'; compiler emits 'vldr s6, [pc, #40]' at the first differing instruction. */
#include "common.h"
extern "C" {
f32 sqrtf(f32);
struct Vector {
    f32 x,y,z;
};
void FUN_003250ac(Vector *output,f32 x,f32 y,f32 z,f32 targetX,f32 targetY,f32 targetZ) {
    f32 dx=targetX-x,dy=targetY-y,dz=targetZ-z;
    f32 reciprocal=1.0f/sqrtf(dx*dx+dy*dy+dz*dz);
    output->x=dx*reciprocal;
    output->y=dy*reciprocal;
    output->z=dz*reciprocal;
}
}
