#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemUtil.h"
#include "util/Random.h"

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
u32 FUN_003ac480();
void drawParameterBlockClear(UiResourceParameters *parameters);


/* Animation tables for paramsInit, defined statically in the original file. */
struct LegionFloatKey {
    f32 from;
    f32 to;
    s32 frames;
};
static const u32 sMoveKeys[9] = { 0x140, 0x0, 0x8, 0x0, 0xfec0, 0x4, 0x172, 0x0, 0x10040 };
static const LegionFloatKey sFadeKeys[2] = { { 0.0f, 1.0f, 8 }, { 1.0f, 0.0f, 8 } };
static const s32 sSpriteKeys[28] = { -3, 0, -3, -3, 0, -3, 0, -3, 0, -3, -3, 0, -3, 0, -3, 0, -3, -2, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0 };

/* Acquires the legion draw: allocates and initialises its state on first use, then (for the first
 * user) starts its process and builds its four sprites. Counts the users. */
void FUN_003ad0e0()
{
    if (g_countdown.count <= 0) {
        if (g_countdown.state == NULL) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\bible\\bibleLegionDraw.cpp", 825);
            g_countdown.state = static_cast<LegionDrawState *>(asdMemAlloc(0x100, 0x100, 0,
                sizeof(LegionDrawState), 1));
            LegionDrawState *state = g_countdown.state;
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
        state->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("LegionDrawUp CALC"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_003ac480), NULL, NULL);
        drawParameterBlockClear(&state->parameters);
        paramsInit(&state->parameters, sMoveKeys, sizeof(sMoveKeys), sFadeKeys, sizeof(sFadeKeys),
            NULL, 0, NULL, 0, sSpriteKeys, sizeof(sSpriteKeys));
        for (s32 index = 0; index < 2; ++index) {
            uiSpriteStateInitFromSource(&state->sprites[index], 0x23, 0, &state->parameters, 0x15, 1.0f);
            uiSpriteSetImageKeyframe(&state->sprites[index], 0, 0);
            uiSpriteStateInitFromSource(&state->sprites[index + 2], 0x23, 0, &state->parameters, 0x15, 1.0f);
            uiSpriteSetImageKeyframe(&state->sprites[index + 2], 1, 0);
        }
    }
    ++g_countdown.count;
}
}
