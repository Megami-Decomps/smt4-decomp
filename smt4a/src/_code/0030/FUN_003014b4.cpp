#include "common.h"
struct Work { u32 unk00; u32 values[14]; };
/* Clears all fourteen work entries. */
extern "C" void FUN_003014b4(Work *work) {
    for (u32 index = 0; index < 14; ++index) work->values[index] = 0;
}
