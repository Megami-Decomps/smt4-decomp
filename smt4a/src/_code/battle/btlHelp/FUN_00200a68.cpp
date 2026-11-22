#include "battle/btlHelp.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

extern "C" {
extern BtlHelpListA *g_btlHelp;
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void __aeabi_memcpy4(void *, const void *, u32);

/* Allocate and append a help entry, preserving a snapshot of its combatant. */
BtlHelpEntryA *FUN_00200a68(u16 id, s16 message, u32 first, u32 second,
    const void *combatant, u32 mode, u32 argument, u32 context)
{
    /* The shared entry's byte padding ends at 0x872; adding word-aligned
       fields inside that union would shift dialogIndex. Keep a local view. */
    struct HelpEntryView {
        u16 id;
        s16 kind;
        s16 message;
        u16 unk006;
        u32 first;
        u32 second;
        u8 combatant[0x408];
        u8 unk418[0x408];
        u8 mode;
        u8 unk821[3];
        u32 argument;
        u32 unk828;
        u32 values[16];
        u32 context;
        u16 state;
        s16 dialogIndex;
        BtlHelpEntryA *next;
        BtlHelpEntryA *prev;
        u32 unk87C;
    };
    typedef char HelpEntryViewOffsets[
        offsetof(HelpEntryView, combatant) == 0x10 &&
        offsetof(HelpEntryView, mode) == 0x820 &&
        offsetof(HelpEntryView, values) == 0x82C &&
        offsetof(HelpEntryView, context) == 0x86C &&
        offsetof(HelpEntryView, next) == 0x874 &&
        sizeof(HelpEntryView) == 0x880 ? 1 : -1];
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlHelp.cpp", 150);
    HelpEntryView *work = (HelpEntryView *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(HelpEntryView), 1);
    work->id = id;
    work->message = message;
    work->kind = 0;
    work->first = first;
    work->unk006 = 0;
    work->second = second;
    if (combatant != NULL) {
        __aeabi_memcpy4(work->combatant, combatant, 0x408);
    }
    work->mode = mode;
    work->argument = argument;
    work->context = context;
    work->state = 0;
    work->dialogIndex = 1;
    memset(work->values, 0, sizeof(work->values));
    work->next = NULL;
    work->prev = NULL;
    btlHelpListAppend(g_btlHelp, (BtlHelpEntryA *)work);
    return (BtlHelpEntryA *)work;
}
}
