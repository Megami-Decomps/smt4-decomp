/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_anim_res_ResAnim_Setup` (_code @ 0x2aca0c, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: nw_anim_res_ResTextureAnim_Setup. */


unsigned int nw_anim_res_ResAnim_Setup(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v3 = 0;
  temp_v2 = 0;
  if (temp_v2 < *(int *)(*param_1 + 0x18)) {
    do {
      temp_v0 = *(int *)(*param_1 + 0x1c);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = *param_1 + 0x1c + temp_v0;
      }
      temp_v4 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v2 * 0x10 + 0x28);
        temp_v1 = *piVar1;
        temp_v4 = 0;
        if (temp_v1 != 0) {
          temp_v4 = (int)piVar1 + temp_v1;
        }
      }
      if (*(int *)(temp_v4 + 8) != 7) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = &temp_v4;
        nw_anim_res_ResTextureAnim_Setup(&temp_v4,param_2,param_3);
      }
      temp_v3 = temp_v3 | (unsigned int)piVar1;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(*param_1 + 0x18));
  }
  return temp_v3;
}
