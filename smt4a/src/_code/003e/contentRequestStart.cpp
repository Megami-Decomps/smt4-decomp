#include "battle/btlMain.h"
#include "shard/W4_Match3_AocMainA.h"

extern "C" {

/* unit-local: the battle state as the request sees it, only its add-on index (FUN_003e1454 tests the same word). */
typedef struct ContentDesc003e1390 {
    /* 0x00 */ u8 unk00[0xf0];
    /* 0xf0 */ s32 aocIndex;
} ContentDesc003e1390;

void asdMemFree(void *memory);
void asdLoadFileAsyncSimple(const char *name, u32 *handle, s32 flags);
char *libc_strcpy(char *dst, const char *src);
void *sysMemClear(void *dst, u32 size);
void btlEncountLoadArrangementStep(BtlStep *step, ContentDesc003e1390 *desc);
void aocQueueType39(AocSystemA *aoc, u32 index, u32 *handle, const char *name);
char *btlPosArrangeGetFileName(ContentDesc003e1390 *desc);

/* Starts loading a content request: queues it through the add-on content system when the descriptor has an add-on index, otherwise from the default source. */
void contentRequestStart(BtlStep *request, ContentDesc003e1390 *desc)
{
    char name[128];

    sysMemClear(name, 0x80);
    libc_strcpy(name, btlPosArrangeGetFileName(desc));
    if (request->counters.fileHandle != 0) {
        asdMemFree(reinterpret_cast<void *>(request->counters.fileHandle));
        request->counters.fileHandle = 0;
    }
    if (0 < desc->aocIndex && aocHasType39Record(g_aocSystem, desc->aocIndex) != 0) {
        aocQueueType39(g_aocSystem, desc->aocIndex, &request->counters.fileHandle, name);
    } else {
        asdLoadFileAsyncSimple(name, &request->counters.fileHandle, 0);
    }
    btlStepEnter(request, 0x16);
    btlEncountLoadArrangementStep(request, desc);
}

} /* extern "C" */
