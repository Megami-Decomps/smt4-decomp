/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221ee0` (_code @ 0x221ee0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

/* Supplied declaration required: FUN_001bced4. */


void FUN_00221ee0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0 [8];
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_001bced4(temp_v0);
  *param_1 = temp_v1;
  param_1[1] = temp_v2;
  param_1[3] = 0;
  param_1[2] = temp_v3;
  return;
}
