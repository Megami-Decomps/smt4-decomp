#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0xF4];
    /* 0xF4 */ u32 handle;
} Object;

typedef struct Global57f110 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Object *object;
} Global57f110;
extern Global57f110 g_campCec;

void scrScriptProcessStartEntry(u32 handle, u32 request);

/* Passes the held object's handle and `request` to scrScriptProcessStartEntry, if there is an object. */
void campCecScriptStart(u32 request)
{
    if (g_campCec.object != NULL) {
        scrScriptProcessStartEntry(g_campCec.object->handle, request);
        return;
    }
}

} /* extern "C" */
