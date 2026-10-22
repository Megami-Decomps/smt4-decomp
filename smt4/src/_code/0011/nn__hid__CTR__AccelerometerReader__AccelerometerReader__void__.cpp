/* NON_MATCHING: The six sample clears combine into word stores; retail clears each halfword and groups the three handle stores. */
#include "classes/AccelerometerReader.h"

extern "C" int FUN_001287e4(void *);
extern "C" int FUN_0012888c(void *, u8[8], u8[4], int);
extern "C" int FUN_00128ca8(void);

nn::hid::CTR::AccelerometerReader::AccelerometerReader(void *memory)
{
    u8 first[8];
    u8 second[4];
    sharedMemory = memory;
    position = 0;
    capacity = 0x80;
    active = 0;
    pending = 0;
    handles[0] = -1;
    handles[1] = -1;
    handles[2] = -1;
    FUN_00128ca8();
    for (u32 index = 0; index < 6; ++index) {
        samples[index] = 0;
    }
    FUN_001287e4(this);
    active = 0;
    pending = 0;
    FUN_0012888c(this, first, second, 1);
}
