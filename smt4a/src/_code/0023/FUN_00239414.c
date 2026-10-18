/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239414` (_code @ 0x239414, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f58c; /* 0x57f58c */
extern int DAT_0057f590; /* 0x57f590 */
extern int DAT_0057f594; /* 0x57f594 */


unsigned int FUN_00239414(void)

{
  int temp_v0;
  
  if (((*(char *)(DAT_0057f58c + 0x95) == '\0') && (*(char *)(DAT_0057f590 + 0x95) == '\0')) &&
     (*(char *)(DAT_0057f594 + 0x95) == '\0')) {
    temp_v0 = 0;
    while (*(char *)(*(int *)(temp_v0 * 4 + 0x5e2010) + 0x95) == '\0') {
      temp_v0 = temp_v0 + 1;
      if (temp_v0 >= 0xc) {
        return 0;
      }
    }
  }
  return 1;
}
