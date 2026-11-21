/* The player model's equipment parts: one loaded model per part (head, body, legs), each named by its
 * resource path (playerLoadEquipmentModelParts builds "player/pl%02d_%03dhd%d.bam" and the like). */
#ifndef GFX_PLAYERMODELPARTS_H
#define GFX_PLAYERMODELPARTS_H

#include "common.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

/* One equipment part's model slot (0x50 bytes). */
struct PlayerModelPart {
    /* 0x00 */ u32 state;        /* 2 = released, 4 = loading asynchronously, 5 = waiting to load */
    /* 0x04 */ u16 id;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ AsdMdlObject *model;
    /* 0x0C */ void *request;    /* the asynchronous file request */
    /* 0x10 */ char name[0x40];  /* the part's resource path */
};

/* The player model's part slots. */
struct PlayerModelParts {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 blocked;      /* nonzero: no asynchronous loads */
    /* 0x08 */ u32 asyncEnabled;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ PlayerModelPart parts[3]; /* head, body, legs */
};

typedef char PlayerModelPartsOffsets[sizeof(PlayerModelPart) == 0x50 && offsetof(PlayerModelPart, model) == 8 &&
    offsetof(PlayerModelPart, name) == 0x10 && offsetof(PlayerModelParts, parts) == 0x10 ? 1 : -1];

#endif
