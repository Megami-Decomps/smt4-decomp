/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a580` (_code @ 0x28a580, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */

extern unsigned int FUN_002958bc(void);


unsigned int FUN_0028a580(void)

{
  char temp_v0;
  unsigned int temp_v1;
  
  if (DAT_0043dcf0 != 0) {
    if (*(int *)(DAT_0043dcf0 + 0x1c) != 0x17) {
      return 0;
    }
    temp_v0 = *(char *)(DAT_0043dcf0 + 0x66c);
    if ((temp_v0 != '\x01' && temp_v0 != '\x06') && ((temp_v0 != '\a' && temp_v0 != '\r') && temp_v0 != '\f'))
    {
      temp_v1 = FUN_002958bc();
      return temp_v1;
    }
  }
  return 1;
}
