/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f380` (_code @ 0x36f380, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0036e9d8. */


void FUN_0036f380(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *param_1;
  if ((*(unsigned int *)(temp_v0 + 8) & 1) == 0) {
    if ((*(unsigned int *)(temp_v0 + 8) & 2) != 0) {
      if (*(int *)(temp_v0 + 0xc) != 0) {
        return;
      }
      *(int *)(temp_v0 + 0xc) = temp_v0;
      if (*(int *)(temp_v0 + 0x1c) == 0) {
        temp_v1 = *(int *)(temp_v0 + 0x10);
        if (temp_v1 == 0) {
          temp_v1 = 0x2010000;
        }
        FUN_0036e9d8(temp_v0,temp_v0,temp_v1);
        return;
      }
    }
    else {
      if (*(int *)(temp_v0 + 0xc) != 0) {
        return;
      }
      *(int *)(temp_v0 + 0xc) = temp_v0;
      if (*(int *)(temp_v0 + 0x1c) == 0) {
        temp_v1 = *(int *)(temp_v0 + 0x10);
        if (temp_v1 == 0) {
          temp_v1 = 0x2010000;
        }
        FUN_0036e9d8(temp_v0,temp_v0,temp_v1);
        return;
      }
    }
    *(unsigned int *)(temp_v0 + 0x20) = 0;
  }
  return;
}
