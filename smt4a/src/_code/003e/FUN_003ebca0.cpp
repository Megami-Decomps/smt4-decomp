/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ebca0` (_code @ 0x3ebca0, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;


unsigned int FUN_003ebca0(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  if (0 < *(int *)(param_1 + 0x2414)) {
    temp_v0 = 0;
    do {
      temp_v1 = *(int *)(*(int *)(param_1 + 0x2410) + temp_v0 * 0x10);
      if (*(int *)(param_1 + 0xa8) != 0) {
        if (temp_v1 == 6) {
          return 1;
        }
      }
      else {
        if (temp_v1 != 4) {
          return 1;
        }
        if ((*(unsigned short *)
              (*(int *)(param_1 + 0x1ffc) +
              *(int *)(*(int *)(param_1 + 0x2410) + temp_v0 * 0x10 + 4) * 0x408 + 0x274) & 0x11c0) ==
            0) {
          return 1;
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0x2414));
  }
  return 0;
}

} /* extern "C" */
