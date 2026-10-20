#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x00 */ u16 value;
    /* 0x02 */ u8 unk02[0x0E];
} Request;

/* Code address of the request's completion callback (a local label in retail). */
#define REQUEST_CALLBACK ((u8 *)0x00241798)

int FUN_00100854(Request *request, u32 arg1, u32 arg2, int size, u8 *callback);
u32 dataTableGet(u32 arg0, u32 arg1);
u32 dataTableGetCount(u32 arg);
u32 dataTableGetEntries(void);

/* Builds a request carrying `value` and submits it with its completion callback. */
void FUN_002c7bfc(u16 value)
{
    Request request;
    u32 selected = dataTableGet(0x11, 0);
    u32 other = dataTableGetEntries();

    selected = dataTableGetCount(selected);
    request.value = value;
    FUN_00100854(&request, other, selected, 0x10, REQUEST_CALLBACK);
}

} /* extern "C" */
