#include <stdio.h>
#include "battle/BtlUiGlobal.h"
#include "gamedata/SaveLoadProcess.h"
#include "gamedata/DataTableAccess_Smt4.h"

namespace {
struct BattleMessageOverlay {
    u8 unk0000[0xc9d8];
    /* 0xC9D8 */ u8 active;
    /* 0xC9D9 */ u8 unkC9D9[3];
    /* 0xC9DC */ u32 parameter;
    /* 0xC9E0 */ u32 unkC9E0;
    /* 0xC9E4 */ u32 state;
    /* 0xC9E8 */ u16 textId;
};
}
extern "C" {
void communicationBeginTransition(s32 mode);

/* Initializes a battle message request and begins displaying its selected text. */
void FUN_003ae06c(u32 unused, u16 textId, u32 parameter)
{
    BattleMessageOverlay *ui = reinterpret_cast<BattleMessageOverlay *>(g_btlUi.ui);
    ui->active = 1;
    ui->state = 0x12;
    ui->textId = textId;
    ui->parameter = parameter;
    ui->unkC9E0 = 0;
    char text[64];
    text[0] = '\0';
    sprintf(text, "%s", dataTable0BFindById(ui->textId));
    FUN_001ecb54(textId);
    comWinSetText(reinterpret_cast<const u8*>(text));
    communicationBeginTransition(0);
}
}
