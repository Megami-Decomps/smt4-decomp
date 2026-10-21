#include "common.h"
extern "C" {
extern struct {
    u8 unk00[6]; u16 first, second, progress, count; u8 unk0E[2];
    u32 value; u8 active; u8 unk15[7]; u8 pending; u8 unk1D[3];
    s32 owner; u8 ownerActive; u8 unk25[3]; s32 target; u8 targetActive; u8 unk2D[3];
    s32 selection; u8 flags[10]; u8 unk3E[2]; s32 handles[10]; u8 unk68[0x18]; u32 status;
} *g_mapGimic;
void FUN_003b51a4(void);
/* Starts map gimmick processing with empty handles and zero progress. */
void FUN_002d7e6c(u16 first, u16 second)
{
    g_mapGimic->progress = 0;
    g_mapGimic->count = 0;
    g_mapGimic->first = first;
    g_mapGimic->second = second;
    g_mapGimic->value = 0;
    g_mapGimic->active = 0;
    g_mapGimic->pending = 0;
    g_mapGimic->owner = -1;
    g_mapGimic->ownerActive = 0;
    g_mapGimic->target = -1;
    g_mapGimic->targetActive = 0;
    g_mapGimic->status = 0;
    g_mapGimic->selection = -1;
    for (u32 index = 0; index < 10; ++index) {
        g_mapGimic->flags[index] = 0;
        g_mapGimic->handles[index] = -1;
    }
    FUN_003b51a4();
}
}
