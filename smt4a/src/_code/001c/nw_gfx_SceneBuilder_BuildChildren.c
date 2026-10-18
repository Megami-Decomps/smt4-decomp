/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneBuilder_BuildChildren` (_code @ 0x1c3e7c, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_7_stack;

/* Supplied declaration required: FUN_001bad18. */


void nw_gfx_SceneBuilder_BuildChildren
               (unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
               int param_5,unsigned long long param_6,int param_7)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *unaff_r4;
  
  if (param_5 != 0) {
    temp_v0 = *(int *)(param_5 + 0x24);
    if (temp_v0 != 0) {
      unaff_r4 = (int *)(temp_v0 + param_5 + 0x24);
    }
    temp_v1 = *(int *)(param_5 + 0x24);
    if (temp_v0 == 0) {
      unaff_r4 = (int *)0x0;
    }
    temp_v0 = param_5 + 0x24;
    if (temp_v1 != 0) {
      temp_v0 = temp_v0 + temp_v1;
    }
    if (temp_v1 == 0) {
      temp_v0 = 0;
    }
    if (unaff_r4 != (int *)(temp_v0 + *(int *)(param_5 + 0x20) * 4)) {
      do {
        if (param_7 != 0) {
          FUN_001bad18(param_1,param_2,param_3,0,param_5,0,0,1,1);
        }
        else {
          if (*unaff_r4 != 0) {
            temp_v0 = *unaff_r4 + (int)unaff_r4;
          }
          else {
            temp_v0 = 0;
          }
          FUN_001bad18(param_1,0,0,param_4,temp_v0,(int)param_6,(int)((unsigned long long)param_6 >> 0x20),1,0)
          ;
        }
        if (*(int *)(param_5 + 0x24) != 0) {
          temp_v0 = param_5 + 0x24 + *(int *)(param_5 + 0x24);
        }
        else {
          temp_v0 = 0;
        }
        unaff_r4 = unaff_r4 + 1;
      } while (unaff_r4 != (int *)(temp_v0 + *(int *)(param_5 + 0x20) * 4));
    }
  }
  return;
}
