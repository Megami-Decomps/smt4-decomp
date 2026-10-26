#include "ui/ButtonHelp.h"
#include "code/Code0026.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

int asdTextDrawDirectoryEntry(u32 a, int b, u32 c, int d, int e, int f, u32 g);

void FUN_0026f188(int mode, u32 arg)
{
    ButtonHelpWork *obj = g_buttonHelp.work;

    g_buttonHelp.work->unk55C = 1;
    obj->unk4CB = 1;
    if (mode != 0) {
        asdTextDrawDirectoryEntry(obj->unk558, 3, 0xffffffff, 0, 3, mode, arg);
        return;
    }
    obj->unk4CB = 0;
    obj->unk55C = 0;
    obj->unk558 = 0;
}

} /* extern "C" */
