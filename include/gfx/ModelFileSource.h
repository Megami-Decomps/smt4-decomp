#ifndef GFX_MODEL_FILE_SOURCE_H
#define GFX_MODEL_FILE_SOURCE_H
#include "common.h"
#include <stddef.h>
struct ModelFileSource {
    /* 0x00 */ void *data;
};
typedef char ModelFileSourceLayoutCheck[sizeof(ModelFileSource) == 4 &&
    offsetof(ModelFileSource, data) == 0 ? 1 : -1];
#endif
