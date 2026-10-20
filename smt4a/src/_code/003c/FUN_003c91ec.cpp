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

extern SavedState DAT_00588e14;
extern u32 g_aocSystem;

void *FUN_00261458(void);
void *FUN_00228af0(void);
void *FUN_0014af84(void);
void rt_memcpy_w(void *dest, const void *src, u32 size);
void FUN_001a9110(void *dest, void *src);
void FUN_00358cbc(void);
void FUN_00138718(void);
void FUN_0046bd44(u32 system);
int FUN_0018719c(int id);
void FUN_003fd63c(int id, int a, int b);
void asdMemFree(void *ptr);

void FUN_003c91ec(void)
{
    if (DAT_00588e14.snapshotA != NULL) {
        rt_memcpy_w(FUN_00261458(), DAT_00588e14.snapshotA, 0x80);
        FUN_001a9110(FUN_00228af0(), DAT_00588e14.snapshotB);
        rt_memcpy_w(FUN_0014af84(), DAT_00588e14.snapshotC, 0x2a71c);
        FUN_00358cbc();
        FUN_00138718();
        FUN_0046bd44(g_aocSystem);
        if (DAT_00588e14.requestA && FUN_0018719c(0x470) == 0) {
            FUN_003fd63c(0x470, 1, 1);
        }
        if (DAT_00588e14.requestB && FUN_0018719c(0x471) == 0) {
            FUN_003fd63c(0x471, 1, 1);
        }
        if (DAT_00588e14.requestC && FUN_0018719c(0x558) == 0) {
            FUN_003fd63c(0x558, 1, 1);
        }
        if (DAT_00588e14.requestD && FUN_0018719c(0x559) == 0) {
            FUN_003fd63c(0x559, 1, 1);
        }
        asdMemFree(DAT_00588e14.snapshotA);
        asdMemFree(DAT_00588e14.snapshotB);
        asdMemFree(DAT_00588e14.snapshotC);
        DAT_00588e14.snapshotA = NULL;
        DAT_00588e14.snapshotB = NULL;
        DAT_00588e14.snapshotC = NULL;
    }
}

}
