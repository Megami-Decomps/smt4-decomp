#include "battle/BtlMainAccess.h"
#include "battle/btlHelp.h"
#include "battle/btlMain.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 tracked);
char *libc_strcpy(char *destination, const char *source);

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
/* Creates a type-`type` message entry and appends it to the help list (btlHelp.cpp's creator for this message, inlined
 * here as FUN_00200a68's creator is not; retail copies `text` to a saved register and keeps the type there across the
 * allocation, as for an inlined callee's parameters).
 * The trace lines are those of a run of creators above their callers (FUN_00200a68's at 150, then 191, 237, 275):
 * btlHelpAppendMessage (0x4c8894) traces 237 but FUN_004c9220 (0x4c9220), placed after it, traces 191. */
static __inline BtlHelpEntryA *helpMessageCreate(u16 type, const char *text, u8 mode)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlHelp.cpp", 237);
    HelpMessageView *message = static_cast<HelpMessageView *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x880, 1));
    message->type = type;
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
    btlHelpListAppend(g_btlHelp.list, reinterpret_cast<BtlHelpEntryA *>(message));
    return reinterpret_cast<BtlHelpEntryA *>(message);
}

// Append a help message unless the battle is in a state that suppresses messages.
BtlHelpEntryA *btlHelpAppendMessage(const char *text, u8 mode)
{
    BtlMainStateA *battle = btlGetMainState();
    if ((battle->stateFlags64.bits & g_btlHelp.blockedStates) != 0 ||
        (battle->stateFlags64.bits & g_btlHelp.blockedTransitions) != 0) {
        return NULL;
    }
    return helpMessageCreate(6, text, mode);
}
}
