/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bdb48` (_code @ 0x2bdb48, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern int DAT_004c632c; /* 0x4c632c */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bdb48(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = DAT_004c632c;
  temp_v2 = DAT_004652a0 - *(int *)(DAT_004c632c + 4);
  temp_v3 = (temp_v2 & 8) != 0;
  temp_v1 = DAT_004652a0;
  if (temp_v3) {
    temp_v1 = temp_v2 + 0x18;
  }
  *(unsigned int *)(DAT_004c632c + 0xc) = temp_v2;
  if (temp_v3) {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v2 + 0x20;
    if (temp_v1 < DAT_004652a4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
