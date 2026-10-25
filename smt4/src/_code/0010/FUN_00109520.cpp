#include "title/titleMain.h"
#include "common.h"

extern "C" {

typedef struct Panel {
    /* 0x00 */ u8 unk00[0x9A];
    /* 0x9A */ u8 shown;
    /* 0x9B */ u8 unk9B;
    /* 0x9C */ u8 enabled;
} Panel;

typedef struct Context {
    /* 0x000 */ u8 unk000[0xF00];
    /* 0xF00 */ Panel panel;
} Context;

extern TitleScene *g_titleScene;

int FUN_001132fc(int arg);
int FUN_002bff10(int arg);
int renderCtxSelectStereoLayout(TitleScene *arg);
Context *jobGetWork(void);

/* Script command: if the panel is shown and enabled and FUN_002bff10 reports nothing pending, runs renderCtxSelectStereoLayout/FUN_001132fc. Always returns 0. */
u8 FUN_00109520(void)
{
    Panel *panel = &jobGetWork()->panel;

    if (panel->shown == 0) {
        return 0;
    }
    if (panel->enabled == 0) {
        return 0;
    }
    if (FUN_002bff10(0) != 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    FUN_001132fc(0);
    return 0;
}

} /* extern "C" */
