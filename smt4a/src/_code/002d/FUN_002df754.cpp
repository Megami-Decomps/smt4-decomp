/* NON_MATCHING: separate scaled-height/baseline products recover retail arithmetic; zero/constants and initial roster address registers differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match8_BattleSpritePlacement.h"

namespace {
struct RosterSpriteId {
    u8 unk00[0xC];
    u32 id;
};
struct RosterSpriteFrame {
    u8 unk00[0x10];
    BattleSpriteFrame *frame;
};
}

extern "C" {
BtlMainStateA *jobGetWork(u32 job);
void FUN_00183bb0(void);
RosterSpriteId *FUN_001568f8(BtlMainStateA *state, s32 index);
RosterSpriteFrame *stateEntryFindById(BtlMainStateA *state, u32 id);
void FUN_0041a534(void *marker, const BattleVector3 *position, f32 alpha);
void FUN_0041a834(void *marker, const BattleVector3 *position, f32 alpha);

u32 FUN_002df754(u32 job)
{
    BtlMainStateA *state = jobGetWork(job);
    FUN_00183bb0();
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
                    FUN_0041a834(record->motion.selection, &position,
                        static_cast<f32>(record->motion.color & 0xFF) * (1.0f / 255.0f));
                } else {
                    RosterSpriteId *sprite = FUN_001568f8(state, record->combatant.parameterIndex);
                    const BattleSpriteFrame *frame = stateEntryFindById(state, sprite->id)->frame;
                    BattleVector3 position = *reinterpret_cast<BattleVector3 *>(record->motion.position);
                    const u32 height = frame->height;
                    f32 scale = record->motion.scale;
                    f32 scaledHeight = static_cast<f32>(height) * scale;
                    f32 baselineOffset = static_cast<f32>(143 - (frame->top + static_cast<s32>(height))) * scale;
                    position.y += baselineOffset + scaledHeight;
                    position.y += record->motion.scale * 2.0f;
                    position.x += record->spriteOffset.x;
                    position.y += record->spriteOffset.y;
                    FUN_0041a534(record->motion.selection, &position,
                        static_cast<f32>(record->motion.color & 0xFF) * (1.0f / 255.0f));
                    if ((record->motion.flags & 0x10) != 0) {
                        primaryDrawn = 1.0f;
                    }
                }
            }
        }
    }
    return 0;
}
}
