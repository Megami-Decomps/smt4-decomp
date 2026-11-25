#include "battle/BtlDebugMenuEntry.h"
#include "gamedata/DataTable.h"
#include "util/BinarySearch.h"

/* Finds a command's contextual hint in the protagonist's or a party member's command list. */
extern "C" const char *btlFindCommandHint(u8 index, s32 protagonist)
{
    BtlDebugEntry key;
    void *section;
    if (protagonist != 0) {
        section = dataTableGet(0x16, 0);
    } else {
        section = dataTableGet(0x16, 1);
    }
    const void *entries = dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    key.kind = index;
    const BtlDebugEntry *command = (const BtlDebugEntry *)libc_bsearch(&key.kind, entries, count,
        sizeof(BtlDebugEntry), dataSet16CompareByteKeys);
    return command != NULL ? command->hintText : NULL;
}
