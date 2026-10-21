#include "common.h"

extern "C" {

struct RangeRequestWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 first;
    /* 0x06 */ u16 second;
    /* 0x08 */ u16 firstCounter;
    /* 0x0A */ u16 secondCounter;
};
extern RangeRequestWork *g_mapRangeWork;

/* Set both range values and clear their counters. */
void mapRangeStartRequest(u16 first, u16 second)
{
    g_mapRangeWork->firstCounter = 0;
    g_mapRangeWork->secondCounter = 0;
    g_mapRangeWork->first = first;
    g_mapRangeWork->second = second;
}

}
