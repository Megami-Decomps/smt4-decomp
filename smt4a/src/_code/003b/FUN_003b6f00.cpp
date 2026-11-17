#include "gamedata/PartnerTopicTable.h"
#include "gamedata/FlagsB.h"

extern "C" {

extern s32 gameFlagIsSet(u32 flag);

/* Marks the partner topics whose unlock flag is set (only while flag 0x40F is set); returns 1 if any topic is available. */
s32 FUN_003b6f00(void)
{
    s32 result;

    if (gameFlagIsSet(0x40f) != 0) {
        void *section = dataTableGet(0x44, 0);
        PartnerTopicRecord *entries = partnerTopicRecords(section);
        s32 count = dataTableGetCount(section);
        s32 i;

        result = 0;
        for (i = 0; i < 100; i++) {
            if (i >= count) {
                break;
            }
            if (entries[i].id != 0) {
                if (flagsBGetBit0(entries[i].id) != 0) {
                    if (flagsBGetBit1(entries[i].id) != 0) {
                        result = 1;
                    }
                } else if (entries[i].unlockFlag == 0 || gameFlagIsSet(entries[i].unlockFlag) != 0) {
                    flagsBSetStateBits(entries[i].id);
                    result = 1;
                }
            }
        }
        return result;
    }
    return 0;
}

} /* extern "C" */
