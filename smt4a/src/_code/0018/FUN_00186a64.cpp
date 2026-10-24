#include "common.h"

extern "C" {

/* Command-list descriptor: start pointer, byte size, native handle, state. */
typedef struct CommandListDesc {
    /* 0x00 */ u32 *start;
    /* 0x04 */ u32 size;
    /* 0x08 */ u32 handle;
    /* 0x0C */ u32 state;
} CommandListDesc;

u32 *asdGxGetCommandCursor(void);
void asdModelCommitCommandRange(u32 *begin, u32 *end);
void nngxBindCmdlist(u32 handle);

/* Records one GPU register write into the current command list and binds the list. */
void FUN_00186a64(CommandListDesc *list)
{
    u32 *start = asdGxGetCommandCursor();
    u32 *cmd = start;

    if (((u32)start & 8) == 0) {
        *cmd++ = 0;
        *cmd++ = 0x200;
    }
    *cmd++ = 1;
    *cmd++ = 0xF023D;
    asdModelCommitCommandRange(start, cmd);
    list->size = (u32)asdGxGetCommandCursor() - (u32)list->start;
    list->state = 2;
    nngxBindCmdlist(list->handle);
}

} /* extern "C" */
