/* NON_MATCHING: allocation debug-source hook is absent; resource packing and saved registers differ. */
#include "ui/UiSpriteState.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

namespace {
struct LegionDrawState {
    u32 process, value04;
    s16 selection08;
    u16 reserved0A;
    u32 value0C;
    s16 selection10;
    u16 reserved12;
    u32 value14;
    s16 selection18;
    u16 reserved1A;
    u8 flags[4];
    UiResourceParameters parameters;
    UiSpriteState sprites[4];
    u16 phase270, phase272;
    f32 progress274, progress278, scale, speed;
    u16 timer284, timer286;
    s16 duration288, duration28A;
    u8 phase28C, phase28D;
    u8 padding28E[2];
    u8 particles[0x1E0];
    u8 visible;
    u8 padding471[3];
};
struct LegionDrawGlobals { s8 count; u8 padding01[3]; LegionDrawState *state; };
typedef char LegionDrawLayout[sizeof(LegionDrawState) == 0x474 &&
    offsetof(LegionDrawState, sprites) == 0x40 &&
    offsetof(LegionDrawState, particles) == 0x290 ? 1 : -1];
}
extern "C" {
extern LegionDrawGlobals g_countdown;
extern const u8 DAT_004023c4[];
extern const u8 DAT_004023e8[];
extern const u8 DAT_00402400[];
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
s16 randNextInRange(u32 maximum);
void memClear(void *memory, u32 size);
u32 FUN_003ac480();
u32 asdProcessCreateSimple(const char *, s32, u32, u32, u32 (*)(), u32 (*)(), void *);
void drawParameterBlockClear(UiResourceParameters *parameters);
void paramsInit(UiResourceParameters *, const void *, u32, const void *, u32,
    const void *, u32, const void *, u32, const void *, u32);
void FUN_002bd954(UiSpriteState *, u32, u32, UiSpriteSource *, u16, f32);
void uiSpriteSetImageKeyframe(UiSpriteState *, s32 image, s32 frame);

void FUN_003ad0e0()
{
    if (g_countdown.count <= 0) {
        if (g_countdown.state == NULL) {
            LegionDrawState *state = static_cast<LegionDrawState *>(asdMemAlloc(0x100, 0x100, 0,
                sizeof(LegionDrawState), 1));
            g_countdown.state = state;
            state->value04 = 0;
            state->selection08 = -1;
            state->value0C = 0;
            state->selection10 = -1;
            state->value14 = 0;
            state->selection18 = -1;
            state->visible = 0;
            state->flags[0] = 0;
            state->flags[1] = 0;
            state->flags[3] = 0;
            state->flags[2] = 0;
            state->phase270 = 0;
            state->phase272 = 0;
            state->progress274 = 0.0f;
            state->scale = 1.0f;
            state->timer284 = 0;
            state->duration288 = randNextInRange(200) + 100;
            state->phase28C = 0;
            state->progress278 = 0.0f;
            state->speed = -3.0f;
            state->timer286 = 0;
            state->duration28A = randNextInRange(200) + 100;
            state->phase28D = 0;
            memClear(state->particles, sizeof(state->particles));
        }
        LegionDrawState *state = g_countdown.state;
        state->process = asdProcessCreateSimple("LegionDrawUp CALC", 2, 0, 0, FUN_003ac480, NULL, NULL);
        drawParameterBlockClear(&state->parameters);
        paramsInit(&state->parameters, DAT_004023c4, 0x24, DAT_004023e8, 0x18,
            NULL, 0, NULL, 0, DAT_00402400, 0x70);
        UiSpriteSource *source = reinterpret_cast<UiSpriteSource *>(&state->parameters);
        for (s32 index = 0; index < 2; ++index) {
            FUN_002bd954(&state->sprites[index], 0x23, 0, source, 0x15, 1.0f);
            uiSpriteSetImageKeyframe(&state->sprites[index], 0, 0);
            FUN_002bd954(&state->sprites[index + 2], 0x23, 0, source, 0x15, 1.0f);
            uiSpriteSetImageKeyframe(&state->sprites[index + 2], 1, 0);
        }
    }
    ++g_countdown.count;
}
}
