/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036fd04` (_code @ 0x36fd04, 0x1ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_00471c40; /* 0x471c40 */

/* Supplied declaration required: nw_gfx_ShaderBinaryInfo_BuildShaderProgramCommand. */
/* Supplied declaration required: nw_gfx_ShaderBinaryInfo_GetShaderProgramCommandSize. */
/* Supplied declaration required: nw_gfx_ShaderBinaryInfo_SearchUniformIndex. */


unsigned int FUN_0036fd04(int *param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10 [3];
  
  temp_v7 = 0;
  piVar1 = param_1;
  if (param_2 == (int *)0x0) {
    piVar1 = (int *)&DAT_00471c40;
  }
  temp_v8 = 0;
  temp_v4 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)*piVar1;
  }
  temp_v5 = *(int *)(*param_1 + 0x14);
  if (0 < temp_v5) {
    do {
      temp_v0 = *(int *)(*param_1 + 0x18);
      if (temp_v0 != 0) {
        temp_v0 = temp_v0 + *param_1 + 0x18;
      }
      else {
        temp_v0 = 0;
      }
      piVar1 = (int *)(temp_v0 + temp_v4 * 4);
      temp_v0 = *piVar1;
      if (temp_v0 != 0) {
        temp_v0 = temp_v0 + (int)piVar1;
      }
      else {
        temp_v0 = 0;
      }
      if (*(int *)(temp_v0 + 8) == -1) {
        temp_v1 = *param_1;
        if (*(int *)(temp_v1 + 0x84) != 0) {
          temp_v3 = temp_v1 + 0x84 + *(int *)(temp_v1 + 0x84);
        }
        else {
          temp_v3 = 0;
        }
        nw_gfx_ShaderBinaryInfo_SearchUniformIndex
                  (temp_v10,*(unsigned int *)(temp_v3 + 0x40),*(unsigned int *)(temp_v1 + 0xc));
        if (temp_v10[0] >= 0) {
          *(unsigned char *)(temp_v0 + 5) = 0;
          temp_v1 = temp_v10[0];
          *(int *)(temp_v0 + 8) = temp_v1;
        }
        else {
          temp_v1 = *param_1;
          if (*(int *)(temp_v1 + 0x84) != 0) {
            temp_v3 = temp_v1 + 0x84 + *(int *)(temp_v1 + 0x84);
          }
          else {
            temp_v3 = 0;
          }
          nw_gfx_ShaderBinaryInfo_SearchUniformIndex
                    (temp_v10,*(unsigned int *)(temp_v3 + 0x40),*(unsigned int *)(temp_v1 + 0x10));
          if (-1 < temp_v10[0]) {
            *(unsigned char *)(temp_v0 + 5) = 1;
            *(int *)(temp_v0 + 8) = temp_v10[0];
          }
          else {
            temp_v1 = -1;
            temp_v7 = 0x10;
            *(int *)(temp_v0 + 8) = temp_v1;
          }
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v5);
  }
  if (*(int *)(*param_1 + 0x7c) == 0) {
    piVar1 = (int *)(*param_1 + 0x84);
    temp_v4 = *piVar1;
    if (temp_v4 != 0) {
      temp_v8 = temp_v4 + (int)piVar1;
    }
    temp_v8 = *(int *)(temp_v8 + 0x40);
    temp_v6 = *(unsigned int *)(*param_1 + 0xc);
    temp_v9 = *(unsigned int *)(*param_1 + 0x10);
    temp_v4 = temp_v8;
    nw_gfx_ShaderBinaryInfo_GetShaderProgramCommandSize(temp_v8,temp_v6,temp_v9);
    temp_v2 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v4,4);
    temp_v10[0] = temp_v4;
    nw_gfx_ShaderBinaryInfo_BuildShaderProgramCommand(temp_v8,temp_v6,temp_v9,temp_v2);
    *(unsigned int *)(*param_1 + 0x7c) = temp_v2;
    *(int *)(*param_1 + 0x80) = temp_v8;
  }
  return temp_v7;
}
