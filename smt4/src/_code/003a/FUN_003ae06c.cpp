/* NON_MATCHING: field addresses match (overlay at 0xC9D8); retail loads the g_btlUi pointer after the push and sign-extends textId only at the FUN_001ecb54 call (the callee takes it as s16-width), build has no sxth. */
#include "battle/btlUI.h"
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
    /* 0xC9E8 */ s16 textId;
};
}
extern "C" {
extern BtlUiGlobals g_btlUi;
void textFormatBuffer(char *buffer, const char *format, ...);
void communicationBeginTransition(s32 mode);

/* Initializes a battle message request and begins displaying its selected text. */
void FUN_003ae06c(u32 unused, s32 textId, u32 parameter)
{
    BattleMessageOverlay *ui = reinterpret_cast<BattleMessageOverlay *>(g_btlUi.ui);
    ui->active = 1;
    ui->state = 0x12;
    ui->textId = textId;
    ui->parameter = parameter;
    ui->unkC9E0 = 0;
    char text[64];
    text[0] = '\0';
    textFormatBuffer(text, "%s", dataTable0BFindById(static_cast<u16>(ui->textId)));
    FUN_001ecb54(textId);
    comWinSetText(reinterpret_cast<const u8*>(text));
    communicationBeginTransition(0);
}
}
