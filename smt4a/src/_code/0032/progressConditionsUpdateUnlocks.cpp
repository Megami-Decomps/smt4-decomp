/* NON_MATCHING: retail tail-merges the twelve countersGetB calls (each case only sets r0, one shared bl) and keeps the minimum compare after the switch; armcc here emits one call per case. The save-byte pointer and bit index now match. */
#include "gamedata/DataTable.h"
#include "shard/Shard003D.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/GameDataAccess.h"

struct ProgressUnlockCondition {
    u8 unk00[0x22];
    u16 counter;
    u32 minimum;
    u32 requiredFlag;
};

extern "C" {
void countersRecordPlayerMaxima();
u32 countersGetA(s32);
u32 countersGetB(s32);
s32 FUN_003dfe88();
s32 FUN_003dfd44();

void progressConditionsUpdateUnlocks()
{
    countersRecordPlayerMaxima();
    s32 count = dataTableGetCount(dataTableGet(0x4a, 0));
    for (s32 index = 0; index < count; ++index) {
        s32 byte = index / 8;
        s32 bit = index % 8;
        GameBlock2830C *save = reinterpret_cast<GameBlock2830C *>(gameDataBlocksGetSaveData());
        u8 *earned = &save->unlocks.earned[byte];
        u32 bits = *earned;
        if (bits & (1u << bit))
            continue;
        ProgressUnlockCondition *entries = static_cast<ProgressUnlockCondition *>(
            dataTableGetEntries(dataTableGet(0x4a, 0)));
        ProgressUnlockCondition *entry = &entries[index];
        if (entry == NULL)
            continue;
        bool allowed = true;
        if (entry->requiredFlag != 0 && !gameFlagIsSet(entry->requiredFlag))
            allowed = false;
        u16 counter = entry->counter;
        if (counter != 0) {
            u32 value = 0;
            if (counter < 0x40) {
                value = countersGetA((u8)counter);
            } else {
                switch ((u8)counter) {
                case 0x40: value = countersGetB(0x27); break;
                case 0x41: value = countersGetB(9); break;
                case 0x42: value = countersGetB(10); break;
                case 0x43: value = countersGetB(4); break;
                case 0x44: value = countersGetB(5); break;
                case 0x45: value = countersGetB(0x22); break;
                case 0x46: value = countersGetB(0x1e); break;
                case 0x47: value = countersGetB(11); break;
                case 0x48: value = countersGetB(3); break;
                case 0x49: value = countersGetB(0x16); break;
                case 0x4a: value = countersGetB(0x19); break;
                case 0x4b: value = countersGetB(0x12); break;
                case 0x4c: value = FUN_003dfe88(); break;
                case 0x4d: value = FUN_003dfd44(); break;
                }
            }
            if (value < entry->minimum)
                continue;
        }
        if (allowed) {
            save = reinterpret_cast<GameBlock2830C *>(gameDataBlocksGetSaveData());
            save->unlocks.earned[byte] |= 1u << bit;
            save = reinterpret_cast<GameBlock2830C *>(gameDataBlocksGetSaveData());
            save->unlocks.pending[byte] |= 1u << bit;
        }
    }
}
}
