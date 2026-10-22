#include "shard/Shard0035.h"
#include "ui/MessageMain.h"

extern "C" {

extern u16 scrGetArg(s32 index);
extern MessageGlobalsA g_messageMain;

/* Script command: arms the work area with argument 0. */
u32 scrCommArmWork150(void)
{
    Work150 *work = reinterpret_cast<Work150 *>(g_messageMain.panel);

    work->unk164 = scrGetArg(0);
    work->unk150 = 10;
    work->unk154 = 3;
    return 1;
}

} /* extern "C" */
