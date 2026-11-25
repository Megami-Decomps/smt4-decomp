#include "battle/BattleCommandLookup.h"
#include "gamedata/DataTable.h"
#include "util/BinarySearch.h"

extern "C" {

/* Finds a command by index in table 22's protagonist or party-member list. */
const ContextCommandDefinition *btlDebugFindCommandByIndex(u8 index, bool protagonist)
{
    ContextCommandDefinition key;
    void *section;
    if (protagonist) {
        section = dataTableGet(0x16, 0);
    } else {
        section = dataTableGet(0x16, 1);
    }
    const void *entries = dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    key.kind = index;
    /* Only the leading byte is used as a key; the array stride is still a full row. */
    return (const ContextCommandDefinition *)libc_bsearch(&key.kind, entries, count, sizeof(ContextCommandDefinition),
        sortCompareByteAscending);
}

} /* extern "C" */
