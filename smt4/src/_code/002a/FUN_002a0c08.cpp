#include "common.h"

extern "C" {

int FUN_002a0cc8(int arg);
int buttonHelpSetPreset(int arg);
extern int scrScriptProcessStartEntry(u32 a, int b);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x42C];
    /* 0x42C */ u32 unk42C;
    /* 0x430 */ u8 active;
    /* 0x431 */ u8 unk431[3];
    /* 0x434 */ int unk434;
    /* 0x438 */ u8 unk438[0x40];
    /* 0x478 */ int unk478;
} Obj;

extern Obj *g_unite;

u32 FUN_002a0c08(int value)
{
    Obj *obj = g_unite;

    if (g_unite != NULL) {
        if (g_unite->active != 0) {
            g_unite->unk478 = value;
        } else {
            if (scrScriptProcessStartEntry(g_unite->unk42C, value) != 0) {
                if (((!(value == 7 || value == 8)) && (!(value == 9 || value == 10))) &&
                    (!(value == 0xb || value == 0xd))) {
                    if (value == 0xc) {
                        FUN_002a0cc8(1);
                    }
                } else {
                    FUN_002a0cc8(1);
                    buttonHelpSetPreset(0x9e);
                }
                obj->unk478 = 0xffffffff;
                obj->unk434 = value;
                obj->active = 1;
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
