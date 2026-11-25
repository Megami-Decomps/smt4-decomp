#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"

extern "C" {

/* Queues the pending color/opacity updates for active battle action records. */
u32 btlReflectQueuePendingRosterFade(u32 actor, u32 options, u32 value)
{
    BtlMainState *battle = btlGetMainState();
    for (s32 index = 4; index < 54; ++index) {
        BtlActionRecord *entry = &battle->actions[index];
        if ((entry->status & 1) != 0 && (entry->status & 2) != 0 && (entry->status & 0x10000) != 0) {
            if (entry->editorRestore.current == 0x4C4C4CFF) {
                reflectCreateKind21(actor, options, (u32)entry, entry->editorRestore.saved, value, 0);
            } else {
                reflectCreateKind22(actor, options, (u32)entry, 0xFF, value, 0);
            }
            entry->status &= ~0x10000;
        }
    }
    return 1;
}
} /* extern "C" */
