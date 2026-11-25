#include "battle/BattleCommandLookup.h"
#include "gamedata/DataTable.h"
#include "util/BinarySearch.h"

/* Finds a command's contextual hint in the protagonist's or a party member's command list. */
extern "C" const char *btlFindCommandHint(u8 index, s32 protagonist)
{
    ContextCommandDefinition key;
    void *section;
    if (protagonist != 0) {
        section = dataTableGet(0x16, 0);
    } else {
        section = dataTableGet(0x16, 1);
    }
    const void *entries = dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    key.kind = index;
    const ContextCommandDefinition *command = (const ContextCommandDefinition *)libc_bsearch(&key.kind, entries,
        count, sizeof(ContextCommandDefinition), sortCompareByteAscending);
    return command != NULL ? command->hintText : NULL;
}
