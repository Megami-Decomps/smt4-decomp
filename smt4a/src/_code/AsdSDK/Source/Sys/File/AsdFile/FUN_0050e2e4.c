/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050e2e4` (_code @ 0x50e2e4, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_005b3fc0; /* 0x5b3fc0 */
extern unsigned int DAT_005b3fd4; /* 0x5b3fd4 */
extern unsigned int DAT_005b3fd8; /* 0x5b3fd8 */

/* Supplied declaration required: FUN_002f4370. */


void FUN_0050e2e4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = 0;
  *(unsigned char *)(param_1 + 1) = 1;
  DAT_005b3fc0 = 0;
  DAT_005b3fd4 = 0;
  DAT_005b3fd8 = 0;
  FUN_002f4370(&DAT_005b3fd4,0x42cd08,0x100000);
  return;
}
