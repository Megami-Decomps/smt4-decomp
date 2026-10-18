/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb270` (_code @ 0x2bb270, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_0047235c; /* 0x47235c */


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002bb270(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = (unsigned int)DAT_0047235c >> 8;
  if (DAT_0047235c[1] < 1) {
    return temp_v0;
  }
  temp_v2 = *DAT_0047235c;
  if ((int)temp_v0 < DAT_0047235c[1]) {
    if (temp_v0 != 0) {
      if ((temp_v0 & 1) != 0) {
        temp_v2 = *(int *)(temp_v2 + 0x70);
      }
      for (temp_v1 = (int)temp_v0 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
        temp_v2 = *(int *)(*(int *)(temp_v2 + 0x70) + 0x70);
      }
    }
    if ((temp_v2 != 0) && ((*(unsigned int *)(temp_v2 + 0x90) & 2) != 0)) {
      return 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
