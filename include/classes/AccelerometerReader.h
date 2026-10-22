#ifndef CLASSES_ACCELEROMETER_READER_H
#define CLASSES_ACCELEROMETER_READER_H

#include "common.h"

namespace nn { namespace hid { namespace CTR {
class AccelerometerReader {
public:
    AccelerometerReader(void *sharedMemory);
    ~AccelerometerReader();
    /* 0x00 */ void *sharedMemory;
    /* 0x04 */ u16 position;
    /* 0x06 */ u16 capacity;
    /* 0x08 */ u16 samples[6];
    /* 0x14 */ u8 unk14[0x34];
    /* 0x48 */ u8 active;
    /* 0x49 */ u8 pending;
    /* 0x4a */ u8 unk4a[2];
    /* 0x4c */ s32 handles[3];
};
}}}

#endif
