/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00193ee0` (_code @ 0x193ee0, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0538(void);
int FUN_001a06d4(void);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(unsigned char [20], unsigned int, int);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

/* Supplied declaration required: FUN_001a0538. */
/* Supplied declaration required: FUN_001a06d4. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_00193ee0(int param_1,int *param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [20];
  
  temp_v4 = *param_2 + (param_3 & 0xffff) * 0x278 + 4;
  if (*(char *)(param_1 + 0x29) != '\0') {
    if (*(char *)(param_1 + 0x28) == '\v') {
      temp_v0 = temp_v4 + param_4 * 0x2c;
      temp_v1 = FUN_001a06d4();
      temp_v2 = FUN_001a06d4();
      *(unsigned int *)(temp_v0 + 0x28) = temp_v1 | (temp_v2 << 0x10);
      temp_v3 = FUN_001a06d4();
      *(unsigned int *)(temp_v0 + 0x2c) = temp_v3;
    }
    if (*(char *)(param_1 + 0x28) == '\t') {
      temp_v4 = temp_v4 + param_4 * 0x2c;
      temp_v1 = FUN_001a0538();
      temp_v0 = FUN_001a0538();
      *(unsigned int *)(temp_v4 + 0x14) = temp_v1 | (temp_v0 << 0x10);
      temp_v3 = FUN_001a0538();
      *(unsigned int *)(temp_v4 + 0x18) = temp_v3;
      *(unsigned char *)(temp_v4 + 0x1c) = 1;
      return;
    }
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v5,param_5,param_1 + 0x1c);
    temp_v4 = temp_v4 + param_4 * 0x2c;
    temp_v1 = FUN_001a0538();
    temp_v0 = FUN_001a0538();
    *(unsigned int *)(temp_v4 + 0x14) = temp_v1 | (temp_v0 << 0x10);
    temp_v3 = FUN_001a0538();
    *(unsigned int *)(temp_v4 + 0x18) = temp_v3;
    *(unsigned char *)(temp_v4 + 0x1c) = 0;
  }
  return;
}

} /* extern "C" */
