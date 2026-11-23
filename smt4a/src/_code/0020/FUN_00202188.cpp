/* NON_MATCHING: retail moves flags into r1 before loading the text-defaults address into r3; the build loads the address into r1 and moves flags last. */
#include "common.h"
#include "code/Code0018_Smt4a.h"
#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

struct TextContext;

extern "C" {
extern AsdTextDefaultsA g_asdTextDefaults;

void FUN_00202188(TextContext* context, s32 x, s32 y,
                  u32 flags, u32 limit, f32 opacity)
{
    textLayoutDraw(context, static_cast<f32>(x), static_cast<f32>(y),
                 flags, limit, g_asdTextDefaults.scale, opacity);
}
}
