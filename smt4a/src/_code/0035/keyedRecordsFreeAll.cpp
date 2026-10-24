#include "common.h"

extern "C" {

/* A 0x148-byte keyed record; only its two owned allocations and their sizes are named. */
typedef struct KeyedRecordBuffers {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u32 sizeA;
    /* 0x024 */ void *bufferA;
    /* 0x028 */ u32 sizeB;
    /* 0x02C */ u8 unk02C[0x110];
    /* 0x13C */ void *bufferB;
    /* 0x140 */ u8 unk140[8];
} KeyedRecordBuffers;

void asdMemFree(void *block);
void sysMemClear(void *destination, s32 size);

extern s32 g_keyedRecordCount; /* 0x5702f8 */
extern KeyedRecordBuffers g_keyedRecords[]; /* 0x5c6000 */

/* Frees the buffers of every keyed record and clears the table. */
void keyedRecordsFreeAll(void)
{
    for (s32 i = 0; i < g_keyedRecordCount; i++) {
        if (g_keyedRecords[i].bufferB != NULL) {
            asdMemFree(g_keyedRecords[i].bufferB);
            g_keyedRecords[i].bufferB = NULL;
            g_keyedRecords[i].sizeB = 0;
        }
        if (g_keyedRecords[i].bufferA != NULL) {
            asdMemFree(g_keyedRecords[i].bufferA);
            g_keyedRecords[i].bufferA = NULL;
            g_keyedRecords[i].sizeA = 0;
        }
    }
    sysMemClear(g_keyedRecords, 0x5200);
    g_keyedRecordCount = 0;
}

} /* extern "C" */
