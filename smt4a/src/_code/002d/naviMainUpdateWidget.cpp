#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "common.h"
extern "C" {

void menuIsState5Or15(void *widget);
/* Updates the embedded navigation widget when the screen exists. */
void naviMainUpdateWidget(void)
{
    if (g_naviMain != NULL)
        menuIsState5Or15(&g_naviMain->panel);
}
}
