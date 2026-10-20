/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003309e0` (_code @ 0x3309e0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f65c; /* 0x57f65c */


unsigned int FUN_003309e0(void)

{
  char temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = *(char *)(DAT_0057f65c + 0x1043) != '\0';
  temp_v0 = '\0';
  if (temp_v1) {
    temp_v0 = *(char *)(DAT_0057f65c + 0x1c);
  }
  if ((temp_v1 && temp_v0 != '\0') &&
     ((*(char *)(DAT_0057f65c + 0xdfe) == '\0' || (*(char *)(DAT_0057f65c + 0xf16) == '\0')))) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
