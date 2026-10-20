/* Model/MoriModelContent.cpp: a model "content" holder that owns the model's sub-objects. */
#ifndef MODEL_MORIMODELCONTENT_H
#define MODEL_MORIMODELCONTENT_H

#include "common.h"

struct MoriModelBody;       /* 0x26C bytes, constructed at MoriModelContent.cpp:239 */
struct MoriModelBinding;    /* 0x1C bytes, constructed at MoriModelContent.cpp:251 */

typedef struct MoriModelContent {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ struct MoriModelBody *body;
    /* 0x08 */ struct MoriModelBinding *binding;
    /* 0x0C */ u32 unk0C;
} MoriModelContent;

#endif
