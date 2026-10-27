/* NON_MATCHING: retail emits 'mov r1, r0'; compiler emits 'add r1, r4, r4, lsl #1' at the first differing instruction. */
#include "common.h"
#include "gamedata/DataTable.h"
extern "C" {
struct Entry { u8 unk00[0x20]; u16 value; u8 unk22[0xA]; };
u16 dataTableGetEntryValue(u32 index) {
    Entry *entries = (Entry *)dataTableGetEntries(dataTableGet(0x4A, 0));
    Entry *entry = &entries[index];
    if (entry != NULL) {
        return entry->value;
    }
    return 0;
}
}
