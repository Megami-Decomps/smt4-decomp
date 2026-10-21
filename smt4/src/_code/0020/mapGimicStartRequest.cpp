#include "common.h"

extern "C" {

struct MapGimmickRequestWork {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 first;
    /* 0x08 */ u16 second;
    /* 0x0A */ u16 firstCounter;
    /* 0x0C */ u16 secondCounter;
    /* 0x0E */ u8 unk0E[2];
    /* 0x10 */ u32 counter;
    /* 0x14 */ u8 active;
};
extern MapGimmickRequestWork *g_mapGimic;

/* Initialize the gimmick range and clear all progress. */
void mapGimicStartRequest(u16 first, u16 second)
{
    g_mapGimic->firstCounter = 0;
    g_mapGimic->secondCounter = 0;
    g_mapGimic->first = first;
    g_mapGimic->second = second;
    g_mapGimic->counter = 0;
    g_mapGimic->active = 0;
}

}
