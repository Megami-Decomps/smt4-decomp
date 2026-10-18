/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0384` (_code @ 0x2f0384, 0x3 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002f6c5c. */
/* Supplied declaration required: FUN_002f6c70. */
/* Supplied declaration required: FUN_002f6c82. */
/* Supplied declaration required: FUN_002f6d1c. */
extern int FUN_002f6d4c(void);


unsigned int
FUN_002f0384(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5
            ,int param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9,int param_10,
            int param_11)

{
/* irregular: irregular input(s): in_stack_0000002c, in_stack_00000044, in_stack_00000048; 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int unaff_r5;
  int temp_v2;
  int unaff_r6;
  int temp_v3;
  unsigned char uStack00000020;
  int in_stack_0000002c;
  int in_stack_00000044;
  int in_stack_00000048;
  
  temp_v1 = param_3 >> 1;
  while (unaff_r6 != 0) {
    temp_v0 = FUN_002f6c5c(param_10,unaff_r6 + 0x10);
    if (temp_v0 != 0) {
      unaff_r6 = *(int *)(unaff_r6 + 0xc);
    }
    else {
      temp_v1 = unaff_r6;
      unaff_r6 = *(int *)(unaff_r6 + 8);
    }
  }
  param_10 = unaff_r5 + 0x19;
  temp_v0 = *(int *)(*(int *)(unaff_r5 + 0x10) + 4);
  temp_v3 = *(int *)(unaff_r5 + 0x10);
  while (temp_v2 = temp_v0, temp_v2 != 0) {
    temp_v0 = FUN_002f6c5c(param_10);
    if (temp_v0 != 0) {
      temp_v0 = *(int *)(temp_v2 + 8);
      temp_v3 = temp_v2;
    }
    else {
      temp_v0 = *(int *)(temp_v2 + 0xc);
    }
  }
  *(int *)(in_stack_0000002c + 4) = temp_v3;
  param_11 = temp_v1;
  while( 1 ) {
    temp_v0 = FUN_002f6d4c();
    if (temp_v0 == 0) {
      FUN_002e6e5c(&uStack00000020);
      return 0;
    }
    if (*(int *)(temp_v1 + 0x18) == in_stack_00000048) break;
    FUN_002f6d1c();
  }
  param_6 = temp_v1;
  FUN_002f6c70(param_7,&param_6);
  FUN_002f6c82(in_stack_00000044 + 4,&in_stack_00000048);
  FUN_002e7232(in_stack_00000048);
  FUN_002e6e5c(&uStack00000020);
  return 1;
}
