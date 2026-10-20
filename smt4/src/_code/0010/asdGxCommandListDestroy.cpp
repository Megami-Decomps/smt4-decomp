#include "common.h"

extern "C" {

int asdMemFree(void *ptr);

typedef struct GxCommandList {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ void *buffer;
} GxCommandList;

/* Frees the command list's buffer (if any), then the list itself. */
void asdGxCommandListDestroy(GxCommandList *list)
{
    if (list->buffer != NULL) {
        asdMemFree(list->buffer);
    }
    asdMemFree(list);
}

} /* extern "C" */
