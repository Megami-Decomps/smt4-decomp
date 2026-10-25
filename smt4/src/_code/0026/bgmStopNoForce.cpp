#include "common.h"
#include "result/WhisperEffect.h"

extern "C" {

int bgmStop(u32 a, u32 b, int c);

void bgmStopNoForce(u32 a, u32 b)
{
    bgmStop(a, b, 0);
}

} /* extern "C" */
