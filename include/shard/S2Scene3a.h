/* A scene object with a per-phase update callback table and a loading state machine. */
#ifndef S2_SCENE3A_H
#define S2_SCENE3A_H

#include "common.h"
#include <stddef.h>

struct Scene3a;
typedef void (Scene3a::*Scene3aFunc)(void);

#define SCENE3A_SLOTS 2

/* Per-slot data flaggedValueHolderGetTotal searches (0x74 bytes). */
typedef struct Scene3aSlotInfo {
    u8 unk00[0x74];
} Scene3aSlotInfo;

typedef struct Scene3aEntry {
    u16 id;     /* 0x0: 0 = empty */
    union {
        u16 unk02;  /* 0x2 */
        struct {
            u16 options : 10;
            u16 preserved : 6; // upper bits survive option updates
        } attributes;
    };
} Scene3aEntry;

/* A slot's entry list. */
typedef struct Scene3aList {
    Scene3aEntry entries[0x400]; /* 0x000 */
    u16 unk1000;                 /* 0x1000 */
} Scene3aList;

struct Scene3aTransactionRecord {
    u16 unk00;
    u16 id;
    u16 quantity;
};

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
    /* 0x02c98 */ union {
        u8 unk2c98[0x1308c];
        struct {
            u8 unk2C98[0x7084];
            /* 0x09D1C */ Scene3aTransactionRecord records[0x2000];
            /* 0x15D1C */ u16 count;
            /* 0x15D1E */ u8 unk15D1E[2];
            /* 0x15D20 */ u32 totalAmount;
        } transaction;
    };
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
typedef char Scene3aTransactionLayoutCheck[sizeof(Scene3aEntry) == 4 &&
    sizeof(Scene3aTransactionRecord) == 6 && offsetof(Scene3aEntry, attributes) == 2 &&
    offsetof(Scene3a, transaction.records) == 0x9D1C &&
    offsetof(Scene3a, transaction.count) == 0x15D1C &&
    offsetof(Scene3a, transaction.totalAmount) == 0x15D20 && sizeof(Scene3a) == 0x15D58 ? 1 : -1];
typedef char Scene3aEntryAttributesStorageCheck[offsetof(Scene3aEntry, attributes) == 2 &&
    sizeof(((Scene3aEntry *)0)->attributes) == 2 ? 1 : -1];

#endif
