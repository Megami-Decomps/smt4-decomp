#include "common.h"

extern "C" {

void textFormatBuffer(char *dst, const char *fmt);
void FUN_00333318(void);
void sysPlayVoice(u32 voiceId);
s32 FUN_00162ea4(void);
s32 scrGetArg(u32 index);

extern const char DAT_0052fde8[];
extern const char DAT_0052fe0c[];
extern const char DAT_0052fe2c[];

typedef struct {
    u8 unk0[8];
    s32 state;        /* 0x08 */
    u8 unkC[0x14 - 0xc];
    u8 dirty;         /* 0x14 */
    u8 unk15[0xc4 - 0x15];
    char message[1];  /* 0xc4 */
} SearchWin;

extern SearchWin *DAT_0057f584;

/* Script command: formats the search window message chosen by argument 0 and opens it. */
s32 searchWinScriptShowMessage(void)
{
    SearchWin *win;
    s32 kind;

    if (DAT_0057f584 == NULL && FUN_00162ea4() == 0) {
        FUN_00333318();
        kind = scrGetArg(0);
        win = DAT_0057f584;
        if (kind == 0) {
            textFormatBuffer(win->message, DAT_0052fde8);
        } else if (kind == 1) {
            textFormatBuffer(win->message, DAT_0052fe0c);
        } else if (kind == 2) {
            textFormatBuffer(win->message, DAT_0052fe2c);
        } else {
            return 1;
        }
        win->dirty = 1;
        win->state = 1;
        sysPlayVoice(0x10000ce);
    }
    return 1;
}

} /* extern "C" */
