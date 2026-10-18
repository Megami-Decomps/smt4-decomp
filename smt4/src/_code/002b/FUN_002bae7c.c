/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bae7c` (_code @ 0x2bae7c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00472344; /* 0x472344 */
extern unsigned char DAT_004e9fd8; /* 0x4e9fd8 */

/* Supplied declaration required: FUN_00140ee4. */
extern int FUN_002bfefc(unsigned int *);


unsigned char * FUN_002bae7c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_00472344 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00472344), temp_v0 != 0)) {
    FUN_00140ee4(&DAT_004e9fd8);
  }
  return &DAT_004e9fd8;
}
