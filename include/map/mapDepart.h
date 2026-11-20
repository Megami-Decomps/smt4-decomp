/* map/mapDepart.c: leaving a map. */
#ifndef MAP_MAPDEPART_H
#define MAP_MAPDEPART_H

#include "common.h"

/* Request consumed by MapDepart_Init; the second argument is its byte size. */
struct MapDepartureRequest {
    s32 mode;
    s32 map;
    s32 entry;
    u32 unk0C;
    u32 destinationState[4];
};
typedef char MapDepartureRequestSize[sizeof(MapDepartureRequest) == 0x20 ? 1 : -1];

#include <stddef.h>
struct BtlUi;

/* The departure block, kept by a module global. */
typedef struct MapDepart {
    /* 0x00 */ u32 job;          /* job that runs the departure */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 freeOnEnd;     /* 0 = keep the block after the job ends */
} MapDepart;

/* The departure sequence's module state (0xC bytes): the loading phase's flags and frame count and
 * the teardown's step. */
typedef struct MapDepartSequence {
    /* 0x00 */ s8 started;
    /* 0x01 */ s8 finished;       /* the sequence has finished loading */
    /* 0x02 */ s8 overlayShown;   /* the debug overlay was shown by the sequence */
    /* 0x03 */ s8 unk03;
    /* 0x04 */ s32 frame;         /* frames since the sequence started */
    /* 0x08 */ s32 teardownStep;  /* MapDepartTeardownStep */
} MapDepartSequence;

typedef char MapDepartSequenceLayoutCheck[
    offsetof(MapDepartSequence, frame) == 4 && offsetof(MapDepartSequence, teardownStep) == 8 &&
    sizeof(MapDepartSequence) == 0xC ? 1 : -1];

/* MapDepartSequence.teardownStep */
enum MapDepartTeardownStep {
    MAP_DEPART_TEARDOWN_START,        /* finish the navigation request and reset the gimmicks */
    MAP_DEPART_TEARDOWN_WAIT_GIMMICKS, /* until the gimmicks are idle */
    MAP_DEPART_TEARDOWN_CLEAR,        /* clear the departure extras */
    MAP_DEPART_TEARDOWN_WAIT_MODELS   /* until deferred model destruction has finished */
};

struct AsdTexture;
struct ScriptProcess;

/* The departure job's whole block (Shin Megami Tensei IV, 0x80 bytes); MapDepart is its public prefix. */
typedef struct MapDepartJobWork {
    /* 0x00 */ MapDepart prefix;
    /* 0x0C */ s32 mode;             /* 0: leaving through the map's exit; 1, 2: a single relic (entry) */
    /* 0x10 */ s32 map;
    /* 0x14 */ s32 entry;
    /* 0x18 */ s32 state;
    /* 0x1C */ s32 counter;          /* frames in the state */
    /* 0x20 */ u8 listActive;        /* the result list is being revealed */
    /* 0x21 */ u8 unk21[3];
    /* 0x24 */ s32 listDelay;
    /* 0x28 */ s32 listFrame;        /* a row appears every 13 frames */
    /* 0x2C */ u8 listDone;          /* every row is shown */
    /* 0x2D */ u8 promptActive;
    /* 0x2E */ u8 unk2E[2];
    /* 0x30 */ s32 promptDelay;
    /* 0x34 */ u8 promptReady;
    /* 0x35 */ u8 unk35[3];
    /* 0x38 */ s32 promptFrame;
    /* 0x3C */ u8 effectActive;
    /* 0x3D */ u8 unk3D[3];
    /* 0x40 */ s32 effectDelay;
    /* 0x44 */ s32 effectFrame;      /* loops every 31 frames */
    /* 0x48 */ u32 destinationState[4];
    /* 0x58 */ void *scriptData;     /* the loaded .bf script */
    /* 0x5C */ void *messageData;    /* the loaded .mbm messages */
    /* 0x60 */ ScriptProcess *script;
    /* 0x64 */ u32 completionFlag;   /* game flag set when the event script ends, 0 = none */
    /* 0x68 */ u8 unk68[0x14];
    /* 0x7C */ AsdTexture *texture;  /* node 4 of texture table 10 */
} MapDepartJobWork;
typedef char MapDepartJobWorkLayoutCheck[
    offsetof(MapDepartJobWork, mode) == 0xC && offsetof(MapDepartJobWork, state) == 0x18 &&
    offsetof(MapDepartJobWork, listDone) == 0x2C && offsetof(MapDepartJobWork, effectActive) == 0x3C &&
    offsetof(MapDepartJobWork, destinationState) == 0x48 && offsetof(MapDepartJobWork, scriptData) == 0x58 &&
    offsetof(MapDepartJobWork, texture) == 0x7C && sizeof(MapDepartJobWork) == 0x80 ? 1 : -1];

/* The departure module's globals (0x4475b8): the job's block and a counter the job advances when it ends. */
typedef struct MapDepartModule {
    /* 0x00 */ MapDepartJobWork *work;
    /* 0x04 */ s32 exitCycle;        /* 0..2 */
} MapDepartModule;

struct AsdMdlObject;

/* Resources kept while departing (Shin Megami Tensei IV), one block behind a module global. */
typedef struct MapDepartWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    union {
        /* 0x0A */ u8 unk0A[2];
        /* 0x0A */ u8 modelsVisible;
    };
    union {
        /* 0x0C */ u32 handleA;
        /* 0x0C */ AsdMdlObject *nodeA;
    };
    union {
        /* 0x10 */ u32 handleB;
        /* 0x10 */ AsdMdlObject *nodeB;
    };
    /* 0x14 */ s16 state;
    /* 0x16 */ u8 unk16[2];
    /* 0x18 */ s32 skyId;        /* optional asynchronous sky archive */
    /* 0x1C */ s16 loadMapId;
    /* 0x1E */ s16 loadAreaId;
    /* 0x20 */ void *dataA;      /* heap block */
    /* 0x24 */ u32 sizeA;
    /* 0x28 */ void *dataB;      /* heap block */
    /* 0x2C */ u32 sizeB;
} MapDepartWork;
typedef char MapDepartWorkVisibilityOffsetsCheck[
    offsetof(MapDepartWork, modelsVisible) == 0xA &&
    offsetof(MapDepartWork, nodeA) == 0xC &&
    offsetof(MapDepartWork, nodeB) == 0x10 &&
    offsetof(MapDepartWork, skyId) == 0x18 &&
    offsetof(MapDepartWork, loadMapId) == 0x1C &&
    offsetof(MapDepartWork, loadAreaId) == 0x1E &&
    offsetof(MapDepartWork, dataA) == 0x20 &&
    offsetof(MapDepartWork, dataB) == 0x28 &&
    sizeof(MapDepartWork) == 0x30 ? 1 : -1];

/* A polymorphic object: slot 1 of its vtable destroys it. */
typedef struct MapDepartObject {
    /* 0x00 */ void (**vtable)(struct MapDepartObject *self);
} MapDepartObject;

/* Resources kept while departing (Apocalypse). */
typedef struct MapDepartWorkA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ MapDepartObject *objectA;   /* destroyed through their vtables */
    /* 0x10 */ MapDepartObject *objectB;
    /* 0x14 */ MapDepartObject *objectC;
    /* 0x18 */ s16 state;
} MapDepartWorkA;

/* Another block the departure keeps (Apocalypse). */
typedef struct MapDepartExtraA {
    /* 0x000 */ u8 unk000[0xF42];
    /* 0xF42 */ u16 unkF42;
    /* 0xF44 */ u16 unkF44;
} MapDepartExtraA;

/* Another block the departure keeps (Shin Megami Tensei IV). */
typedef struct MapDepartExtra {
    /* 0x000 */ u8 unk000[0xE3E];
    /* 0xE3E */ u16 unkE3E;
    /* 0xE40 */ u16 unkE40;
} MapDepartExtra;

#include "map/MapVector.h"

typedef __packed struct GameStateRecord {
    /* 0x00 */ u8 unk00[0x1A];
    /* 0x1A */ u8 unk1A;
    /* 0x1B */ u8 unk1B;
    /* 0x1C */ u16 unk1C;
    /* 0x1E */ u32 unk1E;
    /* 0x22 */ u32 unk22;
    /* 0x26 */ u32 unk26;
    /* 0x2A */ u32 unk2A;
    /* 0x2E */ u32 unk2E;
    /* 0x32 */ u32 unk32;
} GameStateRecord;

extern "C" {
void FUN_0025c2d0(struct BtlUi *ui, u8 value);
}

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void mapProbePositionDownward(void *position);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u8 FUN_0027d98c(void);
#ifdef __cplusplus
}
#endif

extern "C" {
char *FUN_001b43f0(s32 category, s32 id);
}

#ifdef __cplusplus
extern "C" {
#endif

s32 setFullScreenRect(void);

/* Stores the departure point index in the map save block (callers pass a word; the block keeps a byte). */
void mapSetDepartureIndex(u32 index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

unsigned int FUN_00384cf4(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 dataTable2BType1Count(void *unused);

#ifdef __cplusplus
}
#endif

#endif
