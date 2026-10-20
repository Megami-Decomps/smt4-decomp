#include "shard/Shard0031.h"

extern "C" {

extern ListBoxWork *jobGetWork(u32 job);
extern void asdListBoxMarkDirty(u32 listBox);

void FUN_00317508(u32 listBox, u8 value)
{
    ListBoxWork *work = jobGetWork(listBox);

    asdListBoxMarkDirty(listBox);
    work->unk3D = value;
    work->unk40 = 2;
}

} /* extern "C" */
