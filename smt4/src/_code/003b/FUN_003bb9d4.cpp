#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

typedef struct Panel {
    /* 0x00 */ u8 unk00[0xd];
    /* 0x0D */ u8 shown;
    /* 0x0E */ u8 unk0e[0x66];
    /* 0x74 */ u8 button[0x10];  /* sub-object set up by FUN_00233670 */
    /* 0x84 */ u8 buttonShown;
    /* 0x85 */ u8 unk85[0x4a7];
    /* 0x52C */ u32 unk52c;
} Panel;

int FUN_00233670(void *button, int a, int b, int c);
int FUN_00233730(Panel *panel, int a, u32 b, int c, int d, int e);

void FUN_003bb9d4(Panel *panel)
{
    FUN_00233730(panel, 10, panel->unk52c, 0, 1, 1);
    asdDebugHookPtrInt(panel, 1);
    panel->shown = 1;
    FUN_00233670(panel->button, 0x2a, 5, 10);
    panel->buttonShown = 1;
}

} /* extern "C" */
