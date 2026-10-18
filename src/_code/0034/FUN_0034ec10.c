/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034ec10` (_code @ 0x34ec10, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */
extern unsigned int DAT_0044d110; /* 0x44d110 */
extern unsigned int DAT_0044d114; /* 0x44d114 */
extern unsigned int DAT_00471b58; /* 0x471b58 */
extern int DAT_004c40f8; /* 0x4c40f8 */
extern unsigned int DAT_004c40fc; /* 0x4c40fc */
extern int DAT_004c4100; /* 0x4c4100 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_0015a4e8. */
/* Supplied declaration required: FUN_002a8554. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_0034ec10(unsigned int param_1)

{
/* irregular: irregular input(s): in_lr; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  unsigned int *puVar4;
  unsigned int in_lr;
  unsigned char temp_v3;
  
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < DAT_0044d10c) {
    FUN_002c38a4(&DAT_004c40f8);
    puVar4 = (unsigned int *)(DAT_0044d100 + param_1 * 0x70);
    FUN_0015a4e8(*puVar4,1);
    temp_v0 = DAT_0044d114;
    if ((DAT_0044d110 >= 0x80000000) || (DAT_0044d114 >= 0x80000000)) {
      if (DAT_0044d114 < DAT_0044d110) {
        do {
          if (*(unsigned int **)((temp_v0 & 0x3f) * 0xc + 0x4c4104) == puVar4) {
            *(unsigned int *)((temp_v0 & 0x3f) * 0xc + 0x4c4104) = 0;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < DAT_0044d110);
      }
    }
    else {
      temp_v2 = 1;
      temp_v1 = DAT_0044d114;
      if ((int)((DAT_0044d110 - DAT_0044d114) + 1) >= 2) {
        do {
          if (*(unsigned int **)((temp_v1 & 0x3f) * 0xc + 0x4c4104) == puVar4) {
            *(unsigned int *)((temp_v1 & 0x3f) * 0xc + 0x4c4104) = 0;
          }
          temp_v2 = temp_v2 + 1;
          temp_v1 = temp_v1 + 1;
        } while (temp_v2 < (int)((DAT_0044d110 - temp_v0) + 1));
      }
    }
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    DAT_004c4100 = DAT_004c4100 - 1;
    if (DAT_004c4100 == 0) {
      DAT_004c40fc = 0;
      do {
        temp_v2 = -DAT_004c40f8;
        temp_v3 = (unsigned char)hasExclusiveAccess(0x4c40f8);
      } while (!temp_v3);
      temp_v3 = DAT_004c40f8 != -1;
      DAT_004c40f8 = temp_v2;
      if (temp_v3 && 0 < temp_v2) {
        FUN_002a8554(DAT_00471b58,&DAT_004c40f8,0,1,0,0,unaff_r4,in_lr);
      }
      return;
    }
    return;
  }
  return;
}
