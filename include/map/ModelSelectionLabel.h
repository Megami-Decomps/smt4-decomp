#ifndef MAP_MODEL_SELECTION_LABEL_H
#define MAP_MODEL_SELECTION_LABEL_H
#include "common.h"
#include <stddef.h>
struct ModelSelectionLabel {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ char name[0x2C];
};
typedef char ModelSelectionLabelLayoutCheck[
    offsetof(ModelSelectionLabel, name) == 8 && sizeof(ModelSelectionLabel) == 0x34 ? 1 : -1];
#endif
