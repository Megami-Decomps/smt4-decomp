#include "common.h"

struct IpcPair {
    u32 unk00;
    u32 first;
    u32 second;
};

extern "C" {
extern IpcPair DAT_00465630;

void FUN_0012a730(u32 first, u32 second)
{
    DAT_00465630.first = first;
    DAT_00465630.second = second;
}
}
