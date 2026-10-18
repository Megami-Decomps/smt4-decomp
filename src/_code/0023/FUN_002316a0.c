/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002316a0` (_code @ 0x2316a0, 0x1dc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern short *FUN_002473d8(unsigned int *, int);
/* Supplied declaration required: FUN_00247414. */
extern int FUN_0024f7a8(int);
/* Supplied declaration required: FUN_0024f7e8. */
extern int FUN_002aeb2c(unsigned int);
extern int FUN_002c1de4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5ab8. */
/* Supplied declaration required: FUN_0039d8b8. */


void FUN_002316a0(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  short *psVar5;
  int temp_v3;
  int temp_v4;
  int uStack_20;
  
  temp_v2 = param_1;
  uStack_20 = param_4;
  if (*(int *)(param_1 + 0xb7c) != 0) {
    temp_v2 = FUN_002aeb2c(0x33);
    *(unsigned int *)(param_1 + 0xb7c) = 0;
  }
  temp_v3 = 0;
  FUN_0024f7e8();
  if (0 < temp_v2) {
    do {
      temp_v2 = FUN_0024f7a8(temp_v3);
      if (*(short *)(temp_v2 + 0x20) == -1) break;
      if (*(short *)(temp_v2 + 0x20) == param_2) {
        *(int *)(param_1 + 0xb7c) = *(short *)(temp_v2 + 0x2a) + 1;
        break;
      }
      temp_v3 = temp_v3 + 1;
      FUN_0024f7e8();
    } while (temp_v3 < temp_v2);
  }
  FUN_002c5ab8(0x33,*(unsigned int *)(param_1 + 0xb7c));
  temp_v2 = FUN_002c1de4(0x33,*(unsigned int *)(param_1 + 0xb7c));
  temp_v3 = 0;
  temp_v4 = 0x20;
  *(unsigned int *)(temp_v2 + 0x3c) = 1;
  do {
    temp_v2 = param_1 + temp_v3 * 8;
    temp_v4 = temp_v4 - 1;
    *(unsigned int *)(temp_v2 + 0xb88) = 0;
    *(unsigned int *)(temp_v2 + 0xb8c) = 0;
    *(unsigned int *)(temp_v2 + 0xc88) = 0;
    *(unsigned int *)(temp_v2 + 0xc8c) = 0;
    *(unsigned int *)(temp_v2 + 0xd88) = 0;
    temp_v3 = temp_v3 + 1;
    *(unsigned int *)(temp_v2 + 0xd8c) = 0;
  } while (temp_v4 != 0);
  puVar4 = (unsigned int *)&uStack_20;
  FUN_00247414();
  temp_v2 = 0;
  if (temp_v2 < (int)puVar4) {
    do {
      psVar5 = (short *)FUN_002473d8((unsigned int *)&uStack_20,temp_v2);
      if (*psVar5 == param_2) {
        *(int *)(param_1 + psVar5[1] * 8 + 0xb88) = (int)psVar5[6] + (int)psVar5[8];
        *(int *)(param_1 + psVar5[1] * 8 + 0xb8c) = (int)psVar5[7] + (int)psVar5[9];
        temp_v0 = *(char *)((int)psVar5 + 9);
        temp_v1 = *(char *)((int)psVar5 + 7);
        *(int *)(param_1 + psVar5[1] * 8 + 0xc88) =
             (int)psVar5[6] + (((int)(char)psVar5[4] - (int)(char)psVar5[3]) * 0xc) / 2;
        *(int *)(param_1 + psVar5[1] * 8 + 0xc8c) =
             (int)psVar5[7] + (((int)temp_v0 - (int)temp_v1) * 0xc) / 2;
        *(int *)(param_1 + psVar5[1] * 8 + 0xd88) = (int)(char)psVar5[3];
        *(int *)(param_1 + psVar5[1] * 8 + 0xd8c) = (int)*(char *)((int)psVar5 + 7);
      }
      temp_v2 = temp_v2 + 1;
      puVar4 = (unsigned int *)&uStack_20;
      FUN_00247414();
    } while (temp_v2 < (int)puVar4);
  }
  FUN_0039d8b8(param_1,param_2);
  *(unsigned char *)(param_1 + 0x5a8d) = 1;
  return;
}
