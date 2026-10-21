#include "common.h"
extern "C" {
extern struct {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 first, second, progress, count;
    /* 0x0C */ u8 unk0C[0x0C];
    /* 0x18 */ u32 value;
    /* 0x1C */ u8 unk1C[0xCC4];
    /* 0xCE0 */ u32 selection;
} *g_engineRecordList;
void sub68OwnerCall5(u32 first, u32 second, void *work);
/* Sets the selection pair and resets progress before the owner callback. */
void FUN_00314b7c(u32 first, u32 second)
{
    g_engineRecordList->progress = 0;
    g_engineRecordList->count = 0;
    g_engineRecordList->first = first;
    g_engineRecordList->second = second;
    g_engineRecordList->value = 0;
    g_engineRecordList->selection = 0;
    sub68OwnerCall5(first, second, g_engineRecordList);
}
}
