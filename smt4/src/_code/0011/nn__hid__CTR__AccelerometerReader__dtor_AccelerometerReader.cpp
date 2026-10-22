#include "classes/AccelerometerReader.h"

extern "C" int FUN_00128cd8(void *);

nn::hid::CTR::AccelerometerReader::~AccelerometerReader()
{
    FUN_00128cd8(this);
}
