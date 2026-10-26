/* NON_MATCHING: call structure now matches retail (three setHandleEnabled arms); retail places `marked = NULL` at the loop exit, addresses reflected[] from the 0x2300 block and tests the guards as separate branches. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
void setHandleEnabled(u32 handle, s32 enabled);
void callOnHandleField4B(u32 handle, f32 x, f32 y, f32 z);
void callOnHandleField4C(u32 handle, f32 x, f32 y, f32 z);
void callOnHandleField4D(u32 handle, f32 x, f32 y, f32 z);

/* Updates environment model visibility from the marked combatant and reapplies each slot's transform. */
void FUN_003ebad4(BtlMainStateA *battle)
{
    struct EnvironmentView {
        /* 0x0000 */ u8 unk0000[0x22BC];
        /* 0x22BC */ u32 handles[4];
        /* 0x22CC */ u8 loaded;
        /* 0x22CD */ u8 ready;
        /* 0x22CE */ u8 unk22CE[2];
        /* 0x22D0 */ BattleVector3 positions[4];
        /* 0x2300 */ BattleVector3 rotations[4];
        /* 0x2330 */ f32 scales[4];
        /* 0x2340 */ u8 reflected[4];
    };
    typedef char EnvironmentViewOffsetsCheck[offsetof(EnvironmentView, positions) == 0x22D0 &&
        offsetof(EnvironmentView, rotations) == 0x2300 &&
        offsetof(EnvironmentView, scales) == 0x2330 &&
        offsetof(EnvironmentView, reflected) == 0x2340 ? 1 : -1];
    EnvironmentView *environment = (EnvironmentView *)battle;
    if (environment->loaded == 0 || environment->ready == 0) {
        return;
    }
    BattleRosterRecordA *marked = NULL;
    for (s32 index = 4; index < 54; ++index) {
        BtlCombatantEntryA *entry = &battle->entries[index];
        if (entry->selection.marked != 0) {
            marked = &battle->roster[entry->unitIndex];
            break;
        }
    }
    for (s32 index = 0; index < 4; ++index) {
        if (environment->handles[index] != 0) {
            if (environment->reflected[index] != 0 && marked != NULL &&
                (marked->marker.flags & 0x800) != 0) {
                if ((marked->render.flags & 0x4000) != 0) {
                    setHandleEnabled(environment->handles[index], 1);
                } else {
                    if ((marked->marker.flags & 0x2000) != 0) {
                        setHandleEnabled(environment->handles[index], 1);
                    } else {
                        setHandleEnabled(environment->handles[index], 0);
                    }
                }
            } else {
                setHandleEnabled(environment->handles[index], 1);
            }
            const BattleVector3 &position = environment->positions[index];
            callOnHandleField4B(environment->handles[index], position.x, position.y, position.z);
            const BattleVector3 &rotation = environment->rotations[index];
            callOnHandleField4C(environment->handles[index], rotation.x, rotation.y, rotation.z);
            f32 scale = environment->scales[index];
            callOnHandleField4D(environment->handles[index], scale, scale, scale);
        }
    }
}
}
