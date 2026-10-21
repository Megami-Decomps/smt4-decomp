#include "common.h"
extern "C" {
extern struct {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 first;
    /* 0x06 */ u16 second;
    /* 0x08 */ u16 progress;
    /* 0x0A */ u16 count;
} *g_mapHakai;
/* Begins a map destruction operation and clears its progress counters. */
void mapHakaiBegin(u16 first, u16 second)
{
    g_mapHakai->progress = 0;
    g_mapHakai->count = 0;
    g_mapHakai->first = first;
    g_mapHakai->second = second;
}
}
