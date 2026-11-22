/* NON_MATCHING: the five touch buttons as retail's jump table has them (two key-list searches, the zoom steps and the
   recentre, the map state at 0x162 passed to NaviMain_*), the key step of cases 0 and 4 one helper; retail cross-jumps
   the helper's two copies where this build predicates the key store and keeps both, and retail's register assignment
   puts the work area in r5. */
#include "gamedata/MapSaveBlock.h"
#include "shard/NaviMain.h"
#include "game/GameState.h"
#include "map/mapDepart.h"

namespace {
/* One entry of the navigation screen's key list: a key and the one it links to. */
struct NaviKeyPair {
    u16 key;
    s16 next;
};

/* A cursor position on the navigation map. */
struct NaviPoint {
    f32 x;
    f32 y;
};

/* The navigation screen's work area (offsets as NaviMain_InitInstance lays it out). */
struct NaviWork {
    /* 0x00000 */ u8 unk00000[0x10];
    /* 0x00010 */ u32 flags;               /* 0x2000000: input handled this frame */
    /* 0x00014 */ u8 unk00014[0x42];
    /* 0x00056 */ u8 stepTimers[5];        /* frames each of the five touch buttons stays lit */
    /* 0x0005b */ u8 unk0005b[5];
    /* 0x00060 */ s8 key;                  /* the current key */
    /* 0x00061 */ u8 unk00061[0x101];
    /* 0x00162 */ u8 navi[8];            /* the navigation map state (NaviMain_*) */
    /* 0x0016a */ u8 unk0016a[0x5922];
    /* 0x05a8c */ u8 cursorMoved;
    /* 0x05a8d */ u8 cursorMoved2;
    /* 0x05a8e */ u8 unk05a8e[0xc73e];
    /* 0x121cc */ s32 homeKey;             /* the key the centre button returns to */
    /* 0x121d0 */ u8 unk121d0[0x14];
    /* 0x121e4 */ NaviKeyPair pairs[32];
    /* 0x12264 */ s32 pairCount;
};
}

extern "C" {
s32 asdTMTexTableGetEntryPlacement(u32 group, u32 id, u32 *first, u32 *second, u32 *third, u32 *fourth);
s32 effectForwardModeOne(u32 first, u32 second, u32 third, u32 fourth);
s32 keyListFindAdjacentKey(NaviWork *work, s32 direction);
void NaviMain_SetCursorPos(void *navi, NaviPoint *position);

/* Moves the key selection one step along the key list and lights the button that did it. */
static void naviStepKey(NaviWork *work, s32 slot, s32 direction)
{
    work->flags = work->flags | 0x2000000;
    s32 key = keyListFindAdjacentKey(work, direction);
    if (key != 0) {
        work->key = (s8)key;
    }
    work->stepTimers[slot] = 5;
    work->cursorMoved = 1;
    work->cursorMoved2 = 1;
}

/* Steps the navigation screen's touch buttons: for each of the five whose effect reports a touch, moves the
   key selection back or forward along the key list (0 and 4), zooms the map in or out (1 and 3) or recentres
   it (2). Returns 1 when a button consumed the input, 0 when none did. */
u32 naviUpdateTouchButtons(NaviWork *work)
{
    MapSaveBlock *map = gameGetMapBlock();
    if ((work->flags & 0x2000000) != 0 && (setFullScreenRect() == 0 || g_gameState.inputBlocked != 0)) {
        work->flags = work->flags & ~0x2000000;
    }
    for (s32 slot = 0; slot < 5; slot++) {
        u32 first;
        u32 second;
        u32 third;
        u32 fourth;
        asdTMTexTableGetEntryPlacement(0x1c, slot + 0xfb5, &first, &second, &third, &fourth);
        if (effectForwardModeOne(first, second, third, fourth) == 0 || g_gameState.inputBlocked != 0) {
            continue;
        }
        switch (slot) {
        case 0:
            for (s32 index = 0; index < work->pairCount; index++) {
                if (work->pairs[index].key != 0 && work->pairs[index].next == work->key) {
                    if (index - 1 < 0 || work->pairs[index - 1].next == 0) {
                        return 1;
                    }
                    naviStepKey(work, slot, 1);
                    return 1;
                }
            }
            return 1;
        case 1:
            if (map->layout == 6) {
                work->flags = (work->flags & ~0x30000) | 0x2000000;
                work->cursorMoved = 1;
                work->cursorMoved2 = 1;
                NaviPoint position = *(NaviPoint *)NaviMain_GetCursorPos(work->navi);
                position.x *= 2.0f;
                position.y *= 2.0f;
                NaviMain_SetCursorPos(work->navi, &position);
                map->layout = 0xc;
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
            NaviPoint position = *(NaviPoint *)NaviMain_GetCursorPos(work->navi);
            position.x = 0.0f;
            position.y = 0.0f;
            NaviMain_SetCursorPos(work->navi, &position);
            work->key = (s8)work->homeKey;
            work->stepTimers[2] = 5;
            work->cursorMoved = 1;
            work->cursorMoved2 = 1;
            return 1;
        }
        case 3:
            if (map->layout != 6) {
                work->flags = (work->flags & ~0x30000) | 0x2000000;
                work->cursorMoved = 1;
                work->cursorMoved2 = 1;
                NaviPoint position = *(NaviPoint *)NaviMain_GetCursorPos(work->navi);
                position.x *= 0.5f;
                position.y *= 0.5f;
                NaviMain_SetCursorPos(work->navi, &position);
                map->layout = 6;
                work->stepTimers[3] = 5;
                work->stepTimers[1] = 0;
                return 1;
            }
            break;
        case 4:
            for (s32 index = 0; index < work->pairCount; index++) {
                if (work->pairs[index].key != 0 && work->pairs[index].next == work->key) {
                    if (index + 1 >= work->pairCount || work->pairs[index + 1].next == 0) {
                        return 1;
                    }
                    naviStepKey(work, slot, -1);
                    return 1;
                }
            }
            return 1;
        default:
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
