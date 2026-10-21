#include "common.h"
extern "C" {
struct MapPendingEntry { u8 active; u8 unk01[2]; u8 pending; u16 first; u8 unk06[2]; u16 second; u8 unk0A[10]; };
struct MapPendingEntries { u8 unk00[0xF20]; MapPendingEntry entries[16]; };
MapPendingEntries *gameGetMapBlock(void);
/* Clear all pending map-entry flags and counters. */
void mapClearPendingEntries(void) { MapPendingEntries *work=gameGetMapBlock(); for (u32 index=0;index<16;++index) { work->entries[index].active=0; work->entries[index].first=0; work->entries[index].pending=0; work->entries[index].second=0; } }
}
