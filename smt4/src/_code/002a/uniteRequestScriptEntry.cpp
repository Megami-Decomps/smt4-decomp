#include "camp/Unite/UniteGlobals.h"
#include "status/StatusCamera.h"

extern "C" {

int buttonHelpSetPreset(int arg);
extern int scrScriptProcessStartEntry(u32 a, int b);

u32 uniteRequestScriptEntry(int value)
{
    UniteWork *obj = g_unite;

    if (g_unite != NULL) {
        if (g_unite->menu.active != 0) {
            g_unite->scriptIV.pendingRequest = value;
        } else {
            if (scrScriptProcessStartEntry(g_unite->menu.scriptProcess, value) != 0) {
                if (((!(value == 7 || value == 8)) && (!(value == 9 || value == 10))) &&
                    (!(value == 0xb || value == 0xd))) {
                    if (value == 0xc) {
                        gameGlobalsSetSubScreenActive(1);
                    }
                } else {
                    gameGlobalsSetSubScreenActive(1);
                    buttonHelpSetPreset(0x9e);
                }
                obj->scriptIV.pendingRequest = 0xffffffff;
                obj->request = value;
                obj->menu.active = 1;
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
