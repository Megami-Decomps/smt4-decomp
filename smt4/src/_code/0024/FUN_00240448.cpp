/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240448` (_code @ 0x240448, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002522f8(unsigned char [128], int, unsigned char *);
int memClear(unsigned char [128], int);

extern unsigned char LAB_002404a8; /* 0x2404a8 */
extern unsigned char LAB_002404c8; /* 0x2404c8 */

/* Supplied declaration required: FUN_002522f8. */
/* Supplied declaration required: memClear. */


unsigned char * FUN_00240448(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [128];
  
  memClear(temp_v0,0x80);
  if (*(int *)(param_1 + 0xc0) >= 0) {
    FUN_002522f8(temp_v0,0x80,&LAB_002404a8);
  }
  else if (-1 < *(int *)(param_1 + 0xc4)) {
    FUN_002522f8(temp_v0,0x80,&LAB_002404c8);
  }
  return temp_v0;
}

} /* extern "C" */
