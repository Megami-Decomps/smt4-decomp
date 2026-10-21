#include "common.h"

struct PackedScalarControl {
    u32 flags;  // 0x00
    f32 value;  // 0x04
    f32 lower;  // 0x08
    f32 upper;  // 0x0c
};

extern "C" u32 FUN_001af090(f32 value);

// Initialize the scalar range and pack a seven-bit category into its flags.
extern "C" void packedScalarControlInit(PackedScalarControl* control, u32 category, f32 value)
{
    u32 encoded = FUN_001af090(-value);
    control->value = value;
    control->lower = 0.0f;
    control->upper = 1.0f;
    control->flags = encoded | ((category & 0x7f) << 24) | 0x80000000u;
}
