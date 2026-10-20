/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001211cc` (_code @ 0x1211cc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7340(int, unsigned int [2], int, int);

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_002e7340. */


unsigned int FUN_001211cc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    temp_v0[0] = param_4;
    FUN_002e7340(param_1,temp_v0,1,*(int *)(param_1 + 0x10) - 1);
    return temp_v0[0] & 0xff;
  }
  return 0;
}

} /* extern "C" */
