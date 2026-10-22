#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMainA *g_naviMain;

/* Global object with two sub-objects: one at 0x68 and one at 0x206bc. */

int stateSetterSetState1(u8 *panel);
int FUN_0048a378(u8 *panel);
int FUN_004cf978(u8 *slider, int value);

/* Updates the HUD slider with the low byte of `value` (sign-extended) and refreshes the panel, running the extra panel update when `extra` is set. */
void naviMainUpdateSlider(int extra, int value)
{
    NaviMainA *hud = g_naviMain;

    if (hud != NULL) {
        FUN_004cf978(hud->slider, (s8)value);
        stateSetterSetState1(hud->panel);
        if (extra != 0) {
            FUN_0048a378(hud->panel);
        }
    }
}

} /* extern "C" */
