/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140194` (_code @ 0x140194, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00148434; /* 0x148434 */

extern int FUN_0014dbc4(unsigned int);
/* Supplied declaration required: FUN_002b5058. */
/* Supplied declaration required: FUN_002c68bc. */


int FUN_00140194(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002b5058();
  temp_v0 = FUN_0014dbc4(param_1);
  FUN_002c68bc(temp_v0 - 0x38,&LAB_00148434,0xc,3);
  return temp_v0 - 0x38;
}
