/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d438` (_code @ 0x37d438, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_gauntletAppMenu; /* 0x57f238 */


unsigned int FUN_0037d438(void)

{
  char temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = g_gauntletAppMenu + 0x200;
  temp_v0 = *(char *)(g_gauntletAppMenu + 0x2b4);
  temp_v2 = temp_v0 == '\0';
  if (temp_v2) {
    temp_v0 = *(char *)(g_gauntletAppMenu + 0x2b5);
  }
  if (temp_v2 && temp_v0 == '\0') {
    temp_v2 = *(char *)(g_gauntletAppMenu + 0x2b6) == '\0';
    if (temp_v2) {
      temp_v1 = (unsigned int)*(unsigned char *)(g_gauntletAppMenu + 0x2b7);
    }
    if (temp_v2 && temp_v1 == 0) {
      return temp_v1;
    }
  }
  return 1;
}

} /* extern "C" */
