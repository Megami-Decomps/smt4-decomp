/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141280` (_code @ 0x141280, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int DAT_0063f4e4; /* 0x63f4e4 */
extern int DAT_0063f4e8; /* 0x63f4e8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00152d64. */


void FUN_00141280(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  
  if (param_1 == 0) {
    return;
  }
  temp_v0 = DAT_0063f4e4;
  if (DAT_0063f4e4 != 0) {
    do {
      temp_v1 = temp_v0;
      if (temp_v1 == param_1) {
        if (param_2 != 0) {
          VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        FUN_00152d64(param_1,param_3);
        return;
      }
      temp_v0 = *(int *)(temp_v1 + 0xd8);
    } while (*(int *)(temp_v1 + 0xd8) != 0);
    *(int *)(param_1 + 0xdc) = temp_v1;
    *(int *)(temp_v1 + 0xd8) = param_1;
    DAT_0063f4e8 = DAT_0063f4e8 + 1;
  }
  else {
    DAT_0063f4e8 = DAT_0063f4e8 + 1;
    DAT_0063f4e4 = param_1;
  }
  if (param_2 != 0) {
    VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  FUN_00152d64(param_1,param_3);
  return;
}
