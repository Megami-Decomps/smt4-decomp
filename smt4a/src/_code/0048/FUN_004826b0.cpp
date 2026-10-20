/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004826b0` (_code @ 0x4826b0, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_005f15fc; /* 0x5f15fc */


void FUN_004826b0(int *param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned char temp_v0;
  
  if ((*(signed char *)((unsigned char *)&DAT_005f15fc + 0x21)) == '\0') {
    temp_v0 = *(unsigned char *)(param_1 + 3);
    if ((temp_v0 & 0x10) != 0) {
      if (*(char *)((int)param_1 + 0x8b) != '\x03') {
        if (0 < param_1[0x17]) {
          param_1[0x17] = param_1[0x17] - 1;
        }
        goto LAB_004826f0;
      }
      if ((char)param_1[0x24] != '\x01') {
        *(unsigned char *)(param_1 + 3) = temp_v0 & 0xfe;
      }
    }
    else {
LAB_004826f0:
      if (param_1[0x17] != 0) {
        if ((int *)param_1[0x1d] != (int *)0x0) {
          (**(romwright_code **)(*(int *)param_1[0x1d] + 0xc))();
        }
                    /* WARNING: Could not recover jumptable at 0x00482750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(romwright_code **)(*param_1 + 0x18))(param_1);
        return;
      }
      temp_v0 = *(unsigned char *)(param_1 + 3);
      *(unsigned char *)(param_1 + 3) = temp_v0 & 0xfe;
    }
  }
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x1d] + 0xc))();
  }
  (**(romwright_code **)(*param_1 + 0x18))(param_1);
  return;
}

} /* extern "C" */
