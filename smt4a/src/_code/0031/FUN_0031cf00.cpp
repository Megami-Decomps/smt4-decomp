/* NON_MATCHING: Retail ldr r1, [pc, #132] differs from recovered ldr r0, [pc, #120]. */
#include "gamedata/GameSaveBlocks.h"

// Find the first party record whose devil is the one the saved record names.
extern "C" SlotRecordA *FUN_0031cf00(void)
{
    SlotRecordA *result = 0;
    GameSaveBodyA *body = &g_gameDataBlocks.saveBlock->body;
    s32 identifier = body->record.tail.value;
    SaveSlotTableA *lookup = &body->slots;

    if (identifier != 0) {
        for (s32 slot = 0; slot < 24; ++slot) {
            s32 recordIndex = lookup->party[slot];
            if (recordIndex >= 0 && lookup->entries[recordIndex].id == identifier) {
                result = &lookup->entries[lookup->party[slot]];
                break;
            }
        }
    }
    return result;
}
