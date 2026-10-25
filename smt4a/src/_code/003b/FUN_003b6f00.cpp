#include "common.h"
#include "gamedata/FlagsB.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x30];
    /* 0x32 */ u16 flag;
} Entry; /* 0x34 */

extern s32 gameFlagIsSet(u32 flag);
extern void *dataTableGet(s32 table, s32 section);
extern Entry *dataTableGetEntries(void *section);
extern s32 dataTableGetCount(void *section);

/* Walks the table (only while flag 0x40F is set); returns 1 if any entry was applied. */
s32 FUN_003b6f00(void)
{
    s32 result;

    if (gameFlagIsSet(0x40f) != 0) {
        void *section = dataTableGet(0x44, 0);
        Entry *entries = dataTableGetEntries(section);
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
                } else if (entries[i].flag == 0 || gameFlagIsSet(entries[i].flag) != 0) {
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
