/* NON_MATCHING: retail sign-extends the s16 id with sxth at the menuStateBeginSelect call; armcc here treats the short parameter as already extended. */
#include "common.h"

extern "C" {

/* The battle UI's selection request block at 0xC040 of the UI work area. */
struct BtlUiWork {
    /* 0x0000 */ u8 unk0000[0xC040];
    /* 0xC040 */ u8 active;
    /* 0xC041 */ u8 unkC041[3];
    /* 0xC044 */ u32 owner;
    /* 0xC048 */ u32 unkC048;
    /* 0xC04C */ u32 kind;
    /* 0xC050 */ s16 id;
};

struct BtlUi {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ BtlUiWork *work;
};

extern BtlUi g_btlUi;
s32 textFormatBuffer(char *output, const char *format, ...);
u32 FUN_00186f54(u16 id);
void menuStateBeginSelect(s32 id);
void FUN_00227af0(const char *text);
void menuStateStartSelect(s32 mode);

/* Opens the battle selection menu for `id`, titled with its name. */
void FUN_004a99bc(u32 unused, s16 id, u32 owner)
{
    BtlUiWork *work = g_btlUi.work;
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
