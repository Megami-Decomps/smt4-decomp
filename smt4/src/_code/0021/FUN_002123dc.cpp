#include "common.h"

extern "C" {

typedef struct MessageBox {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 id;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 flags;
    /* 0x10 */ u8 unk10[0x73];
    /* 0x83 */ s8 state;
} MessageBox;

typedef struct MessageMainView {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ MessageBox *box;
} MessageMainView;

extern MessageMainView g_messageMain;

s32 msgBoxFlagsClearBit7(u32 id);

/* Returns a message box in state 2 to state 0, clearing its bit 7 unless flag 0x20 is set. */
void FUN_002123dc(void)
{
    MessageBox *box = g_messageMain.box;

    if (box != NULL && box->state == 2) {

        box->state = 0;
        if ((box->flags & 0x20) == 0) {
            msgBoxFlagsClearBit7(box->id);
        }
    }
}

} /* extern "C" */
