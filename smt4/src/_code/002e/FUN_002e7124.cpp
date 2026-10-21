#include "common.h"

struct FloatPair {
    f32 first;
    f32 second;
};

extern "C" {
extern FloatPair DAT_004724cc;

/* Stores the current floating-point pair. */
void FUN_002e7124(FloatPair value)
{
    DAT_004724cc = value;
}
}
