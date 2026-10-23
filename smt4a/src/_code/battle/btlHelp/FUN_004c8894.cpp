/* NON_MATCHING: mask-load merging and allocation/entry constant lifetimes retain fewer registers than retail. */
#include "battle/btlHelp.h"
#include "battle/btlMain.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
BtlMainStateA *btlGetMainState(void);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 tracked);
char *libc_strcpy(char *destination, const char *source);

// Append a help message unless the battle is in a state that suppresses messages.
BtlHelpEntryA *FUN_004c8894(const char *text, u8 mode)
{
    BtlMainStateA *battle = btlGetMainState();
    u64 flags = battle->stateFlags64.bits;
    if (((g_btlHelp.blockedStates[0] & static_cast<u32>(flags)) |
         (g_btlHelp.blockedStates[1] & static_cast<u32>(flags >> 32))) != 0 ||
        ((g_btlHelp.blockedTransitions[0] & static_cast<u32>(flags)) |
         (g_btlHelp.blockedTransitions[1] & static_cast<u32>(flags >> 32))) != 0) {
        return NULL;
    }
    // The shared entry padding cannot hold this aligned view without changing its extent.
    struct HelpMessageView {
        u16 type;
        s16 kind;
        u16 state;
        u16 frame;
        u32 value;
        u32 timer;
        u8 unk010[0x810];
        u8 mode;
        u8 unk821[3];
        u32 request;
        u32 resource;
        char text[0x40];
        u32 textHandle;
        u16 active;
        s16 dialogIndex;
        BtlHelpEntryA *next;
        BtlHelpEntryA *prev;
    };
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlHelp.cpp", 237);
    HelpMessageView *message = static_cast<HelpMessageView *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x880, 1));
    message->type = 6;
    message->kind = 0;
    message->state = 0;
    message->frame = 0;
    message->value = 0;
    message->timer = 0;
    message->mode = mode;
    message->request = 0;
    message->resource = 0;
    message->textHandle = 0;
    message->active = 0;
    message->dialogIndex = 1;
    libc_strcpy(message->text, text);
    message->next = NULL;
    message->prev = NULL;
    BtlHelpEntryA *entry = reinterpret_cast<BtlHelpEntryA *>(message);
    BtlHelpListA *list = g_btlHelp.list;
    if (list->head == NULL) {
        list->head = entry;
    }
    if (list->tail == NULL) {
        list->tail = entry;
    } else {
        list->tail->next = entry;
        entry->prev = list->tail;
        list->tail = entry;
    }
    ++list->count;
    return entry;
}
}
