#ifndef MODEL_MODELLIST_H
#define MODEL_MODELLIST_H
#include "Model/MoriModelContent.h"
#include <stddef.h>

struct ModelList {
    /* 0x00 */ MoriModelContent content;
    /* 0x10 */ void *resource;
    /* 0x14 */ u32 state;
    /* 0x18 */ s32 scaleX;
    /* 0x1C */ s32 scaleY;
};
typedef char ModelListLayoutCheck[sizeof(ModelList) == 0x20 &&
    offsetof(ModelList, resource) == 0x10 && offsetof(ModelList, scaleX) == 0x18 ? 1 : -1];
#endif
