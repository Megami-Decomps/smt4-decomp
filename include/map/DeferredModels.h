#ifndef MAP_DEFERRED_MODELS_H
#define MAP_DEFERRED_MODELS_H

#include "common.h"
#include <stddef.h>
#include "map/MapVector.h"

struct MapTimerSlot;
struct AsdMdlObject;

/* One NPC model of the map (IV's map NPC; Apocalypse's is MapNpc in map/MapNpc.h). */
struct DeferredModelEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 ready;
    /* 0x02 */ u8 visible;
    /* 0x03 */ u8 unk03[3];
    /* 0x06 */ s16 modelId;         /* character/npc/npc_%02d.bam */
    /* 0x08 */ s16 tableIndex;      /* its record in table 0x2A */
    /* 0x0A */ s16 pathIndex;       /* the record's path (s8 at +0x32) */
    /* 0x0C */ float pathDuration;  /* 4.0f, passed to FUN_0021e16c with the path */
    /* 0x10 */ MapVector position;
    /* 0x1C */ float angle;
    /* 0x20 */ u32 handle;
    /* 0x24 */ float z;
    /* 0x28 */ s16 flagFirst;       /* the flag pair that must hold for the model to appear */
    /* 0x2A */ s16 flagSecond;
    /* 0x2C */ MapTimerSlot *pathTimer; /* FUN_0021e16c's result */
    /* 0x30 */ AsdMdlObject *model;     /* asdMdlManagerClone / asdMdlManagerCreateSecondList */
    /* 0x34 */ u32 resource;
};
struct DeferredModelWork {
    /* 0x000 */ u32 loadState;
    /* 0x004 */ u32 tableIndex;      /* the table 0x2A record being loaded */
    /* 0x008 */ u32 count;           /* models placed so far */
    /* 0x00C */ DeferredModelEntry entries[64];
    /* 0xE0C */ u8 pending;
    /* 0xE0D */ u8 unkE0D[3];
    /* 0xE10 */ u32 pendingCount;
    union {
        /* 0xE14 */ u8 unkE14[0x28];
        struct {
            /* 0xE14 */ s32 id;
            /* 0xE18 */ u8 unkE18[4];
            /* 0xE1C */ char label[0x20];
        } selection;
    };
    /* 0xE3C */ u8 updating;
};

typedef char DeferredModelEntrySizeCheck[sizeof(DeferredModelEntry) == 0x38 ? 1 : -1];
typedef char DeferredModelIdOffsetCheck[offsetof(DeferredModelEntry, modelId) == 6 && offsetof(DeferredModelEntry, position) == 0x10 &&
    offsetof(DeferredModelEntry, angle) == 0x1C ? 1 : -1];
typedef char DeferredModelWorkEntriesCheck[offsetof(DeferredModelWork, entries) == 0xC ? 1 : -1];
typedef char DeferredModelWorkPendingCheck[offsetof(DeferredModelWork, pending) == 0xE0C ? 1 : -1];
typedef char DeferredModelWorkUpdatingCheck[offsetof(DeferredModelWork, updating) == 0xE3C ? 1 : -1];
typedef char DeferredModelSelectionOffsetsCheck[
    offsetof(DeferredModelWork, selection.id) == 0xE14 &&
    offsetof(DeferredModelWork, selection.label) == 0xE1C &&
    sizeof(DeferredModelWork) == 0xE40 ? 1 : -1];

#endif
