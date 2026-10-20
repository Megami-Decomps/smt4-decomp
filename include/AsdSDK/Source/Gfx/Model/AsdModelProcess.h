/* AsdSDK/Source/Gfx/Model/AsdModelProcess.c: the model manager's worker processes. */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMODELPROCESS_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMODELPROCESS_H

#include "common.h"

#define ASDMODELPROCESS_COUNT 3

/* The processes the model manager started, one handle per worker. */
typedef struct AsdModelProcessSet {
    /* 0x00 */ u32 handle[ASDMODELPROCESS_COUNT];
} AsdModelProcessSet;

#endif
