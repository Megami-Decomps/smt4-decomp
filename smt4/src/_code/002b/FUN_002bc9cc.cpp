/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc9cc` (_code @ 0x2bc9cc, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001296c0(char *, char *, char *, char *, char *, int);
int FUN_002b77b0(char *, char *, int);
int FUN_002b77f4(char *, char *);
int nn_math_ARMv6_MTX44TransposeAsm(char *, char *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_001296c0. */
/* Supplied declaration required: FUN_002b77b0. */
/* Supplied declaration required: FUN_002b77f4. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */


void FUN_002bc9cc(char *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (*param_1 != '\0') {
    FUN_001296c0(param_1 + 0x4a0,param_1 + 0x248,param_1 + 0x1d8,param_1 + 0x2f8,param_1 + 0x288,1);
    FUN_002b77f4(param_1 + 0x338,param_1 + 0x1d8);
    nn_math_ARMv6_MTX44TransposeAsm(param_1 + 0x3a8,param_1 + 0x248);
    FUN_002b77f4(param_1 + 1000,param_1 + 0x288);
    nn_math_ARMv6_MTX44TransposeAsm(param_1 + 0x458,param_1 + 0x2f8);
    FUN_002b77b0(param_1 + 0x1d8,param_1 + 0x208,0x30);
    temp_v0 = 0;
    temp_v1 = 0x3f800000;
    param_1[0x238] = '\0';
    param_1[0x239] = '\0';
    param_1[0x23a] = '\0';
    param_1[0x23b] = '\0';
    param_1[0x23c] = '\0';
    param_1[0x23d] = '\0';
    param_1[0x23e] = '\0';
    param_1[0x23f] = '\0';
    param_1[0x240] = '\0';
    param_1[0x241] = '\0';
    param_1[0x242] = '\0';
    param_1[0x243] = '\0';
    param_1[0x244] = '\0';
    param_1[0x245] = '\0';
    param_1[0x246] = -0x80;
    param_1[0x247] = '?';
    *(unsigned int *)(param_1 + 0x368) = *(unsigned int *)(param_1 + 0x208);
    *(unsigned int *)(param_1 + 0x36c) = *(unsigned int *)(param_1 + 0x20c);
    *(unsigned int *)(param_1 + 0x370) = *(unsigned int *)(param_1 + 0x210);
    *(unsigned int *)(param_1 + 0x374) = *(unsigned int *)(param_1 + 0x214);
    *(unsigned int *)(param_1 + 0x378) = *(unsigned int *)(param_1 + 0x218);
    *(unsigned int *)(param_1 + 0x37c) = *(unsigned int *)(param_1 + 0x21c);
    *(unsigned int *)(param_1 + 0x380) = *(unsigned int *)(param_1 + 0x220);
    *(unsigned int *)(param_1 + 900) = *(unsigned int *)(param_1 + 0x224);
    *(unsigned int *)(param_1 + 0x388) = *(unsigned int *)(param_1 + 0x228);
    *(unsigned int *)(param_1 + 0x38c) = *(unsigned int *)(param_1 + 0x22c);
    *(unsigned int *)(param_1 + 0x390) = *(unsigned int *)(param_1 + 0x230);
    *(unsigned int *)(param_1 + 0x394) = *(unsigned int *)(param_1 + 0x234);
    *(unsigned int *)(param_1 + 0x398) = *(unsigned int *)(param_1 + 0x238);
    *(unsigned int *)(param_1 + 0x39c) = *(unsigned int *)(param_1 + 0x23c);
    param_1[0x3a0] = '\0';
    param_1[0x3a1] = '\0';
    param_1[0x3a2] = '\0';
    param_1[0x3a3] = '\0';
    param_1[0x3a4] = '\0';
    param_1[0x3a5] = '\0';
    param_1[0x3a6] = -0x80;
    param_1[0x3a7] = '?';
    nn_math_ARMv6_MTX44TransposeAsm(param_1 + 0x368,param_1 + 0x368);
    FUN_002b77b0(param_1 + 0x288,param_1 + 0x2b8,0x30);
    *(unsigned int *)(param_1 + 0x2e8) = temp_v0;
    *(unsigned int *)(param_1 + 0x2ec) = temp_v0;
    *(unsigned int *)(param_1 + 0x2f0) = temp_v0;
    *(unsigned int *)(param_1 + 0x2f4) = temp_v1;
    *(unsigned int *)(param_1 + 0x418) = *(unsigned int *)(param_1 + 0x2b8);
    *(unsigned int *)(param_1 + 0x41c) = *(unsigned int *)(param_1 + 700);
    *(unsigned int *)(param_1 + 0x420) = *(unsigned int *)(param_1 + 0x2c0);
    *(unsigned int *)(param_1 + 0x424) = *(unsigned int *)(param_1 + 0x2c4);
    *(unsigned int *)(param_1 + 0x428) = *(unsigned int *)(param_1 + 0x2c8);
    *(unsigned int *)(param_1 + 0x42c) = *(unsigned int *)(param_1 + 0x2cc);
    *(unsigned int *)(param_1 + 0x430) = *(unsigned int *)(param_1 + 0x2d0);
    *(unsigned int *)(param_1 + 0x434) = *(unsigned int *)(param_1 + 0x2d4);
    *(unsigned int *)(param_1 + 0x438) = *(unsigned int *)(param_1 + 0x2d8);
    *(unsigned int *)(param_1 + 0x43c) = *(unsigned int *)(param_1 + 0x2dc);
    *(unsigned int *)(param_1 + 0x440) = *(unsigned int *)(param_1 + 0x2e0);
    *(unsigned int *)(param_1 + 0x444) = *(unsigned int *)(param_1 + 0x2e4);
    *(unsigned int *)(param_1 + 0x448) = *(unsigned int *)(param_1 + 0x2e8);
    *(unsigned int *)(param_1 + 0x44c) = *(unsigned int *)(param_1 + 0x2ec);
    *(unsigned int *)(param_1 + 0x450) = *(unsigned int *)(param_1 + 0x2f0);
    *(unsigned int *)(param_1 + 0x454) = *(unsigned int *)(param_1 + 0x2f4);
    nn_math_ARMv6_MTX44TransposeAsm(param_1 + 0x418,param_1 + 0x418);
    return;
  }
  return;
}

} /* extern "C" */
