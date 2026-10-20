/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050df58` (_code @ 0x50df58, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f4370(unsigned int *, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_005b3fa8; /* 0x5b3fa8 */
extern unsigned char DAT_005b3fac; /* 0x5b3fac */

/* Supplied declaration required: FUN_002f4370. */


void FUN_0050df58(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = 0;
  DAT_005b3fa8 = 0;
  DAT_005b3fac = 1;
  FUN_002f4370(&DAT_005b3fa8,0x2fd02b,0x100000);
  return;
}

} /* extern "C" */
