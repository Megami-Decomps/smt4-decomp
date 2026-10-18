/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039af30` (_code @ 0x39af30, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern signed char DAT_0049f934; /* 0x49f934 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00231b38. */
/* Supplied declaration required: FUN_00231b54. */
/* Supplied declaration required: FUN_0039b864. */
/* Supplied declaration required: FUN_0039d758. */


unsigned int FUN_0039af30(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  if (((*(unsigned int *)(param_1 + 0x10) & 0x1000) == 0) &&
     ((DAT_0049f91c != 0x13 || ((DAT_0049f920 != 6 && (DAT_0049f920 != 7 && DAT_0049f920 != 8))))))
  {
    if ((*(unsigned int *)(param_1 + 0x10) & 0x10) != 0) {
      temp_v0 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = temp_v0;
      FUN_00231b54();
      if (((temp_v0 != 0) && (DAT_0049f934 == '\0')) ||
         (temp_v0 = *(int *)(param_1 + 0x18), temp_v0 >= 0x10)) {
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xffffffef;
      }
      else {
        temp_v2 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v1 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x1c)) * temp_v1 * 0.06666667f +
                   *(float *)(param_1 + 0x1c);
        temp_v4 = (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x20)) * temp_v2 * 0.06666667f +
                   *(float *)(param_1 + 0x20);
        FUN_00231b38(param_1 + 0x162,&temp_v3);
      }
    }
    FUN_0039b864(param_1);
    FUN_0039d758(param_1);
    return 0;
  }
  return 0;
}
