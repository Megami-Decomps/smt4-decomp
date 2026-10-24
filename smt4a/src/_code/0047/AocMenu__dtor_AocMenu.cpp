#include "shard/Shard0047.h"

extern "C" {

extern s32 _ZN9Obj422594D1Ev(s32 address);
extern s32 _ZN9Obj55ca08D1Ev(s32 address);

s32 _ZN7AocMenuD1Ev(s32 base)
{
    s32 value = _ZN9Obj422594D1Ev(base + 0x2E8);

    value = _ZN9Obj55ca08D1Ev(value - 0x34);
    return value - 0x2B4;
}

} /* extern "C" */
