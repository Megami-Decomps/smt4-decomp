#include "common.h"

extern "C" {

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0x2234];
    /* 0x2234 */ u32 messageWindow; /* the window the battle's choice is shown in */
} BtlMainState;

extern BtlMainState *btlGetMainState(void);
extern void FUN_002cd81c(u32 messageWindow);

/* Script command: shows a choice from the battle's message window (FUN_002cd81c). */
void scrComm_Message_ShowChoiceFromBattle(void)
{
    FUN_002cd81c(btlGetMainState()->messageWindow);
}

} /* extern "C" */
