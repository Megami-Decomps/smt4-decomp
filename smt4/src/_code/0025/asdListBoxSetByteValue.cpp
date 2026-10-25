#include "common.h"
#include "shard/JobWork.h"

extern "C" {

int asdListBoxMarkDirty(u32 listBox);

typedef struct ListBoxByteWork {
    /* 0x00 */ u8 unk00[0x3D];
    /* 0x3D */ u8 unk3D;
    /* 0x3E */ u8 unk3E[2];
    /* 0x40 */ u32 unk40;
} ListBoxByteWork;


void asdListBoxSetByteValue(u32 listBox, u8 value)
{
    ListBoxByteWork *work = (ListBoxByteWork *)jobGetWork(listBox);

    asdListBoxMarkDirty(listBox);
    work->unk3D = value;
    work->unk40 = 2;
}

} /* extern "C" */
