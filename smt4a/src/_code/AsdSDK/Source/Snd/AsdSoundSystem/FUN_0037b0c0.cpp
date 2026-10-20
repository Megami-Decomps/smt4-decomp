/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b0c0` (_code @ 0x37b0c0, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned int DAT_0063f4bc; /* 0x63f4bc */
extern signed char DAT_0063f4c4; /* 0x63f4c4 */


unsigned int FUN_0037b0c0(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((DAT_0063f4c4 != '\0') && (param_1 < 0x10)) {
    temp_v0 = 1 << (param_1 & 0xff);
    if (*(int *)(param_1 * 4 + 0x63f2f8) == 0) {
      DAT_0063f4bc = DAT_0063f4bc & ~temp_v0;
    }
    if ((temp_v0 & DAT_0063f4bc) != 0) {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
