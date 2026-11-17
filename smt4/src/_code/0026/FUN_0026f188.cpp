#include "ui/ButtonHelpGlobal.h"
#include "code/Code0026.h"

extern "C" {

int asdTextDrawDirectoryEntry(u32 a, int b, u32 c, int d, int e, int f, u32 g);

void FUN_0026f188(int mode, u32 arg)
{
    ButtonHelpWork *obj = g_buttonHelp.work;

    g_buttonHelp.work->text.useDirectoryText = 1;
    obj->textVisible = 1;
    if (mode != 0) {
        asdTextDrawDirectoryEntry(obj->text.directoryText, 3, 0xffffffff, 0, 3, mode, arg);
        return;
    }
    obj->textVisible = 0;
    obj->text.useDirectoryText = 0;
    obj->text.directoryText = 0;
}

} /* extern "C" */
