#include "common.h"
extern "C" {
struct Vector { f32 x, y, z; };
extern struct { u8 unk00[0x400]; struct { u8 unk00[0x118]; Vector value; } effect; } *g_effectProcessActive;
/* Sets the active effect's vector parameter. */
void effectProcessSetVector(const Vector *value) { g_effectProcessActive->effect.value = *value; }
}
