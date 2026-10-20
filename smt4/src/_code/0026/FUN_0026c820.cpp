#include "common.h"

extern "C" {

typedef struct BtlUiPanel {
    /* 0x0000 */ u8 unk0000[8];
    /* 0x0008 */ u8 scene[0x21F8];
    /* 0x2200 */ u8 timer[1];
} BtlUiPanel;

typedef struct BtlUiView {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ BtlUiPanel *panel;
} BtlUiView;

extern BtlUiView g_btlUi;

s32 playSceneIsFadeOutDone(void *scene);
s32 FUN_0028be84(void *timer);
int playSceneFadeInStart(void *scene);
int playSceneTimerSubStart(void *timer);

/* Once the panel's scene has faded out and FUN_0028be84 accepts its timer, fades the scene back in and starts the timer. */
void FUN_0026c820(void)
{
    BtlUiPanel *panel = g_btlUi.panel;

    if (playSceneIsFadeOutDone(panel->scene) != 0 && FUN_0028be84(panel->timer) != 0) {
        playSceneFadeInStart(panel->scene);
        playSceneTimerSubStart(panel->timer);
    }
}

} /* extern "C" */
