/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025a2bc` (_code @ 0x25a2bc, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e278; /* 0x43e278 */

extern int FUN_002bf9f0(int);


unsigned int FUN_0025a2bc(void)

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
      (temp_v1 = FUN_002bf9f0(DAT_0043e278 + 0xd74), temp_v1 == 0)))) {
    return 0;
  }
  return 1;
}
