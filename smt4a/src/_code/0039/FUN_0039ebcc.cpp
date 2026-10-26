#include "common.h"

struct SpriteOperation {
    /* 0x00 */ u8 padding[0x50];
    /* 0x50 */ s16 mode;
    /* 0x52 */ u8 reserved[2];
    /* 0x54 */ u8 active;
};

struct SpriteOperationOwner {
    /* 0x000 */ u8 padding[0x2dc];
    /* 0x2dc */ SpriteOperation operation;
};

extern "C" {
u32 uiSpriteGetCompletionState(SpriteOperation *operation);
s32 uiSpriteGetOperationMode(SpriteOperation *operation);

/* Uses the completion state of an active mode-three operation; otherwise reports 1. */
u32 FUN_0039ebcc(SpriteOperationOwner *owner)
{
    if (uiSpriteGetOperationMode(&owner->operation) == 3 && owner->operation.active != 0) {
        return uiSpriteGetCompletionState(&owner->operation);
    }
    return 1;
}
}
