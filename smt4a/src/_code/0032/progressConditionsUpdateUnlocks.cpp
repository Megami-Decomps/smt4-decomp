#include "gamedata/CampCecTable.h"
#include "shard/Shard003D.h"
#include "shard/ProgressUnlock.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/GameDataAccess.h"

extern "C" {
void countersRecordPlayerMaxima();
u32 countersGetA(s32);
u32 countersGetB(s32);
s32 FUN_003dfe88();
s32 FUN_003dfd44();

/* Earns every title whose required flag is set and whose play counter has reached its minimum,
 * marking it earned and pending in the save. */
void progressConditionsUpdateUnlocks()
{
    countersRecordPlayerMaxima();
    s32 count = campCecCount();
    for (s32 index = 0; index < count; ++index) {
        if (unlockBitIsEarned(index))
            continue;
        CampCecRecord *entry = &campCecRecords()[index];
        if (entry == NULL)
            continue;
        bool allowed = true;
        if (entry->requiredFlag != 0 && !gameFlagIsSet(entry->requiredFlag))
            allowed = false;
        u16 counter = entry->counter;
        if (counter != 0) {
            if (counter < 0x40) {
                if (countersGetA((u8)counter) < entry->minimum)
                    continue;
            } else {
                u32 value = 0;
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
                if (value < entry->minimum)
                    continue;
            }
        }
        if (allowed) {
            unlockBitSetEarned(index);
            unlockBitSetPending(index);
        }
    }
}
} /* extern "C" */
