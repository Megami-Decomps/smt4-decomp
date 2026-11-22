#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

extern "C" {
u32 FUN_00249e54(u32 state, u8* data);

void nameEntriesRegisterVerNames(BattleVersionResources* resources)
{
    for (s32 index = 0; index < 11; ++index) {
        BattleVersionResourceSlot* slot = &resources->slots[index];
        u8* data = slot->data;
        if (data[0] == 'V' && data[1] == 'E' && data[2] == 'R') {
            u32 state = keyedRecordRegisterName((const char *)slot->work);
            slot->state = state;
            slot->state = FUN_00249e54(state, data);
        }
    }
}
}
