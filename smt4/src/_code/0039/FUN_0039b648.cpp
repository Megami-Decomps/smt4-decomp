/* NON_MATCHING: retail keeps the slot loop's pointers (cursor, flag bytes, map block) in registers set up once and unpacks the four effect outputs with one ldrd/ldr pair per call; this version reloads them differently, so register allocation and the switch layout differ. The slot logic and calls are the same. */
#include "common.h"

namespace {
/* One entry of the navigation screen's key list: a key and the one it links to. */
struct NaviKeyPair {
    u16 key;
    s16 next;
};

/* The map block (only the navigation icon byte at +0xd5a is touched). */
struct NaviMapBlock {
    u8 unk000[0xd5a];
    u8 naviIcon;
};

/* The navigation screen's work area (offsets as NaviMain_InitInstance lays it out). */
struct NaviWork {
    /* 0x00000 */ u8 unk00000[0x10];
    /* 0x00010 */ u32 flags;               /* 0x2000000: input handled this frame */
    /* 0x00014 */ u8 unk00014[0x42];
    /* 0x00056 */ u8 stepTimers[5];
    /* 0x0005b */ u8 unk0005b[5];
    /* 0x00060 */ s8 key;                  /* the current key */
    /* 0x00061 */ u8 unk00061[0x101];
    /* 0x00162 */ f32 cursor[2];
    /* 0x0016a */ u8 unk0016a[0x5922];
    /* 0x05a8c */ u8 cursorMoved;
    /* 0x05a8d */ u8 cursorMoved2;
    /* 0x05a8e */ u8 unk05a8e[0x1bf56];
};

struct NaviKeyList {
    NaviKeyPair pairs[32];
};
}

extern "C" {
extern u8 g_gameState;
NaviMapBlock *gameGetMapBlock(void);
s32 FUN_002319c0(void);
s32 FUN_00231434(u32 group, u32 id, u32 *first, u32 *second, u32 *third, u32 *fourth);
s32 effectForwardModeOne(u32 first, u32 second, u32 third, u32 fourth);
s32 keyListFindAdjacentKey(NaviWork *work, s32 direction);
f32 *NaviMain_GetCursorPos(f32 *cursor);
void NaviMain_SetCursorPos(f32 *cursor, f32 *position);

/* Reads a field of the work area at a fixed offset. */
static inline u8 *workBytes(NaviWork *work)
{
    return reinterpret_cast<u8 *>(work);
}

/* Steps the navigation screen's input: for each of the five effect slots whose effect has finished, moves the
   key selection or the cursor accordingly. Returns 1 when a slot consumed the input, 0 when none did. */
u32 FUN_0039b648(NaviWork *work)
{
    NaviMapBlock *map = gameGetMapBlock();
    if ((work->flags & 0x2000000) != 0 && (FUN_002319c0() == 0 || *(&g_gameState + 0x18) != 0)) {
        work->flags = work->flags & 0xfdffffff;
    }
    NaviKeyPair *pairs = reinterpret_cast<NaviKeyPair *>(workBytes(work) + 0x121e4);
    for (s32 slot = 0; slot < 5; slot++) {
        u32 first;
        u32 second;
        u32 third;
        u32 fourth;
        FUN_00231434(0x1c, slot + 0xfb5, &first, &second, &third, &fourth);
        if (effectForwardModeOne(first, second, third, fourth) == 0 || *(&g_gameState + 0x18) != 0) {
            continue;
        }
        switch (slot) {
        case 0:
        case 4: {
            s32 pairCount = *reinterpret_cast<s32 *>(workBytes(work) + 0x12264);
            s32 index = 0;
            while (index < pairCount && !(pairs[index].key != 0 && pairs[index].next == work->key)) {
                index++;
            }
            if (index >= pairCount) {
                return 1;
            }
            if (slot == 0) {
                if (index - 1 < 0 || pairs[index - 1].next == 0) {
                    return 1;
                }
            } else {
                if (index + 1 >= pairCount || pairs[index + 1].next == 0) {
                    return 1;
                }
            }
            work->flags = work->flags | 0x2000000;
            s32 key = keyListFindAdjacentKey(work, slot == 0 ? 1 : -1);
            if (key != 0) {
                work->key = (s8)key;
            }
            work->stepTimers[slot] = 5;
            work->cursorMoved = 1;
            work->cursorMoved2 = 1;
            return 1;
        }
        case 1:
            if (map->naviIcon == 6) {
                work->flags = (work->flags & 0xfffcffff) | 0x2000000;
                work->cursorMoved = 1;
                work->cursorMoved2 = 1;
                f32 *cursor = NaviMain_GetCursorPos(work->cursor);
                f32 scaled[2];
                scaled[0] = cursor[0] * 2.0f;
                scaled[1] = cursor[1] * 2.0f;
                NaviMain_SetCursorPos(work->cursor, scaled);
                map->naviIcon = 0xc;
                work->stepTimers[1] = 5;
                work->stepTimers[3] = 0;
                return 1;
            }
            break;
        case 2: {
            work->flags = work->flags | 0x2000000;
            if (effectForwardModeOne(first, second, third, fourth) == 0) {
                return 1;
            }
            f32 *cursor = NaviMain_GetCursorPos(work->cursor);
            f32 reset[2];
            reset[0] = 0.0f;
            reset[1] = 0.0f;
            NaviMain_SetCursorPos(work->cursor, reset);
            work->key = (s8)*reinterpret_cast<u32 *>(workBytes(work) + 0x121cc);
            work->stepTimers[2] = 5;
            work->cursorMoved = 1;
            work->cursorMoved2 = 1;
            return 1;
        }
        case 3:
            if (map->naviIcon != 6) {
                work->flags = (work->flags & 0xfffcffff) | 0x2000000;
                work->cursorMoved = 1;
                work->cursorMoved2 = 1;
                f32 *cursor = NaviMain_GetCursorPos(work->cursor);
                f32 scaled[2];
                scaled[0] = cursor[0] * 0.5f;
                scaled[1] = cursor[1] * 0.5f;
                NaviMain_SetCursorPos(work->cursor, scaled);
                map->naviIcon = 6;
                work->stepTimers[3] = 5;
                work->stepTimers[1] = 0;
                return 1;
            }
            break;
        default:
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
