/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048560c` (_code @ 0x48560c, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern float DAT_00630730; /* 0x630730 */
extern float DAT_00630740; /* 0x630740 */
extern float DAT_00630750; /* 0x630750 */
extern float DAT_00630760; /* 0x630760 */
extern unsigned char DAT_00630775; /* 0x630775 */
extern float DAT_0063077c; /* 0x63077c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
extern int FUN_0019dc44(unsigned int);


void FUN_0048560c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,
                 int param_6)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  unsigned char uStack_28;
  unsigned char uStack_27;
  unsigned char uStack_26;
  
  if (param_2 != 0xffffffff) {
    temp_v0 = FUN_0019dc44(3);
    temp_v0 = (**(romwright_code **)(**(int **)(temp_v0 + 8) + 0x44))(*(int **)(temp_v0 + 8),param_2 & 0xffff);
    if ((temp_v0 == 0) && (param_2 != 0)) {
      param_2 = 0xffff8140;
    }
    temp_v1 = 0xffffffff;
    if (param_6 != 0) {
      temp_v1 = 0x57d8ffff;
    }
    if (param_5 != 0) {
      in_fpscr = in_fpscr & 0xfffffff;
    }
    uStack_28 = (unsigned char)(param_2 >> 8);
    uStack_27 = (unsigned char)param_2;
    uStack_26 = 0;
    if (param_6 != 0) {
      VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(4,temp_v1,&uStack_28);
    }
    else {
      VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(3,temp_v1,&uStack_28);
    }
    if ((int)in_s0 >= 0x3f800001) {
      in_s0 = 1.0f;
    }
    if (in_s0 < 0.0f) {
      in_s0 = 0.0f;
    }
    DAT_0063077c = in_s0;
    DAT_00630730 = in_s0;
    DAT_00630740 = in_s0;
    DAT_00630750 = in_s0;
    DAT_00630760 = in_s0;
    DAT_00630775 = 1;
    return;
  }
  return;
}
