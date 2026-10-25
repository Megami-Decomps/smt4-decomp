/* Walks the table of 84-byte entries and fires gameSaveWorkOrFlagMask for each entry that matches the given id and whose two flags are not both set. */
#include "common.h"

extern "C" {

typedef struct {
    u16 id;         /* 0x00 */
    u8 unk02[12];   /* 0x02 */
    u16 matchA;     /* 0x0e */
    u16 matchB;     /* 0x10 */
    u16 flagA;      /* 0x12 */
    u16 flagB;      /* 0x14 */
    u8 unk16[0x3c]; /* 0x16 */
    u8 param;       /* 0x52 */
    u8 unk53[1];    /* 0x53 */
} TableEntry;

void gameSaveWorkOrFlagMask(s32 id, s32 param);
u32 dataTableGet(u32 group, u32 index);
s32 gameFlagIsSet(u16 flag);
u32 dataTableGetCount(u32 group);
TableEntry *dataTableGetEntries(void);

void tableFireMatchingEntries(u32 matchId)
{
    if ((s32)matchId < 0) {
        return;
    }
    u32 group = dataTableGet(0x35, 1);
    TableEntry *entry = dataTableGetEntries();
    u32 count = dataTableGetCount(group);
    u32 i;

    for (i = 0; i < count; i++, entry++) {
        if (entry->matchA == matchId || entry->matchB == matchId) {
            if (gameFlagIsSet(entry->flagA) == 0 || gameFlagIsSet(entry->flagB) == 0) {
                gameSaveWorkOrFlagMask(entry->id, entry->param);
            }
        }
    }
}

} /* extern "C" */
