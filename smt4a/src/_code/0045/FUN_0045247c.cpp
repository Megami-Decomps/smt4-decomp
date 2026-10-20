/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045247c` (_code @ 0x45247c, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_ShaderBinaryInfo_BuildShaderProgramCommand(int, unsigned int, unsigned int, unsigned int);
int nw_gfx_ShaderBinaryInfo_GetShaderProgramCommandSize(int, unsigned int, unsigned int);
int nw_gfx_ShaderBinaryInfo_SearchUniformIndex(int [3], unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: nw_gfx_ShaderBinaryInfo_BuildShaderProgramCommand. */
/* Supplied declaration required: nw_gfx_ShaderBinaryInfo_GetShaderProgramCommandSize. */
/* Supplied declaration required: nw_gfx_ShaderBinaryInfo_SearchUniformIndex. */


unsigned int FUN_0045247c(int *param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10 [3];
  int *piStack_2c;
  int *temp_v11;
  
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v4 = 0;
  temp_v5 = *(int *)(*param_1 + 0x14);
  piStack_2c = param_1;
  temp_v11 = param_2;
  if (0 < temp_v5) {
    do {
      temp_v2 = *(int *)(*param_1 + 0x18);
      if (temp_v2 != 0) {
        temp_v2 = *param_1 + 0x18 + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
      piVar1 = (int *)(temp_v2 + temp_v4 * 4);
      temp_v2 = *piVar1;
      if (temp_v2 != 0) {
        temp_v2 = temp_v2 + (int)piVar1;
      }
      else {
        temp_v2 = 0;
      }
      if (*(int *)(temp_v2 + 8) == -1) {
        temp_v0 = *param_1;
        if (*(int *)(temp_v0 + 0x84) != 0) {
          temp_v3 = temp_v0 + 0x84 + *(int *)(temp_v0 + 0x84);
        }
        else {
          temp_v3 = 0;
        }
        nw_gfx_ShaderBinaryInfo_SearchUniformIndex
                  (temp_v10,*(unsigned int *)(temp_v3 + 0x40),*(unsigned int *)(temp_v0 + 0xc));
        if (temp_v10[0] >= 0) {
          *(unsigned char *)(temp_v2 + 5) = 0;
          *(int *)(temp_v2 + 8) = temp_v10[0];
        }
        else {
          temp_v0 = *param_1;
          if (*(int *)(temp_v0 + 0x84) != 0) {
            temp_v3 = temp_v0 + 0x84 + *(int *)(temp_v0 + 0x84);
          }
          else {
            temp_v3 = 0;
          }
          nw_gfx_ShaderBinaryInfo_SearchUniformIndex
                    (temp_v10,*(unsigned int *)(temp_v3 + 0x40),*(unsigned int *)(temp_v0 + 0x10));
          if (temp_v10[0] >= 0) {
            *(unsigned char *)(temp_v2 + 5) = 1;
            *(int *)(temp_v2 + 8) = temp_v10[0];
          }
          else {
            temp_v7 = 0x10;
            *(unsigned int *)(temp_v2 + 8) = 0xffffffff;
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
    temp_v5 = *(int *)(temp_v8 + 0x40);
    temp_v6 = *(unsigned int *)(*param_1 + 0xc);
    temp_v9 = *(unsigned int *)(*param_1 + 0x10);
    temp_v4 = temp_v5;
    nw_gfx_ShaderBinaryInfo_GetShaderProgramCommandSize(temp_v5,temp_v6,temp_v9);
    temp_v1 = (**(romwright_code **)(*temp_v11 + 8))(temp_v11,temp_v4,4);
    temp_v10[0] = temp_v4;
    nw_gfx_ShaderBinaryInfo_BuildShaderProgramCommand(temp_v5,temp_v6,temp_v9,temp_v1);
    *(unsigned int *)(*param_1 + 0x7c) = temp_v1;
    *(int *)(*param_1 + 0x80) = temp_v5;
  }
  return temp_v7;
}

} /* extern "C" */
