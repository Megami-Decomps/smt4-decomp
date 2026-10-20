#include "common.h"

extern "C" {

/* Global object with two sub-objects: one at 0x68 and one at 0x206bc. */
typedef struct {
    u8 unk000[0x68];
    u8 panel[0x20654];  /* 0x68 */
    u8 slider[1];       /* 0x206bc */
} Hud;

extern Hud *DAT_00587f28;

int FUN_00487110(u8 *panel);
int FUN_0048a378(u8 *panel);
int FUN_004cf978(u8 *slider, int value);

/* Updates the HUD slider with the low byte of `value` (sign-extended) and refreshes the panel, running the extra panel update when `extra` is set. */
void FUN_002758b0(int extra, int value)
{
    Hud *hud = DAT_00587f28;

    if (hud != NULL) {
        FUN_004cf978(hud->slider, (s8)value);
        FUN_00487110(hud->panel);
        if (extra != 0) {
            FUN_0048a378(hud->panel);
        }
    }
}

} /* extern "C" */
