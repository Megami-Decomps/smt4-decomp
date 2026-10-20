/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293ac0` (_code @ 0x293ac0, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e144; /* 0x44e144 */


unsigned int FUN_00293ac0(void)

{
  char temp_v0;
  
  temp_v0 = *(char *)(DAT_0044e144 + 0x1e67);
  if ((temp_v0 == '\x03' || temp_v0 == '\x05') || ((temp_v0 == '\x06' || temp_v0 == '\b') || temp_v0 == '\t'))
  {
    return 1;
  }
  temp_v0 = *(char *)(DAT_0044e144 + 0x1e66);
  if (temp_v0 != '\0') {
    if (((temp_v0 != '\x06' && temp_v0 != '\b') && (temp_v0 != '\t' && temp_v0 != '\n')) &&
       (temp_v0 != '\v' && temp_v0 != '\a')) {
      if (temp_v0 == '\x0e') {
        return 1;
      }
      if (*(char *)(DAT_0044e144 + 0x12f1) != '\0') {
        return 2;
      }
      return 4;
    }
  }
  else if (*(char *)(DAT_0044e144 + 0x12f1) != '\0') {
    return 2;
  }
  return 3;
}

} /* extern "C" */
