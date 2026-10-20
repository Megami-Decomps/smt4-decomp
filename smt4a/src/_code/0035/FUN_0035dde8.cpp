/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035dde8` (_code @ 0x35dde8, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_unite; /* 0x57f290 */

extern int gameFlagIsSet(unsigned int);


unsigned int FUN_0035dde8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (g_unite != 0) {
    if ((((*(int *)(g_unite + 0x400) == 0x28) || (temp_v0 = gameFlagIsSet(0x458), temp_v0 != 0)) ||
        (g_unite == 0)) ||
       ((*(int *)(g_unite + 0x434) != 0x1a || (*(char *)(g_unite + 0x430) == '\0')))) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
