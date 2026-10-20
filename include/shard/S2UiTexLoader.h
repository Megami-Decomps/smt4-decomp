/* A UI screen object with a per-phase update callback table, and the texture/keyframe loader
 * sub-object it updates. */
#ifndef S2_UI_TEX_LOADER_H
#define S2_UI_TEX_LOADER_H

#include "common.h"

#define UI_TEX_LOADER_NODES 64 /* texture-table nodes tracked */

struct UiScreen;
typedef void (UiScreen::*UiScreenFunc)(void);

/* The sprite the loader drives (only the fields it reads). */
typedef struct UiTexSprite {
    /* 0x00 */ u8 unk00[0x8a];
    /* 0x8a */ s8 animating;
    /* 0x8b */ u8 unk8b[5];
} UiTexSprite;

/* An entry of the loader's list; `frame` is the keyframe its image is shown on. */
typedef struct UiTexEntry {
    /* 0x00 */ u8 unk00[0x5a];
    /* 0x5a */ u16 frame;
} UiTexEntry;

/* Loading state of one image: its texture-table node and the keyframe it is queued for. */
typedef struct UiTexRequest {
    /* 0x0 */ s32 node;
    /* 0x4 */ s32 keyframe;
} UiTexRequest;

/* The loader (at +0x9c of the screen). */
typedef struct UiTexLoader {
    /* 0x000 */ u8 unk000[0xa8];
    /* 0x0a8 */ u8 anim[0x744];             /* animation object updated every frame (FUN_004cf8dc) */
    /* 0x7ec */ UiTexEntry *entries[0x7f];
    /* 0x9e8 */ u8 unk9e8[5];
    /* 0x9ed */ u8 cycling;                  /* advances `cycle` every update */
    /* 0x9ee */ u8 unk9ee[0x59a];
    /* 0xf88 */ UiTexSprite sprite;
    /* 0x1018 */ s32 cycle;                  /* 0..15 */
    /* 0x101c */ UiTexRequest current;       /* shown now */
    /* 0x1024 */ UiTexRequest pending;       /* loaded, waiting for the sprite to finish */
    /* 0x102c */ UiTexRequest next;          /* queued for its keyframe */
    /* 0x1034 */ u8 nodeLoaded[UI_TEX_LOADER_NODES]; /* node is held (loaded) */
} UiTexLoader;

/* The screen: phase callbacks at 0x117c (indexed by `phase`), the loader at 0x9c. */
struct UiScreen {
    /* 0x0000 */ u8 unk0000[0x28];
    /* 0x0028 */ s32 phase;
    /* 0x002c */ u8 unk002c[0x70];
    /* 0x009c */ UiTexLoader loader;
    /* 0x1110 */ u8 unk1110[0x6c];
    /* 0x117c */ struct {
        UiScreenFunc func;               /* member function pointer, 8 bytes */
    } updateFuncs[8];                    /* one per phase (count unknown) */
};

#endif
