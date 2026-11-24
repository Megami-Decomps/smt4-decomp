/* NON_MATCHING: the alpha scale and the primary-drawn sentinel swap VFP registers. */
#include "battle/btlMain.h"
#include "battle/BtlEntryLookup.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match8_BattleSpritePlacement.h"
#include "shard/JobWork.h"
#include "gfx/EffectColorUnpack.h"

/* The marker draw calls only use the packed colour's alpha component. */
static __inline f32 normalizedMarkerAlpha(u32 packed)
{
    EffectColor color;
    return effectColorUnpack(packed, &color)->alpha;
}

namespace {
struct RosterSpriteFrame {
    u8 unk00[0x10];
    BattleSpriteFrame *frame;
};
}

extern "C" {
void gxResetColorQuadToWhite(void);
RosterSpriteFrame *stateEntryFindById(BtlMainStateA *state, u32 id);
void FUN_0041a534(void *marker, const BattleVector3 *position, f32 alpha);
void FUN_0041a834(void *marker, const BattleVector3 *position, f32 alpha);

/* Draws the selected combatants' marker sprites for the upper battle screen. */
u32 btlDrawSelectedCombatantMarkers(u32 job)
{
    BtlMainStateA *state = (BtlMainStateA *)jobGetWork(job);
    gxResetColorQuadToWhite();
    f32 primaryDrawn = 0.0f;
    for (s32 i = 4; i < 54; ++i) {
        if (primaryDrawn == 0.0f) {
            BattleRosterRecordA *record = &state->roster[i];
            if (record != NULL && (record->motion.flags & 0x40001) != 0 &&
                (record->motion.flags & 2) != 0 && (record->motion.flags & 0x4000) == 0 &&
                (record->motion.statusFlags & 0x800) != 0 && (record->motion.flags & 0x100000) == 0) {
                if ((record->motion.flags & 0x200000) != 0) {
                    BattleVector3 position;
                    position.x = record->spriteOffset.x;
                    position.y = record->spriteOffset.y;
                    position.z = 0.0f;
                    FUN_0041a834(record->motion.selection, &position, normalizedMarkerAlpha(record->motion.color));
                } else {
                    BtlUnitDataA *sprite = btlFindEntryBlockByMemberId(state, record->combatant.parameterIndex);
                    const BattleSpriteFrame *frame = stateEntryFindById(state, sprite->parts[0])->frame;
                    BattleVector3 position = *(const BattleVector3 *)record->motion.position;
                    const u32 height = frame->height;
                    f32 scale = record->motion.scale;
                    f32 scaledHeight = (f32)height * scale;
                    f32 baselineOffset = (f32)(143 - (frame->top + (s32)height)) * scale;
                    position.y += baselineOffset + scaledHeight;
                    position.y += record->motion.scale * 2.0f;
                    position.x += record->spriteOffset.x;
                    position.y += record->spriteOffset.y;
                    FUN_0041a534(record->motion.selection, &position, normalizedMarkerAlpha(record->motion.color));
                    if ((record->motion.flags & 0x10) != 0) {
                        primaryDrawn = 1.0f;
                    }
                }
            }
        }
    }
    return 0;
}
} /* extern "C" */
