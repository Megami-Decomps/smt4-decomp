/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001324de` (_code @ 0x1324de, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001324de_arg1 fn_001324de_arg1;
struct fn_001324de_arg1 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    int field_0x14; /* +0x14 */
};

extern int *FUN_002e9f94(fn_001324de_arg1 *, unsigned int, int *, int *, int *);


void FUN_001324de(int *param_1,fn_001324de_arg1 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)FUN_002e9f94(param_2,0,param_3,param_4,param_4);
  temp_v0 = *param_4;
  piVar1[3] = param_4[1];
  piVar1[2] = temp_v0;
  *piVar1 = *param_3;
  piVar1[1] = *(int *)(*param_3 + 4);
  **(int **)(*param_3 + 4) = (int)piVar1;
  *(int **)(*param_3 + 4) = piVar1;
  param_2->field_0x14 = param_2->field_0x14 + 1;
  *param_1 = (int)piVar1;
  return;
}
