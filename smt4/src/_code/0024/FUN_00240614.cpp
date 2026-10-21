#include "shard/W6_W6Match1_BattleVersionResources.h"

extern "C" {
u32 keyedRecordRegisterName(u8* work);
u32 FUN_00249e54(u32 state, u8* data);

void FUN_00240614(BattleVersionResources* resources)
{
    for (s32 index = 0; index < 11; ++index) {
        BattleVersionResourceSlot* slot = &resources->slots[index];
        u8* data = slot->data;
        if (data[0] == 'V' && data[1] == 'E' && data[2] == 'R') {
            u32 state = keyedRecordRegisterName(slot->work);
            slot->state = state;
            slot->state = FUN_00249e54(state, data);
        }
    }
}
}
