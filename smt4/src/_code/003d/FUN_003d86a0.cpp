/* NON_MATCHING: the zero vectors now store z, y, x as retail does and the copies store with one stm; retail also
 * loads each copied vector with one ldm (the build splits off one word), and saves one register fewer. */
#include "gfx/CameraPoseBlend.h"
#include "battle/btlMain.h"
#include "battle/btlCamera.h"

/* Clears a vector (z, y, then x: retail's store order). */
static __inline void battleVectorClear(BattleVector3 *v)
{
    v->x = v->y = v->z = 0.0f;
}

extern "C" {
/* NOTE: declared by value here, unlike battle/BtlGlobals.h's pointer (retail check pending). */
extern BtlCameraStatics g_btlMain;
extern BattleVector3 DAT_00493518[4];

void FUN_003d86a0(CameraPoseBlendView *camera, u32 unused, u32 duration)
{
    // These transition tracks extend past the shared pose-blend prefix.
    struct ScalarTrack { f32 current, target, delta; u32 duration, frame, mode; };
    struct PairedTrack {
        f32 currentFirst, targetFirst, deltaFirst;
        f32 currentSecond, targetSecond, deltaSecond;
        u32 duration, frame, mode;
    };
    struct VectorTrack { BattleVector3 current, target, delta; u32 duration, frame, mode; };
    struct ResetView {
        union {
            CameraPoseBlendView pose;
            struct {
                u8 prefix[0x5a4];
                f32 referenceScalar;
                u8 unk5A8[0x40];
                f32 endScalar;
                u8 unk5EC[0x40];
                f32 startScalar;
            } scalars;
        };
        u8 unk63C[0x1c];
        BattleVector3 firstSnapshot;
        u8 unk664[0xc];
        f32 scalarSnapshot;
        u8 unk674[0xc];
        u32 duration, enabled;
        u8 unk688[0x10];
        f32 upSnapshot;
        u8 unk69C[0xc];
        f32 angleSnapshot;
        u8 unk6AC[0xc];
        f32 progress;
        u8 unk6BC[0x10];
        BattleVector3 positionSnapshot;
        u8 unk6D8[0xc];
        BattleVector3 secondSnapshot;
        u8 unk6F0[0xa4];
        ScalarTrack first, second;
        PairedTrack paired;
        VectorTrack position, target;
    };
    typedef char LayoutCheck[offsetof(ResetView, duration) == 0x680 &&
        offsetof(ResetView, first) == 0x794 &&
        offsetof(ResetView, position) == 0x7e8 &&
        offsetof(ResetView, target) == 0x818 ? 1 : -1];
    ResetView *state = reinterpret_cast<ResetView *>(camera);
    camera->flags &= ~0x200000u;
    if ((camera->flags & 0x100000) == 0) {
        state->progress = 0.0f;
        state->first.target = state->first.current;
        state->second.target = state->second.current;
        state->paired.targetSecond = state->paired.currentSecond;
        state->paired.targetFirst = state->paired.currentFirst;
        battleVectorCopy(&state->position.target, &state->position.current);
        battleVectorCopy(&state->target.target, &state->target.current);
        state->first.delta = 0.0f;
        state->second.delta = 0.0f;
        state->paired.deltaSecond = 0.0f;
        state->paired.deltaFirst = 0.0f;
        battleVectorClear(&state->position.delta);
        battleVectorClear(&state->target.delta);
        state->first.frame = 0;
        state->second.frame = 0;
        state->paired.frame = 0;
        state->position.frame = 0;
        state->target.frame = 0;
        camera->start.up.x = state->upSnapshot;
        g_btlMain.scalar = state->scalarSnapshot;
        camera->start.scalar = state->angleSnapshot;
        state->scalars.startScalar = state->scalars.referenceScalar;
        battleVectorCopy(&camera->start.position, &state->positionSnapshot);
        battleVectorCopy(&DAT_00493518[0], &state->firstSnapshot);
        battleVectorCopy(&DAT_00493518[2], &state->secondSnapshot);
        camera->end.up.x = 0.0f;
        g_btlMain.scalarDelta = 0.0f;
        camera->end.scalar = 0.0f;
        state->scalars.endScalar = 0.0f;
        battleVectorClear(&camera->end.position);
        battleVectorClear(&DAT_00493518[1]);
        battleVectorClear(&DAT_00493518[3]);
        state->enabled = 1;
        state->duration = duration;
        camera->flags |= 0x10;
    }
}
}
