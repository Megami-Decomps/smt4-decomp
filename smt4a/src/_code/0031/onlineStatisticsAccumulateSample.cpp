#include "common.h"

struct OnlineSampleStatistics {
    u8 unk00[0x14];
    u32 minimum; // 0x14
    u32 maximum; // 0x18
    u32 total;   // 0x1c
    u32 count;   // 0x20
};

// Accumulate a sample and maintain the observed range.
extern "C" void onlineStatisticsAccumulateSample(OnlineSampleStatistics *statistics, u32 sample)
{
    statistics->total += sample;
    statistics->count++;
    if (sample < statistics->minimum)
        statistics->minimum = sample;
    if (statistics->maximum < sample)
        statistics->maximum = sample;
}
