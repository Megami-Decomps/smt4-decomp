#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x00 */ u16 value;
    /* 0x02 */ u8 unk02[0x0E];
} Request;

s32 recordKeyCompare(const void *left, const void *right);

int libc_bsearch(Request *request, u32 arg1, u32 arg2, int size, s32 (*callback)(const void *, const void *));
u32 dataTableGet(u32 arg0, u32 arg1);
u32 dataTableGetCount(u32 arg);
u32 dataTableGetEntries(void);

/* Builds a request carrying `value` and submits it with its completion callback. */
void FUN_002c7bf4(u16 value)
{
    if (value == 0) {
        return;
    }
    Request request;
    u32 selected = dataTableGet(0x11, 0);
    u32 other = dataTableGetEntries();

    selected = dataTableGetCount(selected);
    request.value = value;
    libc_bsearch(&request, other, selected, 0x10, recordKeyCompare);
}

} /* extern "C" */
