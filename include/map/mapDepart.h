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
    /* 0x16 */ u8 unk16[10];
    /* 0x20 */ void *dataA;      /* heap block */
    /* 0x24 */ u32 sizeA;
    /* 0x28 */ void *dataB;      /* heap block */
    /* 0x2C */ u32 sizeB;
} MapDepartWork;
typedef char MapDepartWorkVisibilityOffsetsCheck[
    offsetof(MapDepartWork, modelsVisible) == 0xA &&
    offsetof(MapDepartWork, nodeA) == 0xC &&
    offsetof(MapDepartWork, nodeB) == 0x10 &&
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

s32 FUN_002319c0(void);

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
