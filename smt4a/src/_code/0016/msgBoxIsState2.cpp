#include "common.h"

extern "C" {

typedef struct MsgBoxModeView {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u8 mode;
} MsgBoxModeView;

/* Returns whether `mode` is 2. */
u8 msgBoxIsState2(MsgBoxModeView *object)
{
    return object->mode == 2;
}

} /* extern "C" */
