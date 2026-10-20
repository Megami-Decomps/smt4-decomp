/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e0a4` (_code @ 0x37e0a4, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(unsigned char *, unsigned char *, int, int);

extern unsigned char LAB_0014e648; /* 0x14e648 */
extern unsigned char LAB_0017f6e8; /* 0x17f6e8 */
extern unsigned char LAB_0037e094; /* 0x37e094 */
extern unsigned char LAB_003f732c; /* 0x3f732c */

/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_0037e0a4(unsigned char *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 2;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  param_1 = param_1 + 0x24;
  __aeabi_vec_ctor_nocookie_nodtor(param_1,&LAB_0014e648,0x10,2);
  param_1 = param_1 + 0x20;
  __aeabi_vec_ctor_nocookie_nodtor(param_1,&LAB_0014e648,0x10,2);
  param_1 = param_1 + 0x20;
  __aeabi_vec_ctor_nocookie_nodtor(param_1,&LAB_003f732c,0xc,2);
  param_1 = param_1 + 0x22c;
  __aeabi_vec_ctor_nocookie_nodtor(param_1,&LAB_0017f6e8,8,2);
  param_1 = param_1 + 0x10;
  __aeabi_vec_ctor_nocookie_nodtor(param_1,&LAB_0037e094,8,4);
  temp_v2 = 0;
  *(unsigned int *)(param_1 + -0x29c) = 0x3f800000;
  *(unsigned int *)(param_1 + -0x298) = 0x3f800000;
  *(unsigned int *)(param_1 + -0x294) = 0;
  *(unsigned int *)(param_1 + -0x290) = 0;
  *(unsigned int *)(param_1 + -0x28c) = 0x3f800000;
  *(unsigned int *)(param_1 + -0x288) = 0x3f800000;
  *(unsigned int *)(param_1 + -0x284) = 0;
  *(unsigned int *)(param_1 + -0x280) = 0;
  do {
    temp_v0 = temp_v2 * 0x10;
    *(unsigned int *)(param_1 + (temp_v0 - 0x27c)) = 0x3f800000;
    *(unsigned int *)(param_1 + (temp_v0 - 0x278)) = 0x3f800000;
    *(unsigned int *)(param_1 + (temp_v0 - 0x274)) = 0;
    *(unsigned int *)(param_1 + (temp_v0 - 0x270)) = 0;
    *(unsigned int *)(param_1 + (temp_v0 - 0x25c)) = 0x3f800000;
    *(unsigned int *)(param_1 + (temp_v0 - 600)) = 0x3f800000;
    *(unsigned int *)(param_1 + (temp_v0 - 0x254)) = 0;
    temp_v1 = temp_v2 * 8;
    *(unsigned int *)(param_1 + (temp_v0 - 0x250)) = 0;
    *(unsigned int *)(param_1 + (temp_v2 * 4 - 0x224)) = 0;
    *(unsigned int *)(param_1 + (temp_v2 * 4 - 0x1c)) = 0;
    temp_v2 = temp_v2 + 1;
    *(unsigned int *)(param_1 + (temp_v1 - 0x10)) = 0;
    *(unsigned int *)(param_1 + (temp_v1 - 0xc)) = 0;
  } while (temp_v2 < 2);
  return;
}

} /* extern "C" */
