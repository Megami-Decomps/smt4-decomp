/* NON_MATCHING: help-entry allocation, payload copy and list-link register scheduling differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlHelp.h"
#include "battle/btlMain.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

namespace {
/* An aligned view avoids rounding the shared byte-padding union ending at 0x872. */
struct BtlHelpTextEntryView {
    u16 type;
    s16 kind;
    u16 state, phase;
    u32 id, context;
    u8 payload[0x408], unk418[0x408];
    u8 mode, unk821[3];
    u32 row, column;
    char caption[0x40];
    u32 counter;
    u16 frame;
    s16 dialogIndex;
    BtlHelpEntryA *next, *prev;
};
typedef char BtlHelpTextEntryOffsets[offsetof(BtlHelpTextEntryView, mode) == 0x820 &&
    offsetof(BtlHelpTextEntryView, caption) == 0x82C &&
    offsetof(BtlHelpTextEntryView, next) == 0x874 &&
    sizeof(BtlHelpTextEntryView) == sizeof(BtlHelpEntryA) ? 1 : -1];
}
extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
char *libc_strcpy(char *destination, const char *source);

BtlHelpEntryA *FUN_004c9538(u32 id, const void *payload, const char *caption, u8 mode)
{
    BtlMainStateA *battle = btlGetMainState();
    u64 blockedStates = static_cast<u64>(g_btlHelp.blockedStates[0]) |
                        (static_cast<u64>(g_btlHelp.blockedStates[1]) << 32);
    u64 blockedTransitions = static_cast<u64>(g_btlHelp.blockedTransitions[0]) |
                             (static_cast<u64>(g_btlHelp.blockedTransitions[1]) << 32);
    if ((battle->stateFlags64.bits & blockedStates) != 0 ||
        (battle->stateFlags64.bits & blockedTransitions) != 0 || payload == NULL)
        return NULL;
    u32 context = battle->helpMessages.context;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlHelp.cpp", 275);
    BtlHelpTextEntryView *entry = static_cast<BtlHelpTextEntryView *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, 0x880, 1));
    entry->type = 7;
    entry->kind = 0;
    entry->state = 0;
    entry->phase = 0;
    entry->id = id;
    entry->context = context;
    __aeabi_memcpy4(entry->payload, payload, sizeof(entry->payload));
    entry->mode = mode;
    entry->counter = 0;
    entry->row = 13;
    entry->column = 14;
    entry->frame = 0;
    entry->dialogIndex = 1;
    libc_strcpy(entry->caption, caption);
    entry->next = NULL;
    entry->prev = NULL;
    BtlHelpEntryA *message = reinterpret_cast<BtlHelpEntryA *>(entry);
    BtlHelpListA *list = g_btlHelp.list;
    if (list->head == NULL)
        list->head = message;
    if (list->tail == NULL)
        list->tail = message;
    else {
        list->tail->next = message;
        entry->prev = list->tail;
        list->tail = message;
    }
    list->count++;
    return message;
}
}
