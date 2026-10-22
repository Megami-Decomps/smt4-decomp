#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {

int FUN_002a0cc8(int arg);
int buttonHelpSetPreset(int arg);
extern int scrScriptProcessStartEntry(u32 a, int b);


extern UniteWorkIV *g_unite;

u32 uniteRequestScriptEntry(int value)
{
    UniteWorkIV *obj = g_unite;

    if (g_unite != NULL) {
        if (g_unite->common.menu.active != 0) {
            g_unite->common.scriptIV.pendingRequest = value;
        } else {
            if (scrScriptProcessStartEntry(g_unite->common.menu.scriptProcess, value) != 0) {
                if (((!(value == 7 || value == 8)) && (!(value == 9 || value == 10))) &&
                    (!(value == 0xb || value == 0xd))) {
                    if (value == 0xc) {
                        FUN_002a0cc8(1);
                    }
                } else {
                    FUN_002a0cc8(1);
                    buttonHelpSetPreset(0x9e);
                }
                obj->common.scriptIV.pendingRequest = 0xffffffff;
                obj->common.request = value;
                obj->common.menu.active = 1;
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
