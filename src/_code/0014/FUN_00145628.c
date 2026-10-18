/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145628` (_code @ 0x145628, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004729b8; /* 0x4729b8 */
extern signed char DAT_004729b9; /* 0x4729b9 */
extern unsigned int DAT_004729c4; /* 0x4729c4 */
extern unsigned int DAT_004729c8; /* 0x4729c8 */


void FUN_00145628(unsigned int param_1,unsigned int param_2)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_004729b8 != '\0') {
    temp_v0 = DAT_004729b9;
  }
  if (DAT_004729b8 != '\0' && temp_v0 != '\0') {
    DAT_004729c4 = param_1;
    DAT_004729c8 = param_2;
  }
  return;
}
