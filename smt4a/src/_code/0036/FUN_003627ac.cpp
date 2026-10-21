#include "common.h"

struct FloatPair {
    f32 first;
    f32 second;
};

extern "C" {
extern FloatPair g_uiDrawOffset;

/* Stores the current floating-point pair. */
void FUN_003627ac(FloatPair value)
{
    g_uiDrawOffset = value;
}
}
