/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a894` (_code @ 0x13a894, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013df74(unsigned char *, int, int);
int asdSoundHandleListAdd(...);
int asdSoundSlotBCreate(...);
int asdSoundGetStringBlock(void);
int asdSoundSlotAActivate(int);
int FUN_00142b84(int);
int FUN_00154890(int);
int rt_aeabi_memclr(unsigned int *, int);

extern unsigned char LAB_0013a940; /* 0x13a940 */
extern unsigned char LAB_001db000; /* 0x1db000 */
extern unsigned char LAB_002eb000; /* 0x2eb000 */
extern unsigned int DAT_00588fb0; /* 0x588fb0 */
extern unsigned int DAT_0061951c; /* 0x61951c */
extern unsigned int DAT_0061953c; /* 0x61953c */

/* Supplied declaration required: FUN_0013df74. */
/* Supplied declaration required: asdSoundHandleListAdd. */
/* Supplied declaration required: asdSoundSlotBCreate. */
/* Supplied declaration required: asdSoundGetStringBlock. */
/* Supplied declaration required: asdSoundSlotAActivate. */
/* Supplied declaration required: FUN_00142b84. */
/* Supplied declaration required: FUN_00154890. */
extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: rt_aeabi_memclr. */


void FUN_0013a894(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    FUN_00142b84(0);
    FUN_0013df74(&LAB_0013a940,1,0);
    asdSoundGetStringBlock();
    asdSoundHandleListAdd(0,1);
    asdSoundHandleListAdd(1);
    asdSoundSlotBCreate(0,0xaa000);
    asdSoundSlotBCreate(1,&LAB_001db000);
    asdSoundSlotBCreate(3,&LAB_002eb000);
    asdSoundSlotAActivate(0);
    FUN_00154890(0);
    rt_aeabi_memclr(&DAT_0061951c,0x40);
    DAT_00588fb0 = 0;
    DAT_0061951c = 0;
    DAT_0061953c = 1;
  }
  return;
}

} /* extern "C" */
