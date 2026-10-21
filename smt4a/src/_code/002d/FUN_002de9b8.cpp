#include "common.h"
extern "C" {
struct NaviWorkView {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ u8 widget;
};
extern NaviWorkView *g_naviMain;
void menuIsState5Or15(void *widget);
/* Updates the embedded navigation widget when the screen exists. */
void FUN_002de9b8(void)
{
    if (g_naviMain != NULL)
        menuIsState5Or15(&g_naviMain->widget);
}
}
