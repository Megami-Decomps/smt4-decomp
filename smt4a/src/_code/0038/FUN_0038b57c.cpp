/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b57c` (_code @ 0x38b57c, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020b6d4(int);
int FUN_0040b730(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_0020b6d4. */
/* Supplied declaration required: FUN_0040b730. */


void FUN_0038b57c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        FUN_0040b730(*(unsigned int *)(DAT_00588fd4 + 0x2034),2,7);
      }
      FUN_0020b6d4(7);
      return;
    }
    temp_v0 = *(unsigned int *)(DAT_00588fd4 + 0x2034);
    temp_v1 = 1;
  }
  else {
    temp_v0 = *(unsigned int *)(DAT_00588fd4 + 0x2034);
    temp_v1 = 0;
  }
  FUN_0040b730(temp_v0,temp_v1,7);
  FUN_0020b6d4(7);
  return;
}

} /* extern "C" */
