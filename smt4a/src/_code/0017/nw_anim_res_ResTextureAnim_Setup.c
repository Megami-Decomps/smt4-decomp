/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_anim_res_ResTextureAnim_Setup` (_code @ 0x175e84, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp1C; /* 0x1c: local_1c */
} param_3_stack;

/* Supplied declaration required: FUN_0018e0cc. */


unsigned int nw_anim_res_ResTextureAnim_Setup(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [4];
  char temp_v7;
  
  temp_v4 = 0;
  temp_v3 = 0;
  if (0 < *(int *)(*param_1 + 0x10)) {
    temp_v5 = 0;
    do {
      temp_v1 = *(int *)(*param_1 + 0x14);
      temp_v0 = temp_v5;
      if (temp_v1 != 0) {
        temp_v0 = *param_1 + 0x14 + temp_v1;
      }
      piVar1 = (int *)(temp_v0 + temp_v3 * 4);
      temp_v1 = *piVar1;
      temp_v0 = temp_v5;
      if (temp_v1 != 0) {
        temp_v0 = (int)piVar1 + temp_v1;
      }
      temp_v2 = *(int *)(temp_v0 + 0x1c);
      temp_v1 = temp_v5;
      if (temp_v2 != 0) {
        temp_v1 = temp_v0 + 0x1c + temp_v2;
      }
      if (temp_v1 == 0) {
        temp_v1 = *(int *)(*param_1 + 0x14);
        temp_v0 = temp_v5;
        if (temp_v1 != 0) {
          temp_v0 = *param_1 + 0x14 + temp_v1;
        }
        piVar1 = (int *)(temp_v0 + temp_v3 * 4);
        temp_v1 = *piVar1;
        temp_v0 = temp_v5;
        if (temp_v1 != 0) {
          temp_v0 = temp_v1 + (int)piVar1;
        }
        FUN_0018e0cc(temp_v6,temp_v0,param_3);
        if (temp_v7 == '\0') {
          temp_v4 = 0x80000001;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(int *)(*param_1 + 0x10));
  }
  return temp_v4;
}
