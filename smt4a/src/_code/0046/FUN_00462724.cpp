/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00462724` (_code @ 0x462724, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(unsigned char *, unsigned char *, int, int);

extern unsigned char LAB_001aafb0; /* 0x1aafb0 */
extern unsigned char LAB_001f3e28; /* 0x1f3e28 */
extern unsigned char LAB_00462714; /* 0x462714 */
extern unsigned char LAB_00515804; /* 0x515804 */

/* Supplied declaration required: FUN_002f5020. */


void FUN_00462724(unsigned char *param_1)

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
  param_1 = param_1 + 0x14;
  FUN_002f5020(param_1,&LAB_001aafb0,0x10,2);
  param_1 = param_1 + 0x20;
  FUN_002f5020(param_1,&LAB_001aafb0,0x10,2);
  param_1 = param_1 + 0x20;
  FUN_002f5020(param_1,&LAB_00515804,0xc,2);
  param_1 = param_1 + 0x22c;
  FUN_002f5020(param_1,&LAB_001f3e28,8,2);
  param_1 = param_1 + 0x10;
  FUN_002f5020(param_1,&LAB_00462714,8,4);
  temp_v2 = 0;
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
