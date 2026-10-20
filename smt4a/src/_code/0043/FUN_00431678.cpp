/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00431678` (_code @ 0x431678, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_8: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_8_stack;


void FUN_00431678(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned char *param_4,
                 int param_5,int *param_6,int *param_7,unsigned char *param_8)

{
  int temp_v0;
  unsigned int unaff_r11;
  
  if (param_6 != (int *)0x0) {
    *param_7 = *param_6;
  }
  else {
    *param_7 = -1;
  }
  if (param_2 != (unsigned int *)0x0) {
    unaff_r11 = *param_2;
  }
  if (param_2 != (unsigned int *)0x0) {
    *param_3 = unaff_r11;
    temp_v0 = 0;
  }
  else {
    *param_3 = 0xffffffff;
    temp_v0 = -0x1f1ebbfe;
  }
  if (param_5 == 0) {
    temp_v0 = -0x1f1ebbfe;
  }
  if (param_1 == 0) {
    *param_4 = 0;
    *param_3 = 0xffffffff;
  }
  if (*param_7 < 0) {
    *param_8 = 0;
  }
  if (temp_v0 < 0) {
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = 0;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = 0;
    }
  }
  return;
}

} /* extern "C" */
