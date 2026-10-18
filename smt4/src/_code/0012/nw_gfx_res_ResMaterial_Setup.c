/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResMaterial_Setup` (_code @ 0x12dda0, 0x1bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0013f6b0. */
/* Supplied declaration required: nw_gfx_res_ResFragmentShader_Setup. */
/* Supplied declaration required: nw_gfx_res_ResMaterial_CalcFragmentLightingTableHash. */
/* Supplied declaration required: nw_gfx_res_ResMaterial_SetupShader. */


int * nw_gfx_res_ResMaterial_Setup(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 goto(s); 4 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar7;
  int temp_v4;
  int temp_v5;
  
  piVar2 = &temp_v5;
  piVar7 = (int *)0x0;
  temp_v5 = param_4;
  if ((~*(unsigned int *)(*param_1 + 0x18) & 0x100) != 0) {
    piVar7 = param_1;
    FUN_0013f6b0(param_1,param_2,*param_1,param_3);
  }
  temp_v4 = 0;
  if ((~*(unsigned int *)(*param_1 + 0x18) & 0x80) != 0) {
    piVar1 = param_1;
    nw_gfx_res_ResMaterial_SetupShader(param_1,param_2);
    piVar7 = (int *)((unsigned int)piVar7 | (unsigned int)piVar1);
  }
  if ((~*(unsigned int *)(*param_1 + 0x18) & 0x200) != 0) {
    temp_v0 = *(int *)(*param_1 + 0x288);
    if (temp_v0 != 0) {
      temp_v4 = temp_v0 + *param_1 + 0x288;
    }
    temp_v5 = temp_v4;
    nw_gfx_res_ResFragmentShader_Setup(piVar2,param_2,param_3,*param_1);
    piVar7 = (int *)((unsigned int)piVar7 | (unsigned int)piVar2);
    if (-1 < (int)piVar2) {
      *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) | 0x200;
      nw_gfx_res_ResMaterial_CalcFragmentLightingTableHash(param_1);
    }
  }
  temp_v4 = *param_1;
  temp_v1 = *(unsigned int *)(temp_v4 + 300);
  if ((temp_v1 & 0xff) != 3) {
    temp_v2 = *(unsigned int *)(temp_v4 + 0x148);
    temp_v3 = (temp_v2 & 0xfffff) >> 0x10;
    if (temp_v3 != 8) {
      if (temp_v3 < 9) {
        if (temp_v3 != 4 && temp_v3 != 5) {
LAB_0012deb8:
          temp_v3 = (temp_v2 & 0xfffffff) >> 0x18;
          if (temp_v3 != 8) {
            if (temp_v3 < 9) {
              if (temp_v3 != 4 && temp_v3 != 5) {
LAB_0012ded8:
                if ((temp_v2 & 0xffffff) >> 0x14 == 0 && temp_v2 >> 0x1c == 0) goto LAB_0012df54;
              }
            }
            else if (temp_v3 != 9 && temp_v3 != 0xe) goto LAB_0012ded8;
          }
        }
      }
      else if (temp_v3 != 9 && temp_v3 != 0xe) goto LAB_0012deb8;
    }
  }
  else {
    temp_v3 = *(unsigned int *)(temp_v4 + 0x14c) & 0xf;
    if ((temp_v3 == 0 || temp_v3 == 3) || (temp_v3 == 4 || temp_v3 == 5)) {
LAB_0012df54:
      temp_v1 = temp_v1 | 0x80000000;
      *(unsigned int *)(temp_v4 + 300) = temp_v1;
      if (-1 < (int)piVar7) {
        *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) | 0x40;
      }
      return piVar7;
    }
  }
  temp_v1 = temp_v1 & 0x7fffffff;
  *(unsigned int *)(temp_v4 + 300) = temp_v1;
  if (-1 < (int)piVar7) {
    *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) | 0x40;
  }
  return piVar7;
}
