/* NON_MATCHING: header stores do not combine into STRD and cached-count register allocation differs. */
/* Emits a selected cached graphics-command record, generating its words on first use. */
#include "gfx/CachedCommands.h"

extern "C" {
extern u8 DAT_00490e3e;
void FUN_0023ae1c(u32 *destination, u32 parameter, u32 command);
u32 *FUN_0023bba0(CachedCommandWords *commands, u32 *words);
void FUN_0023bb00(CachedCommandWords *commands, u32 *destination, const void *trailer);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);

void FUN_00349cdc(CachedCommandTable *table, u32 *destination, u32 index, u32 parameter)
{
    CachedCommandRecord *record = table->records[index];
    if (record != NULL) {
        const void *trailer = record->trailer;
        destination[0] = 0x80000000u | DAT_00490e3e;
        destination[1] = 0xF02C0;
        destination += 2;
        FUN_0023ae1c(destination, parameter, 0xBF02C1);
        CachedCommandWords *commands = &record->commands;
        destination += 14;
        if (commands->count == 0) {
            u32 *end = FUN_0023bba0(commands, commands->words);
            commands->count = end - commands->words;
        }
        __aeabi_memcpy4(destination, commands->words, commands->count * sizeof(u32));
        FUN_0023bb00(commands, destination + commands->count, trailer);
    }
}
}
