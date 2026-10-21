#include "common.h"

struct EffectValue {
    /* 0x000 */ u8 unk000[0x578];
    /* 0x578 */ f32 value;
};

/* Updates the effect's floating-point value. */
extern "C" void FUN_004f18dc(EffectValue *effect, f32 value)
{
    effect->value = value;
}
