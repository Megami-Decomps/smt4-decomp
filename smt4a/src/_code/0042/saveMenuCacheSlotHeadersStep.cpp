/* NON_MATCHING: the mode switch loads the old mode into r1 and the new mode into r0 in retail (the reverse here) and the final tail call sets r1 before the increment. */
#include "shard/SaveSlotHeaderWork.h"

extern "C" {
u32 scrRunOpcodesStub(ScriptState *script);
void saveLoadProcessCreate(s32 slot, s32 mode);
void FUN_0041e3a0(SaveSlotHeaderWork *work, s32 resetHeader);
void FUN_00420a2c(SaveSlotHeaderWork *work);
s32 uiSpriteGetCompletionState(const UiAnimatedSprite *sprite);
s32 byteTripleGetV0();
s32 byteArr5Get3();
const void *gameDataBlocksGetTable();
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
void sysMemClear(void *destination, u32 size);

// Cache the five save-slot headers, then wait for the final animation and script.
void saveMenuCacheSlotHeadersStep(SaveSlotHeaderWork *work)
{
    switch (work->step) {
    case 0:
        saveLoadProcessCreate(work->slotIndex + 1, 1);
        FUN_0041e3a0(work, 0);
        ++work->step;
        // Fall through to the first slot's completion poll.
    case 1: {
        if (work->scriptPending) {
            scrRunOpcodesStub(work->script);
        }
        FUN_00420a2c(work);
        if (!byteTripleGetV0()) {
            return;
        }
        u32 index = (u32)work->slotIndex;
        if (index < 5) {
            if (!byteTripleGetV0()) {
                return;
            }
            if (byteArr5Get3()) {
                __aeabi_memcpy4(work->headers[index], gameDataBlocksGetTable(),
                            sizeof(work->headers[index]));
                work->present[index] = 1;
            } else {
                sysMemClear(work->headers[index], sizeof(work->headers[index]));
                work->present[index] = 0;
            }
        }
        s32 next = work->slotIndex + 1;
        work->slotIndex = next;
        if (next < 5) {
            saveLoadProcessCreate(next + 1, 1);
            return;
        }
        work->ready = 1;
        ++work->step;
        return;
    }
    case 2:
        if (work->scriptPending) {
            scrRunOpcodesStub(work->script);
        }
        if (uiSpriteGetCompletionState(&work->sprites[work->spriteCount]) != 0) {
            ++work->step;
            return;
        }
        FUN_00420a2c(work);
        return;
    case 3:
        if (work->scriptPending) {
            if (scrRunOpcodesStub(work->script) != 2) {
                return;
            }
            work->scriptPending = 0;
        }
        work->previousMode = work->mode;
        work->mode = 0x13;
        work->step = 0;
        work->phase = 0;
        return;
    }
}
}
