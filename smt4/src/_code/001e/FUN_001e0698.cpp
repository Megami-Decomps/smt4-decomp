#include "common.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

extern "C" {

/* The completion callback, a local label in retail. */
extern u8 LAB_0032c6c8;
#define REQUEST_CALLBACK (&LAB_0032c6c8)

int FUN_002b7bca(u32 arg0, u32 arg1, int size, u8 *callback);
u32 fileSlotLoad(u32 arg);
u32 dataTableGetCount(u32 arg);
u32 dataTableGetEntries(void);
u32 dataTableGet(u32 arg0, u32 arg1);

/* Submits the 0x60-byte request for lookup index (0x16, 0), then for (0x16, 1); returns fileSlotLoad(0x16). */
u32 FUN_001e0698(void)
{
    u32 result = fileSlotLoad(0x16);
    u32 selected;
    u32 other;

    selected = dataTableGet(0x16, 0);
    other = dataTableGetEntries();
    selected = dataTableGetCount(selected);
    FUN_002b7bca(other, selected, 0x60, REQUEST_CALLBACK);
    selected = dataTableGet(0x16, 1);
    other = dataTableGetEntries();
    selected = dataTableGetCount(selected);
    FUN_002b7bca(other, selected, 0x60, REQUEST_CALLBACK);
    return result;
}

} /* extern "C" */
