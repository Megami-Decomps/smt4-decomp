/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bfe3c` (_code @ 0x2bfe3c, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Supplied declaration required: FUN_00286390. */
/* Supplied declaration required: FUN_002a4d34. */
/* Supplied declaration required: FUN_002a81a8. */
/* Supplied declaration required: FUN_002b77f4. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bfe3c(int param_1,unsigned int *param_2,int param_3)

{
/* irregular: irregular input(s): in_cr15; 8 native warning(s); review required */
  unsigned int in_cr15;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [48];
  unsigned char temp_v6 [48];
  unsigned char temp_v7 [52];
  
  if (param_3 != 0) {
    FUN_00286390(temp_v5,param_1 + 0x8c);
    FUN_002a4d34(param_1 + 0x1bc,param_2,temp_v5);
    return;
  }
  if ((~*(unsigned int *)(param_1 + 0xf8) & 0x200) != 0) {
    FUN_002a81a8(temp_v5,param_1 + 0x8c);
    FUN_002b77f4(temp_v6,temp_v5);
    FUN_002a4d34(temp_v7,temp_v5,temp_v6);
    FUN_002a4d34(param_1 + 0x1bc,param_2,temp_v7);
    return;
  }
  if (param_2 == (unsigned int *)(param_1 + 0x1bc)) {
    return;
  }
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  temp_v2 = param_2[3];
  temp_v3 = param_2[4];
  temp_v4 = param_2[5];
  *(unsigned int *)(param_1 + 0x1bc) = *param_2;
  *(unsigned int *)(param_1 + 0x1c0) = temp_v0;
  *(unsigned int *)(param_1 + 0x1c4) = temp_v1;
  *(unsigned int *)(param_1 + 0x1c8) = temp_v2;
  *(unsigned int *)(param_1 + 0x1cc) = temp_v3;
  *(unsigned int *)(param_1 + 0x1d0) = temp_v4;
  coprocessor_store(0xf,in_cr15,param_1 + 0x1ce);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
