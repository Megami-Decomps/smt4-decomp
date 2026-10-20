/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352fd8` (_code @ 0x352fd8, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ba81c(...);

extern int DAT_00471a54; /* 0x471a54 */
extern unsigned char DAT_004e675c; /* 0x4e675c */

/* Supplied declaration required: FUN_002ba81c. */


void FUN_00352fd8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ba81c(&DAT_004e675c + DAT_00471a54 * 0x140,param_1,0x40);
  FUN_002ba81c(DAT_00471a54 * 0x140 + 0x4e679c,param_2,0x40);
  FUN_002ba81c(DAT_00471a54 * 0x140 + 0x4e67dc,param_3,0x40);
  FUN_002ba81c(DAT_00471a54 * 0x140 + 0x4e681c,param_4,0x40);
  FUN_002ba81c(DAT_00471a54 * 0x140 + 0x4e685c,param_5,0x40);
  DAT_00471a54 = DAT_00471a54 + 1;
  return;
}

} /* extern "C" */
