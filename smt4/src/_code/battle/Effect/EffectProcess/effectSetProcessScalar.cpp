#include "common.h"
extern "C" {
struct EffectProcess { u8 unk00[0x520]; f32 value; };
extern EffectProcess *g_effectProcessActive;
/* Store the active effect process scalar. */
void effectSetProcessScalar(f32 value) { g_effectProcessActive->value = value; }
}
