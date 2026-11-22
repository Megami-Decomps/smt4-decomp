/* NON_MATCHING: 106 lines (100 vs 96 rows): help-entry allocation, early NULL return layout, and list-link g_btlHelp pool reload differ. */
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

/* Creates a type-`type` text entry and appends it to the help list (btlHelp.cpp's creator for this message, inlined
 * here as FUN_00200a68's creator is not; retail keeps its constant arguments in saved registers across the allocation).
 * The trace lines are those of a run of creators above their callers (FUN_00200a68's at 150, then 191, 237, 275):
 * btlHelpAppendMessage (0x4c8894) traces 237 but FUN_004c9220 (0x4c9220), placed after it, traces 191. */
static BtlHelpEntryA *helpTextEntryCreate(u16 type, u32 id, u32 context, const void *payload, const char *caption, u8 mode, u32 row, u32 column)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlHelp.cpp", 275);
    BtlHelpTextEntryView *entry = (BtlHelpTextEntryView *)
        asdMemoryAllocTracked(0x100, 0x100, 0, 0x880, 1);
    entry->type = type;
    entry->kind = 0;
    entry->state = 0;
    entry->phase = 0;
    entry->id = id;
    entry->context = context;
    if (payload != NULL)
        __aeabi_memcpy4(entry->payload, payload, sizeof(entry->payload));
    entry->mode = mode;
    entry->counter = 0;
    entry->row = row;
    entry->column = column;
    entry->frame = 0;
    entry->dialogIndex = 1;
    libc_strcpy(entry->caption, caption);
    entry->next = NULL;
    entry->prev = NULL;
    BtlHelpEntryA *message = (BtlHelpEntryA *)entry;
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

BtlHelpEntryA *btlHelpAppendTextEntry(u32 id, const void *payload, const char *caption, u8 mode)
{
    BtlMainStateA *battle = btlGetMainState();
    if ((battle->stateFlags64.bits & g_btlHelp.blockedStates) != 0 ||
        (battle->stateFlags64.bits & g_btlHelp.blockedTransitions) != 0)
        return NULL;
    if (payload == NULL)
        return NULL;
    return helpTextEntryCreate(7, id, battle->helpMessages.context, payload, caption, mode, 13, 14);
}
}
