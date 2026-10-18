/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc1a8` (_code @ 0x2fc1a8, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002fc228; /* 0x2fc228 */
extern signed char DAT_004640e8; /* 0x4640e8 */

/* Supplied declaration required: FUN_0028c854. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c415c. */
extern unsigned int FUN_002c5c14(unsigned char *, unsigned int, unsigned int, unsigned int);


void FUN_002fc1a8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [260];
  
  if (DAT_004640e8 == '\0') {
    temp_v2 = 0;
    do {
      FUN_002be624(temp_v3,&LAB_002fc228,temp_v2 + 1);
      temp_v0 = FUN_002c5c14(temp_v3,0,1,0x80);
      temp_v1 = temp_v0;
      FUN_0028c854();
      *(unsigned int *)(temp_v2 * 4 + 0x4d96f0) = temp_v1;
      FUN_002c415c(temp_v0);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x16);
    DAT_004640e8 = '\x01';
  }
  return;
}
