/* AsdSDK/Source/Gfx/Model/AsdMdlManager.c: model objects created and tracked by the model manager. */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMDLMANAGER_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMDLMANAGER_H

#include "common.h"

/* The shared part of a model object. */
typedef struct AsdMdlNode {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *unk04;     /* what the loader built from the model source */
    /* 0x08 */ u32 unk08;       /* caller supplied parameter */
    /* 0x0C */ s32 unk0c;
    /* 0x10 */ u8 unk10[0x18];
    /* 0x28 */ s32 count;
} AsdMdlNode;

/* One record of a model object's record array (0x1C bytes). */
typedef struct AsdMdlRecord {
    /* 0x00 */ void *data;      /* freed with the object */
    /* 0x04 */ u8 unk04[0x18];
} AsdMdlRecord;

/* A model object (0x1C bytes). */
typedef struct AsdMdlObject {
    /* 0x00 */ u32 flags;       /* 0x200000 once initialized */
    /* 0x04 */ void *unk04;
    /* 0x08 */ AsdMdlNode *node;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ AsdMdlRecord *records; /* node->count records */
} AsdMdlObject;

#endif
