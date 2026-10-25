#include "common.h"
#include "title/titleMain.h"

extern "C" {

struct QuestCenterWork {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ TitleDbgBgObj *background;
};
struct QuestCenterGlobals {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ QuestCenterWork *work;
};
extern QuestCenterGlobals g_qcMain;
void renderCtxEndPass(TitleDbgBgObj *background);

/* Finish the optional quest-center background pass. */
s32 qcMainEndBackgroundPass(u32 handle)
{
    if (g_qcMain.work != NULL && g_qcMain.work->background != NULL) {
        renderCtxEndPass(g_qcMain.work->background);
    }
    return 0;
}

}
