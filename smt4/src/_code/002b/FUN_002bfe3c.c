/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bfe3c` (_code @ 0x2bfe3c, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

/* Supplied declaration required: FUN_002a81a8. */
/* Supplied declaration required: FUN_002b77f4. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InvTransposeAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


void FUN_002bfe3c(int param_1,unsigned int *param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11 [48];
  unsigned char temp_v12 [48];
  unsigned char temp_v13 [52];
  
  if (param_3 != 0) {
    nn_math_ARMv6_MTX34InvTransposeAsm(temp_v11,param_1 + 0x8c);
    nn_math_ARMv6_MTX34MultAsm(param_1 + 0x1bc,param_2,temp_v11);
    return;
  }
  if ((~*(unsigned int *)(param_1 + 0xf8) & 0x200) != 0) {
    FUN_002a81a8(temp_v11,param_1 + 0x8c);
    FUN_002b77f4(temp_v12,temp_v11);
    nn_math_ARMv6_MTX34MultAsm(temp_v13,temp_v11,temp_v12);
    nn_math_ARMv6_MTX34MultAsm(param_1 + 0x1bc,param_2,temp_v13);
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
  temp_v5 = param_2[6];
  temp_v6 = param_2[7];
  temp_v7 = param_2[8];
  temp_v8 = param_2[9];
  temp_v9 = param_2[10];
  temp_v10 = param_2[0xb];
  *(unsigned int *)(param_1 + 0x1bc) = *param_2;
  *(unsigned int *)(param_1 + 0x1c0) = temp_v0;
  *(unsigned int *)(param_1 + 0x1c4) = temp_v1;
  *(unsigned int *)(param_1 + 0x1c8) = temp_v2;
  *(unsigned int *)(param_1 + 0x1cc) = temp_v3;
  *(unsigned int *)(param_1 + 0x1d0) = temp_v4;
  *(unsigned int *)(param_1 + 0x1d4) = temp_v5;
  *(unsigned int *)(param_1 + 0x1d8) = temp_v6;
  *(unsigned int *)(param_1 + 0x1dc) = temp_v7;
  *(unsigned int *)(param_1 + 0x1e0) = temp_v8;
  *(unsigned int *)(param_1 + 0x1e4) = temp_v9;
  *(unsigned int *)(param_1 + 0x1e8) = temp_v10;
  return;
}
