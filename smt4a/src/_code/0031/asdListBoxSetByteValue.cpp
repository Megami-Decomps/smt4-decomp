#include "shard/Shard0031.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "shard/JobWork.h"

extern "C" {

extern void asdListBoxMarkDirty(u32 listBox);

void asdListBoxSetByteValue(u32 listBox, u8 value)
{
    ListBoxWork *work = (ListBoxWork *)jobGetWork(listBox);

    asdListBoxMarkDirty(listBox);
    work->unk3D = value;
    work->unk40 = 2;
}

} /* extern "C" */
