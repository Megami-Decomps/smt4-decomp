/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3378` (_code @ 0x2f3378, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002f33a8; /* 0x2f33a8 */
extern unsigned char DAT_00558b2c; /* 0x558b2c */

/* Supplied declaration required: FUN_002e9300. */


void FUN_002f3378(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558b2c;
  temp_v0 = FUN_002e9300(param_1 + 1,&LAB_002f33a8);
  *(unsigned short *)(temp_v0 + 8) = 0;
  temp_v0 = FUN_002e9300(temp_v0 + 0xc,&LAB_002f33a8);
  *(unsigned short *)(temp_v0 + 8) = 0;
  *(unsigned char *)(temp_v0 + 10) = 0;
  *(unsigned char *)(temp_v0 + 0xb) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned char *)(temp_v0 + 0x10) = 0;
  return;
}
