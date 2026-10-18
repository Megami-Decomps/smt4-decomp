/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f452c` (_code @ 0x4f452c, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004f452c_arg0 fn_004f452c_arg0;
struct fn_004f452c_arg0 {
    unsigned char pad_0x0[0x10];
    undefined2 field_0x10; /* +0x10 */
    char field_0x12; /* +0x12 */
    char field_0x13; /* +0x13 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_004f452c(fn_004f452c_arg0 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  piVar1 = (int *)(param_2 + 0x1ed4);
  if (param_2 != 0) {
    param_3 = *piVar1;
  }
  if (param_2 != 0 && param_3 != 0) {
    temp_v1 = 4;
    do {
      temp_v0 = temp_v1 + 1;
      temp_v1 = *piVar1 + temp_v1 * 0x1d0;
      temp_v2 = *(unsigned int *)(temp_v1 + 0x50);
      if ((temp_v2 & 1) != 0 && (temp_v2 & 0x80) != 0) {
        *(unsigned int *)(temp_v1 + 0x50) = temp_v2 & 0xfffffff7;
      }
      temp_v1 = temp_v0;
    } while (temp_v0 < 0x36);
  }
  temp_v1 = 4;
  while (((temp_v0 = *piVar1 + temp_v1 * 0x1d0,
          (*(unsigned int *)(temp_v0 + 0x50) & 1) == 0 || (*(unsigned int *)(temp_v0 + 0x50) & 0x80) == 0 ||
          (*(char *)(temp_v0 + 0x44) != param_1->field_0x12)) ||
         (*(char *)(temp_v0 + 0x45) != param_1->field_0x13))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x36) {
      temp_v1 = 4;
      do {
        temp_v0 = *piVar1 + temp_v1 * 0x1d0;
        if ((*(unsigned int *)(temp_v0 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v0 + 0x50) & 0x80) != 0) {
          *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(temp_v0 + 0x50) | 8;
          param_1->field_0x10 = *(unsigned short *)(temp_v0 + 0x6a);
          param_1->field_0x12 = *(char *)(temp_v0 + 0x44);
          param_1->field_0x13 = *(char *)(temp_v0 + 0x45);
          return;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x36);
      return;
    }
  }
  *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(temp_v0 + 0x50) | 8;
  param_1->field_0x10 = *(unsigned short *)(temp_v0 + 0x6a);
  return;
}
