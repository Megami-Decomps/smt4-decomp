/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b864` (_code @ 0x10b864, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001190b0(int, unsigned int);
int VectorUnsignedToFloat(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int DAT_004e3154; /* 0x4e3154 */
extern int DAT_004e3158; /* 0x4e3158 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001190b0. */


void FUN_0010b864(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  
  if (param_1 == 0) {
    return;
  }
  temp_v0 = DAT_004e3154;
  if (DAT_004e3154 != 0) {
    do {
      temp_v1 = temp_v0;
      if (temp_v1 == param_1) {
        if (param_2 != 0) {
          VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        FUN_001190b0(param_1,param_3);
        return;
      }
      temp_v0 = *(int *)(temp_v1 + 0x70);
    } while (*(int *)(temp_v1 + 0x70) != 0);
    *(int *)(param_1 + 0x74) = temp_v1;
    *(int *)(temp_v1 + 0x70) = param_1;
    DAT_004e3158 = DAT_004e3158 + 1;
  }
  else {
    DAT_004e3158 = DAT_004e3158 + 1;
    DAT_004e3154 = param_1;
  }
  if (param_2 != 0) {
    VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  FUN_001190b0(param_1,param_3);
  return;
}

} /* extern "C" */
