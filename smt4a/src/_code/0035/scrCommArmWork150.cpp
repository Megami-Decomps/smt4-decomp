#include "shard/Shard0035.h"

extern "C" {

extern u16 scrGetArg(s32 index);

/* Script command: arms the work area with argument 0. */
u32 scrCommArmWork150(Work150Owner *owner)
{
    Work150 *work = owner->work;

    work->unk164 = scrGetArg(0);
    work->unk150 = 10;
    work->unk154 = 3;
    return 1;
}

} /* extern "C" */
