/* NON_MATCHING: stored unsigned ID and signed menu conversion match retail; only initial global-work pointer/constant setup is scheduled differently. */
#include "battle/btlUI.h"
#include "gamedata/KeyedCatalog.h"

extern "C" {

/* The battle UI's selection request block at 0xC040 of the UI work area. */
struct BtlUiWork {
    /* 0x0000 */ u8 unk0000[0xC040];
    /* 0xC040 */ u8 active;
    /* 0xC041 */ u8 unkC041[3];
    /* 0xC044 */ u32 owner;
    /* 0xC048 */ u32 unkC048;
    /* 0xC04C */ u32 kind;
    /* 0xC050 */ u16 id;
};


extern BtlUiGlobalsA g_btlUi;
s32 textFormatBuffer(char *output, const char *format, ...);
void menuStateBeginSelect(s16 id);
void FUN_00227af0(const char *text);
void menuStateStartSelect(u8 selection);

/* Opens the battle selection menu for `id`, titled with its name. */
void FUN_004a99bc(BtlUiA *unused, u16 id, s32 owner)
{
    BtlUiWork *work = reinterpret_cast<BtlUiWork *>(g_btlUi.ui);
    char title[64];

    work->active = 1;
    work->kind = 18;
    work->id = id;
    work->unkC048 = 0;
    work->owner = owner;
    title[0] = 0;
    textFormatBuffer(title, "%s", FUN_00186f54(work->id));
    menuStateBeginSelect(id);
    FUN_00227af0(title);
    menuStateStartSelect(0);
}

} /* extern "C" */
