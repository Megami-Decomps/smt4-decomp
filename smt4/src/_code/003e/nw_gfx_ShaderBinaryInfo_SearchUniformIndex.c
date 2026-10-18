/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ShaderBinaryInfo_SearchUniformIndex` (_code @ 0x3e2368, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern int FUN_002b4414(unsigned int, int, int);
extern int FUN_002c30c4(unsigned int);


void nw_gfx_ShaderBinaryInfo_SearchUniformIndex
               (unsigned int *param_1,int param_2,int param_3,unsigned int param_4)

{
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  
  temp_v8 = 0xffffffff;
  temp_v9 = 0;
  temp_v7 = *(int *)(param_2 + param_3 * 4 + 8);
  temp_v1 = *(int *)(temp_v7 + 0x38);
  temp_v4 = *(int *)(temp_v7 + 0x30);
  temp_v2 = FUN_002c30c4(param_4);
  temp_v5 = 0;
  if (temp_v5 < *(int *)(temp_v7 + 0x34)) {
    do {
      piVar7 = (int *)(temp_v4 + temp_v7 + temp_v5 * 8);
      temp_v6 = *piVar7 + temp_v1 + temp_v7;
      temp_v3 = FUN_002b4414(param_4,temp_v6,temp_v2);
      if ((temp_v3 == 0) && ((temp_v0 = *(char *)(temp_v6 + temp_v2), temp_v0 == '\0' || (temp_v0 == '.')))) {
        temp_v8 = piVar7[1] & 0xffff;
        if (temp_v8 >= 0x88) {
          temp_v8 = 0xffffffff;
        }
        else if (temp_v8 >= 0x78) {
          temp_v9 = 4;
          temp_v8 = temp_v8 - 0x78;
        }
        else if (temp_v8 >= 0x70) {
          temp_v9 = 3;
          temp_v8 = temp_v8 - 0x70;
        }
        else if (temp_v8 >= 0x10) {
          temp_v9 = 2;
          temp_v8 = temp_v8 - 0x10;
        }
        else {
          temp_v9 = 1;
        }
        break;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(temp_v7 + 0x34));
  }
  *param_1 = temp_v8;
  *(unsigned char *)(param_1 + 1) = temp_v9;
  return;
}
