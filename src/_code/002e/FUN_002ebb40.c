/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebb40` (_code @ 0x2ebb40, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_004729e0; /* 0x4729e0 */
extern int DAT_004729e4; /* 0x4729e4 */

/* Supplied declaration required: FUN_002b7354. */
/* Supplied declaration required: FUN_002b737c. */


void FUN_002ebb40(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002b737c();
  temp_v0 = DAT_004729e0;
  *(unsigned int *)(DAT_004729e0 + DAT_004729e4 * 4) = 1;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0111;
  DAT_004729e4 = DAT_004729e4 + 2;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) = 1;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0110;
  DAT_004729e4 = DAT_004729e4 + 2;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) = param_1;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0x100e0;
  DAT_004729e4 = DAT_004729e4 + 2;
  FUN_002b7354();
  return;
}
