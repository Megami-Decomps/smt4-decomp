#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryVoice.h"
#include "battle/BtlEntryA.h"

/* Plays the requested voice line for the currently selected entry if it is eligible. */
extern "C" void btlPlaySelectedEntryVoice(s32 kind)
{
    BtlMainStateA *battle = btlGetMainState();
    s16 selection = battle->commandEntry.selection;
    if (selection < 0) {
        return;
    }
    BtlCombatantEntryA *entry = &battle->entries[selection];
    if ((entry->flags & DAT_00573cc0.selected) != 0) {
        s16 id = (s16)entry->data.id;
        if (id < 0) {
            return;
        }
        FUN_0015f490(id, kind, 1.0f, 1, 0);
    }
}
