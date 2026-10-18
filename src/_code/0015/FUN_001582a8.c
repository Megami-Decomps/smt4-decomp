/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001582a8` (_code @ 0x1582a8, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern short DAT_00473540; /* 0x473540 */

/* Supplied declaration required: FUN_0015beb4. */
extern unsigned int FUN_002bb360(void);


unsigned int FUN_001582a8(int param_1,unsigned int *param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  *(unsigned int **)(param_1 + 0x60) = param_2;
  *(unsigned char *)(param_1 + 0x74) = param_3;
  *(unsigned int *)(param_1 + 0x78) = param_4;
  *(unsigned char *)(param_1 + 0x56) = 0;
  *(unsigned char *)(param_1 + 0xc) = 1;
  *(short *)(param_1 + 0x1c58) = DAT_00473540;
  DAT_00473540 = DAT_00473540 + 1;
  param_2[4] = param_1;
  param_2[6] = param_1 + 0x7c;
  *(unsigned char *)(param_2 + 7) = *(unsigned char *)(param_1 + 0xc4);
  param_2[8] = *(unsigned int *)(param_1 + 0xd0);
  *(unsigned char *)(param_2 + 9) = *(unsigned char *)(param_1 + 0xc5);
  param_2[10] = *(unsigned int *)(param_1 + 200);
  param_2[0xb] = *(unsigned int *)(param_1 + 0xcc);
  *(unsigned short *)(param_2 + 0xc) = *(unsigned short *)(param_1 + 0x1c58);
  *param_2 = param_2[5];
  param_2[0x14] = 0;
  param_2[0x1f] = (unsigned int)param_2;
  param_2[0x1e] = (unsigned int)param_2;
  temp_v0 = FUN_002bb360();
  FUN_0015beb4(temp_v0,param_2 + 0x18,1);
  return 1;
}
