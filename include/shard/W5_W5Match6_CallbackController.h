#ifndef SHARD_W5_W5MATCH6_CALLBACKCONTROLLER_H
#define SHARD_W5_W5MATCH6_CALLBACKCONTROLLER_H

#include "common.h"
#include "gamedata/HowToTable.h"
#include "ui/GridNavigation.h"
#include <stddef.h>


/* The work area g_callbackController.work points at. */
typedef struct CallbackControllerWork {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 state;
    /* 0x005 */ u8 unk005[3];
    /* 0x008 */ void *bufferA;
    /* 0x00C */ void *bufferB;
    union {
        /* 0x010 */ u8 unk010[0x78];
        struct {
            /* 0x010 */ HowToRecordSection section;
            /* 0x018 */ u16 indices[52];
            /* 0x080 */ s32 availableCount;
        } catalog;
    };
    /* 0x088 */ void *slots[3];       /* memory slots freed with asdMemFreeSlot */
    union {
        /* 0x094 */ u8 unk094[0x184];
        struct {
            u8 unk094[0xF8];
            /* 0x18C */ GridNavigation navigation;
            /* 0x1F0 */ u32 rowState[3];
            /* 0x1FC */ u16 touchRows[10];
            u16 unk210;
            /* 0x212 */ u16 touchPrevious;
            /* 0x214 */ u16 touchNext;
            /* 0x216 */ u16 touchScroll;
        } list;
    };
    /* 0x218 */ u16 touchRegionCount;

    void releaseBuffers();
    void releaseInputAndBuffers();
} CallbackControllerWork;

typedef char CallbackControllerWorkOffsets[offsetof(CallbackControllerWork, state) == 4 &&
    offsetof(CallbackControllerWork, slots) == 0x88 &&
    offsetof(CallbackControllerWork, touchRegionCount) == 0x218 ? 1 : -1];
typedef char CallbackControllerCatalogOffsetsCheck[
    offsetof(CallbackControllerWork, catalog.section) == 0x10 &&
    offsetof(CallbackControllerWork, catalog.indices) == 0x18 &&
    offsetof(CallbackControllerWork, catalog.availableCount) == 0x80 &&
    offsetof(CallbackControllerWork, list.navigation) == 0x18C &&
    offsetof(CallbackControllerWork, list.touchRows) == 0x1FC &&
    offsetof(CallbackControllerWork, list.touchPrevious) == 0x212 &&
    offsetof(CallbackControllerWork, list.touchNext) == 0x214 &&
    offsetof(CallbackControllerWork, list.touchScroll) == 0x216 &&
    sizeof(CallbackControllerWork) == 0x21C ? 1 : -1];

struct CallbackControllerGlobal {
    /* 0x00 */ u8 ownsTable;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ void *work;
};
extern "C" CallbackControllerGlobal g_callbackController;

#endif
