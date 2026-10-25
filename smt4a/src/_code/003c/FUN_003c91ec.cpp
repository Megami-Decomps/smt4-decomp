/* NON_MATCHING: the scheduling of one literal-pool load differs (retail loads 0x2A71C into r2 before the r1 load of the third snapshot). */
/* Releases the saved-state buffers: copies them back to their owners, re-arms the pending requests, then frees the buffers. */
#include "common.h"

extern "C" {

typedef struct SavedState {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 requestA;
    /* 0x03 */ u8 requestB;
    /* 0x04 */ u8 requestC;
    /* 0x05 */ u8 requestD;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ void *snapshotA; /* 0x80 bytes */
    /* 0x0C */ void *snapshotB;
    /* 0x10 */ void *snapshotC; /* 0x2A71C bytes */
} SavedState;

extern SavedState g_saveLoadUIBase;
extern u32 g_aocSystem;

void *gameDataBlocksGetTable(void);
void *configGetSettings(void);
void *gameDataBlocksGetSaveData(void);
void __aeabi_memcpy4(void *dest, const void *src, u32 size);
void wordPairCopy(void *dest, void *src);
void FUN_00358cbc(void);
void titleConfigApply(void);
void FUN_0046bd44(u32 system);
int gameFlagIsSet(int id);
void gameFlagSetValue(int id, int a, int b);
void asdMemFree(void *ptr);

void FUN_003c91ec(void)
{
    if (g_saveLoadUIBase.snapshotA != NULL) {
        __aeabi_memcpy4(gameDataBlocksGetTable(), g_saveLoadUIBase.snapshotA, 0x80);
        wordPairCopy(configGetSettings(), g_saveLoadUIBase.snapshotB);
        __aeabi_memcpy4(gameDataBlocksGetSaveData(), g_saveLoadUIBase.snapshotC, 0x2a71c);
        FUN_00358cbc();
        titleConfigApply();
        FUN_0046bd44(g_aocSystem);
        if (g_saveLoadUIBase.requestA && gameFlagIsSet(0x470) == 0) {
            gameFlagSetValue(0x470, 1, 1);
        }
        if (g_saveLoadUIBase.requestB && gameFlagIsSet(0x471) == 0) {
            gameFlagSetValue(0x471, 1, 1);
        }
        if (g_saveLoadUIBase.requestC && gameFlagIsSet(0x558) == 0) {
            gameFlagSetValue(0x558, 1, 1);
        }
        if (g_saveLoadUIBase.requestD && gameFlagIsSet(0x559) == 0) {
            gameFlagSetValue(0x559, 1, 1);
        }
        asdMemFree(g_saveLoadUIBase.snapshotA);
        asdMemFree(g_saveLoadUIBase.snapshotB);
        asdMemFree(g_saveLoadUIBase.snapshotC);
        g_saveLoadUIBase.snapshotA = NULL;
        g_saveLoadUIBase.snapshotB = NULL;
        g_saveLoadUIBase.snapshotC = NULL;
    }
}

}
