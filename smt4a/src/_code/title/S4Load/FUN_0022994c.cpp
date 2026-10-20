/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022994c` (_code @ 0x22994c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_s4Load; /* 0x589154 */


unsigned int FUN_0022994c(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (g_s4Load != 0) {
    temp_v0 = *(unsigned int *)(g_s4Load + 8);
    if (temp_v0 == 2) {
      return 0;
    }
    if ((int)temp_v0 < 3) {
      if (temp_v0 < 2) {
        return 0;
      }
    }
    else if (temp_v0 == 0x1f || temp_v0 == 0x20) {
      return 0;
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
