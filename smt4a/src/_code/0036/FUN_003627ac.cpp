#include "common.h"

struct FloatPair {
    f32 first;
    f32 second;
};

extern "C" {
extern FloatPair DAT_005c10c4;

/* Stores the current floating-point pair. */
void FUN_003627ac(FloatPair value)
{
    DAT_005c10c4 = value;
}
}
