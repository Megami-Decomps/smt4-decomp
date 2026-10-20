/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00349af0` (_code @ 0x349af0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_partyPanel; /* 0x57f268 */


char FUN_00349af0(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (g_partyPanel != 0) {
    temp_v0 = *(char *)(g_partyPanel + 0x42);
  }
  if (g_partyPanel != 0 && temp_v0 != '\0') {
    temp_v0 = '\x01';
  }
  return temp_v0;
}

} /* extern "C" */
