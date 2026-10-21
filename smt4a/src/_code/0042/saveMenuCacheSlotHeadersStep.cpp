/* NON_MATCHING: -O2 candidate; completion becomes an unsigned folded-offset load instead of retail's signed sprite-base load, and transition/tail argument scheduling differs. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct ScriptState;
struct SaveSlotHeaderWork {
    u8 unk00[7];
    u8 mode;                    // 0x07
    s32 step;                   // 0x08
    u8 phase;                   // 0x0c
    u8 previousMode;            // 0x0d
    u8 unk0e[7];
    u8 ready;                   // 0x15
    u8 unk16[2];
    s32 spriteCount;            // 0x18
    u8 unk1c[0x24];
    ScriptState *script;        // 0x40
    u8 scriptPending;           // 0x44
    u8 unk45[0x27];
    u8 headers[5][0x80];        // 0x6c
    u8 present[5];              // 0x2ec
    u8 unk2f1[3];
    s32 slotIndex;              // 0x2f4
    u8 unk2f8[0x17c];
    UiAnimatedSprite sprites[3]; // 0x474..0x617
};

extern "C" {
u32 scrRunOpcodesStub(ScriptState *script);
void saveLoadProcessCreate(s32 slot, s32 mode);
void FUN_0041e3a0(SaveSlotHeaderWork *work, s32 resetHeader);
void FUN_00420a2c(SaveSlotHeaderWork *work);
s32 byteTripleGetV0();
s32 byteArr5Get3();
const void *gameDataBlocksGetTable();
void *rt_memcpy_w(void *destination, const void *source, u32 size);
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
                rt_memcpy_w(work->headers[index], gameDataBlocksGetTable(),
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
        if (uiAnimatedSpriteIsFinished(&work->sprites[work->spriteCount])) {
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
