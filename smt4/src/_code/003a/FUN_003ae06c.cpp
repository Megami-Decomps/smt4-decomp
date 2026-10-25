/* NON_MATCHING: The message request uses one subobject pointer instead of retail's separately cached large-offset field addresses. */
#include "battle/btlUI.h"
#include "gamedata/SaveLoadProcess.h"

namespace {
struct BattleMessageRequest {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 parameter;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 state;
    /* 0x10 */ s16 textId;
};
}
extern "C" {
extern BtlUiGlobals g_btlUi;
const char *dataTable0BFindById(u32 id);
void textFormatBuffer(char *buffer, const char *format, ...);
void communicationBeginTransition(s32 mode);

/* Initializes a battle message request and begins displaying its selected text. */
void FUN_003ae06c(u32 unused, s32 textId, u32 parameter)
{
    BattleMessageRequest *request = reinterpret_cast<BattleMessageRequest *>(&g_btlUi.ui->objD.unk[0x4B18]);
    request->active = 1;
    request->state = 0x12;
    request->textId = textId;
    request->parameter = parameter;
    request->unk08 = 0;
    char text[64];
    text[0] = '\0';
    textFormatBuffer(text, "%s", dataTable0BFindById(static_cast<u16>(request->textId)));
    FUN_001ecb54(static_cast<s16>(textId));
    comWinSetText(reinterpret_cast<const u8*>(text));
    communicationBeginTransition(0);
}
}
