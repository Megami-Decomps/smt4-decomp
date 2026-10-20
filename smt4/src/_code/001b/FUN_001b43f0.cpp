/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b43f0` (_code @ 0x1b43f0, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern char s___Government_Office__00448e34[26]; /* 0x448e34 */


char * FUN_001b43f0(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  if (param_1 == 0x18) {
    return *(char **)(param_2 * 4 + 0x44cd58);
  }
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = *(int *)(temp_v0 * 0x5c + 0x448e18);
    if (temp_v1 == -1) {
      return (char *)0x0;
    }
    if ((temp_v1 == param_1) && (*(int *)(temp_v0 * 0x5c + 0x448e1c) == param_2)) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x3e7) {
      return (char *)0x0;
    }
  }
  return s___Government_Office__00448e34 + temp_v0 * 0x5c;
}

} /* extern "C" */
