#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

struct BattleBoundObject {
    u32 unk00;
    u32 flags;
    u8 unk08[0x1F4];
    f32 weight;
};
struct BattleBoundHandle {
    u32 unk00;
    BattleBoundObject *object;
};
struct BattleObjectBinding {
    BattleBoundHandle *handle;
    s32 first;
    s32 second;
    u8 unk0C[0x10];
    s32 unitIndex;
    u32 unk20;
    u32 flags;
};
struct BattleObjectBindings {
    u8 prefix[0x190];
    BattleObjectBinding entries[50];
};
typedef char BattleObjectBindingLayoutCheck[sizeof(BattleObjectBinding) == 0x28 &&
    offsetof(BattleObjectBinding, unitIndex) == 0x1C &&
    offsetof(BattleBoundObject, weight) == 0x1FC ? 1 : -1];
extern "C" {
BtlMainStateA *btlGetMainState(void);
void FUN_003fe86c(BattleBoundObject *, s32, s32, f32, f32);
}

extern "C" void btlResetMatchingBoundObjects(BattleObjectBindings *bindings, s32 first, s32 second)
{
    for (s32 i = 0; i < 50; ++i) {
        BattleObjectBinding *binding = &bindings->entries[i];
        if (!(binding->flags & 8) && binding->handle != NULL &&
            binding->first == first && binding->second == second) {
            BattleBoundObject *object = binding->handle->object;
            FUN_003fe86c(object, 0, 2, 0.0f, 0.0f);
            object->weight = 1.0f;
            object->flags &= ~3;
            binding->flags |= 8;
            const BattleRosterRecordA *unit = &btlGetMainState()->roster[binding->unitIndex];
            if (unit->liveFlags.unk50 & 0x10) {
                if (!(unit->liveFlags.unk10C & 2)) {
                    object->flags |= 1;
                }
            } else if (!(unit->liveFlags.unk50 & 0x80000)) {
                object->flags |= 1;
            }
        }
    }
}
