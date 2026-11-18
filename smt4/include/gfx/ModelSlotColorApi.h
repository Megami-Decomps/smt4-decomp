#ifndef SMT4_GFX_MODELSLOTCOLORAPI_H
#define SMT4_GFX_MODELSLOTCOLORAPI_H
#include "common.h"
struct Obj003c7f08;
extern "C" {
// The outer interface retains an unused GP word; RGB is passed in s0-s2.
void asdModelClearSlotColors(u32 unused, f32 red, f32 green, f32 blue);
void objModelSlotClearColor(Obj003c7f08 *object, f32 red, f32 green, f32 blue);
void asdModelSlotSetColor(u32 slot, u32 bank, f32 red, f32 green, f32 blue);
}
#endif
