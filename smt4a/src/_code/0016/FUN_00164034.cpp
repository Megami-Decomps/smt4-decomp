#include "common.h"
#include "code/Code0016.h"

extern "C" {
extern u32 DAT_005b3ce8;
void gpuSubmitDefaultPacket(void);
void FUN_00186244(u32 first, u32 second, u32 third, u32 fourth, f32 value0, f32 value1, f32 value2, f32 value3, f32 value4, f32 value5, f32 value6, f32 value7, f32 value8);
void effectSubmitDefaultParameters(void);

/* Substitutes the shared default for empty integer parameters and submits the scalar parameter block. */
/* The fourth colour is declared after the first four floats: ABI-equal (r3), and it is the order retail copies the arguments in. */
void FUN_00164034(u32 first, u32 second, u32 third, f32 value0, f32 value1, f32 value2, f32 value3, u32 fourth, f32 value4)
{
    if (first == 0) first = DAT_005b3ce8;
    if (second == 0) second = DAT_005b3ce8;
    if (third == 0) third = DAT_005b3ce8;
    if (fourth == 0) fourth = DAT_005b3ce8;
    gpuSubmitDefaultPacket();
    FUN_00186244(first, second, third, fourth, value0, value1, value2, value3, 0.0f, 0.0f, 0.0f, 0.0f, value4);
    effectSubmitDefaultParameters();
}
}
