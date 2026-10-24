/* The 0x20-byte model content object past the shared 0x10-byte prefix in Model/MoriModelContent.h
 * (the same object Model/ModelList.h views as a model list): what it is loaded from and the loader
 * overrides the content passes on. */
#ifndef MODEL_MORIMODELCONTENTLOAD_H
#define MODEL_MORIMODELCONTENTLOAD_H

#include "Model/MoriModelContent.h"

struct MoriModelContentLoad : MoriModelContent {
    /* 0x10 */ u32 source;   /* 0 when there is nothing to load */
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
};

typedef char MoriModelContentLoadSizeCheck[sizeof(MoriModelContentLoad) == 0x20 ? 1 : -1];

#endif
