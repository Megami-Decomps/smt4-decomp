#include "common.h"
extern "C" {
extern struct { u8 unk00[0x400]; struct { u8 unk00[0x124]; f32 value; } effect; } *g_effectProcessActive;
/* Updates the active effect's floating-point parameter. */
void effectProcessSetValue(f32 value) {
    g_effectProcessActive->effect.value = value;
}
}
