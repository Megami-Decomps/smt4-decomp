#include "shard/Shard0031.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {

extern ListBoxWork *jobGetWork(u32 job);
extern void asdListBoxMarkDirty(u32 listBox);

void asdListBoxSetByteValue(u32 listBox, u8 value)
{
    ListBoxWork *work = jobGetWork(listBox);

    asdListBoxMarkDirty(listBox);
    work->unk3D = value;
    work->unk40 = 2;
}

} /* extern "C" */
