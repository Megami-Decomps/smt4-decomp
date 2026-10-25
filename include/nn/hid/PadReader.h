#ifndef NN_HID_PADREADER_H
#define NN_HID_PADREADER_H
#include "input/PadAnalog.h"
#include "nn/hid/AnalogStickClamper.h"

namespace nn { namespace hid { namespace CTR {
class PadReader {
public:
    explicit PadReader(void *sharedMemory);
    ~PadReader();

    /* 0x00 */ void *sharedMemory;
    /* 0x04 */ s32 index;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ AnalogStickClamper clamper;
    /* 0x30 */ u8 active;
    /* 0x31 */ u8 unk31[7];
    /* 0x38 */ u32 lastRead;
    /* 0x3C */ u32 lastSample;
};
// The established calibration prefix is a view of the reader, including its embedded clamper.
typedef char PadReaderLayoutCheck[sizeof(PadAnalogCalibration) == 0x1a && sizeof(PadReader) == 0x40 &&
    offsetof(PadReader, clamper) == 0xc &&
    offsetof(PadReader, clamper) + offsetof(AnalogStickClamper, minimum) == offsetof(PadAnalogCalibration, minimum) &&
    offsetof(PadReader, clamper) + offsetof(AnalogStickClamper, maximum) == offsetof(PadAnalogCalibration, maximum) &&
    offsetof(PadReader, clamper) + offsetof(AnalogStickClamper, mode) == offsetof(PadAnalogCalibration, mode) &&
    offsetof(PadReader, active) == 0x30 && offsetof(PadReader, lastRead) == 0x38 &&
    offsetof(PadReader, lastSample) == 0x3c ? 1 : -1];
}}}
#endif
