/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025a084` (_code @ 0x25a084, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e278; /* 0x43e278 */

extern int FUN_002bf818(int);


unsigned int FUN_0025a084(void)

{
  char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v2 = *(char *)(DAT_0043e278 + 0xf2b) != '\0';
  temp_v0 = '\0';
  if (temp_v2) {
    temp_v0 = *(char *)(DAT_0043e278 + 0x1c);
  }
  if ((temp_v2 && temp_v0 != '\0') &&
     ((*(char *)(DAT_0043e278 + 0xd6d) != '\0' ||
      (temp_v1 = FUN_002bf818(DAT_0043e278 + 0xd74), temp_v1 == 0)))) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
