#include "classes/AccelerometerReader.h"

extern "C" int nn_hid_DisableAccelerometer(void *);

nn::hid::CTR::AccelerometerReader::~AccelerometerReader()
{
    nn_hid_DisableAccelerometer(this);
}
