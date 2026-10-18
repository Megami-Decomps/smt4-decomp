/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecc3c` (_code @ 0x2ecc3c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ea668. */
/* Supplied declaration required: FUN_002ea6bc. */
/* Supplied declaration required: FUN_002ea6cc. */
/* Supplied declaration required: FUN_002ec674. */
extern unsigned int FUN_002ecaee(int);
/* Supplied declaration required: rt_memcpy. */


void FUN_002ecc3c(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [88];
  unsigned char temp_v4 [20];
  unsigned char temp_v5 [88];
  unsigned char temp_v6 [24];
  
  FUN_002ea668(temp_v3);
  FUN_002ea668(temp_v5);
  temp_v2 = *(int *)(param_2 + 0x10);
  temp_v0 = *(int *)(param_2 + 0xc);
  temp_v1 = FUN_002ecaee(param_2);
  FUN_002ea6bc(temp_v3,temp_v1,temp_v2 - temp_v0);
  temp_v2 = *(int *)(param_2 + 0x10);
  temp_v0 = *(int *)(param_2 + 0xc);
  temp_v1 = FUN_002ecaee(param_2);
  FUN_002ea6bc(temp_v5,temp_v1,temp_v2 - temp_v0);
  FUN_002ea6bc(temp_v3,param_3,8);
  FUN_002ea6bc(temp_v5,param_4,8);
  FUN_002ea6cc(temp_v3);
  FUN_002ea6cc(temp_v5);
  temp_v1 = FUN_002ec674(param_5);
  rt_memcpy(temp_v1,temp_v4,0x10);
  temp_v0 = FUN_002ec674(param_5);
  rt_memcpy(temp_v0 + 0x10,temp_v6,0x10);
  return;
}
