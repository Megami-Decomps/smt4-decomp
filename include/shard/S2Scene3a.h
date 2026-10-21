/* A scene object with a per-phase update callback table and a loading state machine. */
#ifndef S2_SCENE3A_H
#define S2_SCENE3A_H

#include "common.h"

struct Scene3a;
typedef void (Scene3a::*Scene3aFunc)(void);

#define SCENE3A_SLOTS 2

/* Per-slot data flaggedValueHolderGetTotal searches (0x74 bytes). */
typedef struct Scene3aSlotInfo {
    u8 unk00[0x74];
} Scene3aSlotInfo;

typedef struct Scene3aEntry {
    u16 id;     /* 0x0: 0 = empty */
    u16 unk02;  /* 0x2 */
} Scene3aEntry;

/* A slot's entry list. */
typedef struct Scene3aList {
    Scene3aEntry entries[0x400]; /* 0x000 */
    u16 unk1000;                 /* 0x1000 */
} Scene3aList;

/* Loading states of Scene3a::state. */
enum {
    SCENE3A_STATE_IDLE = 0,
    SCENE3A_STATE_START = 1,
    SCENE3A_STATE_RUNNING = 2,
    SCENE3A_STATE_STOP = 3,
    SCENE3A_STATE_FINISH = 4
};

struct Scene3a {
    /* 0x00000 */ u8 unk00[4];
    /* 0x00004 */ s32 phase;                  /* index of the update callback to run */
    union {
        /* 0x00008 */ u8 unk08[0x18];
        struct {
            u8 unk08BeforePreview[0x16];
            /* 0x0001E */ u8 requested;
            /* 0x0001F */ u8 ready;
        } preview;
    };
    /* 0x00020 */ struct {
        Scene3aFunc func;                     /* member function pointer, 8 bytes */
    } updateFuncs[0x100];                     /* one per phase (count unknown) */
    /* 0x00820 */ u8 unk820[0x40];
    /* 0x00860 */ s32 slot;                   /* current slot */
    /* 0x00864 */ u8 unk864[0x1c];
    /* 0x00880 */ Scene3aSlotInfo slotInfo[SCENE3A_SLOTS];
    /* 0x00968 */ u8 unk968[0x32c];
    /* 0x00c94 */ Scene3aList lists[SCENE3A_SLOTS];
    /* 0x02c98 */ u8 unk2c98[0x1308c];
    /* 0x15d24 */ s32 state;                  /* SCENE3A_STATE_* */
    union {
        /* 0x15d28 */ u8 unk15d28[0x20];
        struct {
            /* 0x15d28 */ u32 item;
            u8 unk15d2c[0x1c];
        } equipmentPreview;
    };
    /* 0x15d48 */ void *modelManager;         /* destroyed when the scene stops */
    /* 0x15d4c */ u8 unk15d4c[8];
    /* 0x15d54 */ u32 selectedItem;
};

#endif
