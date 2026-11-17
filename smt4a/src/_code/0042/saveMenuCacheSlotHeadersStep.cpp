/* NON_MATCHING: only the mode switch's store order differs: retail stores the new mode before the remembered one (here the remembered mode is stored first; the shared enterMode shape with FUN_0041f110 gives retail's registers). */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "shard/SaveSlotHeaderWork.h"

/* Switches to another mode, remembering the one it leaves. */
static void enterMode(SaveSlotHeaderWork *work, u8 mode)
{
    work->previousMode = work->mode;
    work->mode = mode;
}

extern "C" {
u32 scrRunOpcodesStub(ScriptProcess *script);
void saveLoadProcessCreate(s32 slot, s32 mode);
void FUN_0041e3a0(SaveSlotHeaderWork *work, s32 resetHeader);
void FUN_00420a2c(SaveSlotHeaderWork *work);
s32 byteTripleGetV0();
s32 byteArr5Get3();
const void *gameDataBlocksGetTable();
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
void sysMemClear(void *destination, u32 size);

/* Starts the save/load process on a slot (numbered from 1) in the given mode. */
static void startSaveLoad(s32 slot, s32 mode)
{
    saveLoadProcessCreate(slot, mode);
}

// Cache the five save-slot headers, then wait for the final animation and script.
void saveMenuCacheSlotHeadersStep(SaveSlotHeaderWork *work)
{
    switch (work->step) {
    case 0:
        startSaveLoad(work->slotIndex + 1, 1);
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
            startSaveLoad(next + 1, 1);
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
        enterMode(work, 0x13);
        work->step = 0;
        work->phase = 0;
        return;
    }
}
}
