#include "common.h"
#include "shard/FUN_00167618.h"

extern "C" {
extern u32 DAT_005b3ce8;
void FUN_0019ea00();
void FUN_00186244(u32 first, u32 second, u32 third, u32 fourth,
                  f32 value0, f32 value1, f32 value2, f32 value3,
                  f32 value4, f32 value5, f32 value6, f32 value7, f32 value8);
void effectSubmitDefaultParameters();

/* The fourth colour is declared after the first four floats: ABI-equal (r3), and it is the order retail copies the arguments in. */
void FUN_00167618(u32 first, u32 second, u32 third,
                  f32 firstValue, f32 secondValue, f32 thirdValue, f32 fourthValue,
                  u32 fourth, f32 lastValue)
{
    if (first == 0) {
        first = DAT_005b3ce8;
    }
    if (second == 0) {
        second = DAT_005b3ce8;
    }
    if (third == 0) {
        third = DAT_005b3ce8;
    }
    if (fourth == 0) {
        fourth = DAT_005b3ce8;
    }
    FUN_0019ea00();
    FUN_00186244(first, second, third, fourth, firstValue, secondValue,
                  thirdValue, fourthValue, 0.0f, 0.0f, 0.0f, 0.0f, lastValue);
    effectSubmitDefaultParameters();
}
}
