/* NON_MATCHING: header stores do not combine into STRD and cached-count register allocation differs. */
/* Emits a selected cached graphics-command record, generating its words on first use. */
#include "gfx/CachedCommands.h"

extern "C" {
extern u8 DAT_005dee3e;
void FUN_0019a270(u32 *destination, u32 parameter, u32 command);
u32 *FUN_00501084(CachedCommandWords *commands, u32 *words);
void FUN_00500fe4(CachedCommandWords *commands, u32 *destination, const void *trailer);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);

void FUN_00419c34(CachedCommandTable *table, u32 *destination, u32 index, u32 parameter)
{
    CachedCommandRecord *record = table->records[index];
    if (record != NULL) {
        const void *trailer = record->trailer;
        destination[0] = 0x80000000u | DAT_005dee3e;
        destination[1] = 0xF02C0;
        destination += 2;
        FUN_0019a270(destination, parameter, 0xBF02C1);
        CachedCommandWords *commands = &record->commands;
        destination += 14;
        if (commands->count == 0) {
            u32 *end = FUN_00501084(commands, commands->words);
            commands->count = end - commands->words;
        }
        __aeabi_memcpy4(destination, commands->words, commands->count * sizeof(u32));
        FUN_00500fe4(commands, destination + commands->count, trailer);
    }
}
}
