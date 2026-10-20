/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b5fc` (_code @ 0x38b5fc, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020b6d4(int);
int FUN_0040b27c(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_0020b6d4. */
/* Supplied declaration required: FUN_0040b27c. */


void FUN_0038b5fc(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        FUN_0040b27c(*(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2034),2,param_2,7);
      }
      FUN_0020b6d4(7);
      return;
    }
    temp_v0 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2034);
    temp_v1 = 1;
  }
  else {
    temp_v0 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2034);
    temp_v1 = 0;
  }
  FUN_0040b27c(temp_v0,temp_v1,param_2,7);
  FUN_0020b6d4(7);
  return;
}

} /* extern "C" */
