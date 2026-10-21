/* NON_MATCHING: retail uses mov r4, r2 where the compiled block uses vmov.f32 s3, s0. */
#include "common.h"

struct TextContext;

struct TextDefaults {
    s8 enabled;       // 0x00
    u8 unk01[3];      // 0x01
    f32 scale;        // 0x04
};

extern "C" {
extern TextDefaults g_asdTextDefaults;

void FUN_00180998(TextContext* context, u32 flags, u32 limit,
                  f32 x, f32 y, f32 scale, f32 opacity);

void FUN_00202188(TextContext* context, s32 x, s32 y,
                  u32 flags, u32 limit, f32 opacity)
{
    FUN_00180998(context, flags, limit,
                 static_cast<f32>(x), static_cast<f32>(y),
                 g_asdTextDefaults.scale, opacity);
}
}
