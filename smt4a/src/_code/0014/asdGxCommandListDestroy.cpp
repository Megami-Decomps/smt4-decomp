#include "common.h"

extern "C" {

typedef struct CommandList {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ void *commands;
} CommandList;

void asdMemFree(void *memory);

/* Frees the command buffer (if any) and the list itself. */
void asdGxCommandListDestroy(CommandList *list)
{
    if (list->commands != NULL) {
        asdMemFree(list->commands);
    }
    asdMemFree(list);
}

} /* extern "C" */
