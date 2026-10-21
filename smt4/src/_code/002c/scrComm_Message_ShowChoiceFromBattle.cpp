#include "common.h"

extern "C" {

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0x2234];
    /* 0x2234 */ u32 messageWindow; /* the window the battle's choice is shown in */
} BtlMainState;

extern BtlMainState *btlGetMainState(void);
extern void scrShowChoiceInWindow(u32 messageWindow);

/* Script command: shows a choice from the battle's message window (scrShowChoiceInWindow). */
void scrComm_Message_ShowChoiceFromBattle(void)
{
    scrShowChoiceInWindow(btlGetMainState()->messageWindow);
}

} /* extern "C" */
