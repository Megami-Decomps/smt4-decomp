/* AsdSDK/Source/Gfx/Model/AsdMdlManager.c: model objects created and tracked by the model manager. */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMDLMANAGER_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMDLMANAGER_H

#include "common.h"

/* The shared part of a model object. */
typedef struct AsdMdlNode {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *data;      /* what the loader built from the model source */
    /* 0x08 */ u32 param;       /* caller supplied parameter */
    /* 0x0C */ s32 unk0c;
    /* 0x10 */ u8 unk10[0x14];
    /* 0x24 */ void **table;    /* count entries, the first is the resource */
    /* 0x28 */ s32 count;
    /* 0x2C */ struct AsdMdlResource *resource;
} AsdMdlNode;

/* The render flags of a model resource (bit 0: the world transform applies). */
typedef struct AsdMdlRenderFlags {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 flags;
} AsdMdlRenderFlags;

typedef struct AsdMdlRenderState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AsdMdlRenderFlags *flags;
} AsdMdlRenderState;

/* The resource a model node draws from; only the fields the readable code touches are named. */
typedef struct AsdMdlResource {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 unk008;            /* handed to the model builder */
    /* 0x00C */ u8 unk00c[0x1EA];
    /* 0x1F6 */ u8 positionFollowed;   /* set when an effect takes over the model's position */
    /* 0x1F7 */ u8 unk1f7[0x29];
    /* 0x220 */ AsdMdlRenderState *state;
} AsdMdlResource;

/* One record of a model object's record array (0x1C bytes). */
typedef struct AsdMdlRecord {
    /* 0x00 */ void *data;      /* freed with the object */
    /* 0x04 */ u8 unk04[0x18];
} AsdMdlRecord;

/* A model object (0x1C bytes). */
typedef struct AsdMdlObject {
    /* 0x00 */ u32 flags;       /* 0x200000 once initialized */
    /* 0x04 */ void *request;   /* the queued file request the model data is loaded from */
    /* 0x08 */ AsdMdlNode *node;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ AsdMdlRecord *records; /* node->count records */
} AsdMdlObject;

#endif
