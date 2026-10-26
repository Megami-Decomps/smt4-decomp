/* NON_MATCHING: retail uses `mvn r3, #0` where armcc emits `mvn ip, #0`. */
#include "common.h"

extern "C" {

struct CecEdit {
    /* 0x000 */ u8 unk000[0xe8];
    /* 0x0e8 */ s32 state;
    /* 0x0ec */ s32 nextState;
    /* 0x0f0 */ u8 unk0f0[8];
    /* 0x0f8 */ s32 mode;
    /* 0x0fc */ u8 unk0fc[0x90];
    /* 0x18c */ s32 counter;
};
extern CecEdit *g_campCecEdit;
void sysPlaySe(s32 sound);
void buttonHelpSetText(s32 index, u32 color);

void campCecEditCancel(void)
{
    CecEdit *edit = g_campCecEdit;
    if (edit != NULL && edit->state == 16) {
        edit->state = -1;
        edit->nextState = 17;
        edit->mode = 2;
        edit->counter = 0;
        sysPlaySe(228);
        buttonHelpSetText(0, 0xf4f4f4ff);
    }
}

} /* extern "C" */
