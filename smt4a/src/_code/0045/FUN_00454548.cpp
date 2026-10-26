/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00454548` (_code @ 0x454548, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162330(unsigned char [48], unsigned char [48]);
int nn_math_ARMv6_MTX34InverseAsm(unsigned char [48], int);
int nn_math_ARMv6_MTX34CopyAsm(int, unsigned int);
int nn_math_ARMv6_MTX34InvTransposeAsm(unsigned char [48], int);
int nn_math_ARMv6_MTX34MultAsm(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

/* Supplied declaration required: FUN_00162330. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InverseAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InvTransposeAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


void FUN_00454548(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0 [48];
  unsigned char temp_v1 [48];
  unsigned char temp_v2 [52];
  
  if (param_3 != 0) {
    nn_math_ARMv6_MTX34InvTransposeAsm(temp_v0,param_1 + 0x8c);
    nn_math_ARMv6_MTX34MultAsm(param_1 + 0x1bc,param_2,temp_v0);
    return;
  }
  if ((~*(unsigned int *)(param_1 + 0xf8) & 0x200) != 0) {
    nn_math_ARMv6_MTX34InverseAsm(temp_v0,param_1 + 0x8c);
    FUN_00162330(temp_v1,temp_v0);
    nn_math_ARMv6_MTX34MultAsm(temp_v2,temp_v1,temp_v0);
    nn_math_ARMv6_MTX34MultAsm(param_1 + 0x1bc,param_2,temp_v2);
    return;
  }
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x1bc,param_2);
  return;
}

} /* extern "C" */
