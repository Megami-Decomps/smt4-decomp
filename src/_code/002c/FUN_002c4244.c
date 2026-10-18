/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4244` (_code @ 0x2c4244, 0xb8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short uRam00471b8e; /* 0x471b8e */
extern unsigned char uRam00471bf0; /* 0x471bf0 */

/* Supplied declaration required: FUN_002c43f4. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c4244(int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (*param_1 != -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  temp_v1 = (unsigned int)param_1 ^ param_2;
  while (temp_v1 != 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x5c);
    *(unsigned short *)(temp_v1 + 0x36) = uRam00471b8e;
    FUN_002c43f4();
    temp_v1 = temp_v0;
  }
  switch(uRam00471bf0) {
  default:
    return;
  case 1:
  case 2:
  case 3:
    uRam00471bf0 = 4;
    return;
  }
}
