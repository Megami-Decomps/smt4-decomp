/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c45b8` (_code @ 0x2c45b8, 0x128 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004e3cf4; /* 0x4e3cf4 */

/* Supplied declaration required: FUN_002c43f4. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c45b8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int unaff_r5;
  
  if (param_1 == 0) {
    return;
  }
  temp_v1 = *(unsigned int *)(DAT_004e3cf4 + (param_1 >> 0x14) * 8);
  if (temp_v1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( 1 );
  }
  if (*(unsigned int *)(temp_v1 + 0x24) == (param_1 & 0xfffff)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  temp_v1 = temp_v1 ^ param_2;
  while (temp_v1 != 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x5c);
    *(unsigned short *)(temp_v1 + 0x36) = *(unsigned short *)(unaff_r5 + 0x36);
    FUN_002c43f4();
    temp_v1 = temp_v0;
  }
  switch(*(unsigned char *)(unaff_r5 + 0x98)) {
  default:
    return;
  case 1:
  case 2:
  case 3:
    *(unsigned char *)(unaff_r5 + 0x98) = 4;
    return;
  }
}
