/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b23cc` (_code @ 0x1b23cc, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001b1aa8; /* 0x1b1aa8 */
extern unsigned char LAB_001b95b0; /* 0x1b95b0 */
extern unsigned char LAB_001b95c4; /* 0x1b95c4 */
extern unsigned char DAT_0055c30c; /* 0x55c30c */
extern unsigned char DAT_0055c340; /* 0x55c340 */
extern unsigned char DAT_0055c354; /* 0x55c354 */

extern unsigned int *FUN_001b9b28(void);
/* Supplied declaration required: FUN_002f5020. */


void FUN_001b23cc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_001b9b28();
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0;
  puVar1[0x11] = (unsigned int)&DAT_0055c340;
  puVar1[0x14] = (unsigned int)&DAT_0055c354;
  *puVar1 = (unsigned int)&DAT_0055c30c;
  puVar1[0x16] = 0;
  *(unsigned short *)((int)puVar1 + 0x7a) = 0;
  *(unsigned short *)(puVar1 + 0x1f) = 0;
  *(unsigned char *)(puVar1 + 0x1e) = 0x7f;
  *(unsigned char *)((int)puVar1 + 0x79) = 0x7f;
  puVar1 = puVar1 + 0x3d;
  FUN_002f5020(puVar1,&LAB_001b95c4,0x10,4);
  puVar1 = puVar1 + 0x10;
  FUN_002f5020(puVar1,&LAB_001b95b0,0xc,4);
  *(unsigned char *)((int)puVar1 + 0x31) = 0;
  *(unsigned char *)((int)puVar1 + 0x32) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0xffffffff;
  puVar1[0x14] = 0;
  puVar1[0x16] = 0;
  puVar1 = puVar1 + 0x17;
  FUN_002f5020(puVar1,&LAB_001b1aa8,8,4);
  temp_v0 = 0;
  temp_v1 = 0;
  do {
    temp_v0 = temp_v0 + 2;
    puVar1[temp_v1 - 0x40] = 0;
    puVar1[temp_v1 - 0x3f] = 0;
    temp_v1 = temp_v1 + 2;
  } while (temp_v0 < 0x10);
  return;
}
