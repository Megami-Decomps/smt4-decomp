/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b563c` (_code @ 0x2b563c, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0036d578(int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_005f0c84; /* 0x5f0c84 */
extern signed char DAT_005f0cf9; /* 0x5f0cf9 */

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0036d578. */


unsigned int FUN_002b563c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  temp_v0 = FUN_0018719c(0x4d0);
  if (((temp_v0 != 0) && (DAT_005f0c84 == 1)) && (DAT_005f0cf9 == '\0')) {
    FUN_0036d578(&temp_v1);
    *param_1 = temp_v1;
    param_1[1] = uStack_24;
    param_1[2] = uStack_20;
    return 1;
  }
  return 0;
}

} /* extern "C" */
