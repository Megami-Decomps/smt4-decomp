/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002298a0` (_code @ 0x2298a0, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int *DAT_00435d78; /* 0x435d78 */

extern int FUN_002b6b04(void);


unsigned int FUN_002298a0(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *DAT_00435d78;
  do {
    temp_v0 = temp_v1;
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v1 = *(int *)(temp_v0 + 0x2a4);
  } while ((((*(short *)(temp_v0 + 0x2a2) < 0) || (*(short *)(temp_v0 + 2) != 1)) ||
           ((*(unsigned short *)(temp_v0 + 6) & 1) != 0)) || (temp_v0 = FUN_002b6b04(), temp_v0 == 0));
  return 1;
}

} /* extern "C" */
