/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003efa38` (_code @ 0x3efa38, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001028b8(unsigned char [128], int, unsigned char *);
int sysMemClear(unsigned char [128], int);

extern unsigned char LAB_003efa98; /* 0x3efa98 */
extern unsigned char LAB_003efab8; /* 0x3efab8 */

/* Supplied declaration required: FUN_001028b8. */
/* Supplied declaration required: sysMemClear. */


unsigned char * FUN_003efa38(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [128];
  
  sysMemClear(temp_v0,0x80);
  if (*(int *)(param_1 + 0xec) >= 0) {
    FUN_001028b8(temp_v0,0x80,&LAB_003efa98);
  }
  else if (-1 < *(int *)(param_1 + 0xf0)) {
    FUN_001028b8(temp_v0,0x80,&LAB_003efab8);
  }
  return temp_v0;
}

} /* extern "C" */
