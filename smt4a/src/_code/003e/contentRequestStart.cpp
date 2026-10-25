/* NON_MATCHING: the aocIndex test uses r0 instead of retail r1; the state store is scheduled before unk10 instead of after it. */
#include "common.h"

extern "C" {

typedef struct ContentRequest003e1390 {
    /* 0x00 */ s32 state;
    /* 0x04 */ u32 handle;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ u32 unk10;
} ContentRequest003e1390;

typedef struct ContentDesc003e1390 {
    /* 0x00 */ u8 unk00[0xf0];
    /* 0xf0 */ s32 aocIndex;
} ContentDesc003e1390;

void asdMemFree(void *memory);
void asdLoadFileAsyncSimple(const char *name, u32 *handle, s32 flags);
char *libc_strcpy(char *dst, const char *src);
void *sysMemClear(void *dst, u32 size);
void FUN_003e21c8(ContentRequest003e1390 *request, ContentDesc003e1390 *desc);
void aocQueueType39(u32 aoc, u32 index, u32 *handle, const char *name);
char *btlPosArrangeGetFileName(ContentDesc003e1390 *desc);
s32 FUN_0046ebf0(u32 aoc);

extern u32 g_aocSystem; /* 0x570280 */

/* Starts loading a content request: queues it through the add-on content system when the descriptor has an add-on index, otherwise from the default source. */
void contentRequestStart(ContentRequest003e1390 *request, ContentDesc003e1390 *desc)
{
    char name[128];

    sysMemClear(name, 0x80);
    libc_strcpy(name, btlPosArrangeGetFileName(desc));
    if (request->handle != 0) {
        asdMemFree(reinterpret_cast<void *>(request->handle));
        request->handle = 0;
    }
    if (0 < desc->aocIndex && FUN_0046ebf0(g_aocSystem) != 0) {
        aocQueueType39(g_aocSystem, desc->aocIndex, &request->handle, name);
    } else {
        asdLoadFileAsyncSimple(name, &request->handle, 0);
    }
    request->state = 0x16;
    request->unk10 = 0;
    request->unk0c = 0;
    FUN_003e21c8(request, desc);
}

} /* extern "C" */
