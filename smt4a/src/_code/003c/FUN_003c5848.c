/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c5848` (_code @ 0x3c5848, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f20c; /* 0x57f20c */
extern unsigned int *DAT_0057f210; /* 0x57f210 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);


void FUN_003c5848(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f20c;
  if ((DAT_0057f210 != (unsigned int *)0x0) && (temp_v1 = FUN_00163e40(*DAT_0057f210), temp_v1 != 0)) {
    FUN_001631d0(*DAT_0057f210,0);
  }
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 8) = 3;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  return;
}
