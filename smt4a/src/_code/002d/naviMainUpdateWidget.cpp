#include "shard/NaviMain.h"
#include "common.h"
extern "C" {
extern NaviMainA *g_naviMain;

void menuIsState5Or15(void *widget);
/* Updates the embedded navigation widget when the screen exists. */
void naviMainUpdateWidget(void)
{
    if (g_naviMain != NULL)
        menuIsState5Or15(&g_naviMain->panel);
}
}
