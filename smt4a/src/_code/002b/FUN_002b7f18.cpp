/* NON_MATCHING: retail emits 'ldr r0, [pc, #52]'; compiler emits 'ldr r4, [pc, #64]' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Handle;
struct HandleVtable { void *reserved; void (*destroy)(Handle *); };
struct Handle { HandleVtable *vtable; };
struct Map { u8 unk00[0xCBDC]; u8 active; u8 unkCBDD[0x1B]; Handle *handle; };
extern Map *g_mapIf;
void FUN_002b7f18(void *) {
    g_mapIf->active = 0;
    if (g_mapIf->handle) {
        g_mapIf->handle->vtable->destroy(g_mapIf->handle);
        g_mapIf->handle = NULL;
    }
}
}
