/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5170` (_code @ 0x3e5170, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0018416c(unsigned short);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0019e52c(unsigned short);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_004bcd90. */


void FUN_003e5170(unsigned short *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  short *psVar1;
  int temp_v0;
  unsigned short *puVar3;
  int temp_v1;
  unsigned char *pbVar5;
  short temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  
  if (param_1 == (unsigned short *)0x0) {
    return;
  }
  FUN_002e6354(param_1,300);
  temp_v0 = FUN_0019e52c(param_1[0x96]);
  temp_v3 = param_2 == 0;
  if (temp_v3) {
    param_2 = temp_v0;
  }
  if (!temp_v3 || param_2 != 0) {
    param_1[0x31] = (short)param_2;
    FUN_00184310();
    param_1[0x32] = *(unsigned short *)(param_2 + 6);
    *param_1 = *(unsigned short *)(param_2 + 0x18);
    param_1[1] = *(unsigned short *)(param_2 + 0x1a);
    param_1[2] = *(unsigned short *)(param_2 + 0x1e);
    param_1[4] = *(unsigned short *)(param_2 + 0x22);
    param_1[5] = *(unsigned short *)(param_2 + 0x24);
    param_1[6] = *(unsigned short *)(param_2 + 0x26);
    param_1[3] = *(unsigned short *)(param_2 + 0x20);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = *(unsigned short *)(param_2 + 0x1e);
    param_1[0x12] = *(unsigned short *)(param_2 + 0x22);
    param_1[0x13] = *(unsigned short *)(param_2 + 0x24);
    param_1[0x14] = *(unsigned short *)(param_2 + 0x26);
    param_1[0x11] = *(unsigned short *)(param_2 + 0x20);
    param_1[0x1a] = *(unsigned short *)(param_2 + 0x40);
    param_1[0x1b] = *(unsigned short *)(param_2 + 0x42);
    param_1[0x1c] = *(unsigned short *)(param_2 + 0x44);
    param_1[0x1d] = *(unsigned short *)(param_2 + 0x46);
    param_1[0x1e] = *(unsigned short *)(param_2 + 0x48);
    param_1[0x1f] = *(unsigned short *)(param_2 + 0x4a);
    param_1[0x20] = *(unsigned short *)(param_2 + 0x4c);
    param_1[0x21] = *(unsigned short *)(param_2 + 0x4e);
    FUN_004bcd90(param_1);
    temp_v2 = param_1[7];
    temp_v0 = FUN_0018416c(param_1[0x31]);
    if (temp_v0 != 0) {
      temp_v4 = (float)VectorSignedToFloat((int)temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = (short)(int)(temp_v4 * 1.25f);
    }
    param_1[0x15] = temp_v2;
    param_1[0x16] = param_1[8];
    temp_v0 = DAT_0057f69c;
    temp_v1 = 0;
    do {
      puVar3 = param_1 + temp_v1;
      psVar1 = (short *)(puVar3 + 0x1a);
      if (*psVar1 != 0) {
        puVar3 = (unsigned short *)(int)(short)puVar3[0x1a];
      }
      if ((*psVar1 != 0 && puVar3 != (unsigned short *)0x0) && (puVar3 < (unsigned short *)0x1f5)) {
        pbVar5 = (unsigned char *)(temp_v0 + ((int)((int)puVar3 + ((unsigned int)((int)puVar3 >> 0x1f) >> 0x1d)) >> 3)
                         + 0x27ed8);
        *pbVar5 = *pbVar5 | (unsigned char)(1 << (((int)puVar3 % 8) & 0xffU));
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 8);
    return;
  }
  return;
}
