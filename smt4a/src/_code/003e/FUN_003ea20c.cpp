/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ea20c` (_code @ 0x3ea20c, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_00573a08; /* 0x573a08 */
extern unsigned int DAT_00573a0c; /* 0x573a0c */
extern unsigned int DAT_00573b38; /* 0x573b38 */
extern unsigned int DAT_00573b3c; /* 0x573b3c */

extern unsigned int FUN_003e46f4(unsigned int);


unsigned int FUN_003ea20c(int param_1)

{
  unsigned int temp_v0;
  
  if (!((*(unsigned int *)(param_1 + 0x45a0) & DAT_00573a08) == 0 &&
       (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a0c) == 0)) {
    temp_v0 = 0;
  }
  else {
    if ((*(unsigned int *)(param_1 + 0x45a8) & DAT_00573b38) == 0 &&
        (DAT_00573b3c & *(unsigned int *)(param_1 + 0x45ac)) == 0) {
      temp_v0 = FUN_003e46f4(0x10);
      return temp_v0;
    }
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
