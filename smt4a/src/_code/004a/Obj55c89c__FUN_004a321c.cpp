#include "common.h"
#include "classes/Obj55c89c.h"

struct WordPair {
    s32 first;
    s32 second;
};

struct StartedTimer {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 active;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ WordPair range;
};

extern "C" {

/* Virtual start: marks the object active and sets its pair to 15 and 0. */
}

void Obj55c89c::FUN_004a321c()
{
    StartedTimer * self = reinterpret_cast<StartedTimer *>(this);
    self->active = 1;
    self->range.first = 15;
    self->range.second = 0;
}
