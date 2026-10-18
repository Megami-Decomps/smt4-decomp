/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a4900` (_code @ 0x3a4900, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_005b3fe4; /* 0x5b3fe4 */
extern int DAT_005b3fe8; /* 0x5b3fe8 */

/* Supplied declaration required: FUN_001664bc. */
/* Supplied declaration required: FUN_00167ba0. */
/* Supplied declaration required: FUN_003c8538. */


void FUN_003a4900(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_00167ba0();
  temp_v0 = DAT_005b3fe4;
  *(unsigned int *)(DAT_005b3fe4 + DAT_005b3fe8 * 4) = param_1;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0103;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  FUN_001664bc();
  FUN_003c8538(0);
  return;
}
