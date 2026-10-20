#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x00 */ u8 value;
    /* 0x01 */ u8 unk01[0x63];
} Request;

/* Code address of the request's completion callback (a local label in retail). */
#define REQUEST_CALLBACK ((u8 *)0x003d4e88)

int FUN_00100854(Request *request, u32 arg1, u32 arg2, int size, u8 *callback);
u32 dataTableGet(u32 arg0, u32 arg1);
u32 dataTableGetCount(u32 arg);
u32 dataTableGetEntries(void);

/* Builds a request carrying `value` (lookup index (0x16, 0 or 1) depends on `flag`), submits it and returns the handle offset by 3 if one was created. */
int requestSubmitScrLookup(u8 value, int flag)
{
    Request request;
    u32 selected;
    u32 other;
    int result;

    if (flag != 0) {
        selected = dataTableGet(0x16, 0);
    } else {
        selected = dataTableGet(0x16, 1);
    }
    other = dataTableGetEntries();
    selected = dataTableGetCount(selected);
    request.value = value;
    result = FUN_00100854(&request, other, selected, 100, REQUEST_CALLBACK);
    if (result != 0) {
        result += 3;
    }
    return result;
}

} /* extern "C" */
