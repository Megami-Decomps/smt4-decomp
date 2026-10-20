#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x00 */ u8 value;
    /* 0x01 */ u8 unk01[0x5F];
} Request;

/* Code address of the request's completion callback (a local label in retail). */
#define REQUEST_CALLBACK ((u8 *)0x0032c6c8)

int FUN_002b46f8(Request *request, u32 arg1, u32 arg2, int size, u8 *callback);
u32 dataTableGetCount(u32 arg);
u32 dataTableGetEntries(void);
u32 dataTableGet(u32 arg0, u32 arg1);

/* Builds a request carrying `value` and submits it with its completion callback; the lookup index (0x16, 0 or 1) depends on `flag`. */
void FUN_00292960(u8 value, int flag)
{
    Request request;
    u32 selected;
    u32 other;

    if (flag != 0) {
        selected = dataTableGet(0x16, 0);
    } else {
        selected = dataTableGet(0x16, 1);
    }
    other = dataTableGetEntries();
    selected = dataTableGetCount(selected);
    request.value = value;
    FUN_002b46f8(&request, other, selected, 0x60, REQUEST_CALLBACK);
}

} /* extern "C" */
