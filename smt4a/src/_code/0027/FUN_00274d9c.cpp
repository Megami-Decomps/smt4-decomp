/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00274d9c` (_code @ 0x274d9c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int *DAT_0058104c; /* 0x58104c */
extern int DAT_005f1908; /* 0x5f1908 */

extern int FUN_002d8b58(unsigned int);


void FUN_00274d9c(void)

{
  int *piVar1;
  int temp_v0;
  
  piVar1 = DAT_0058104c;
  if (DAT_005f1908 >= 18000) {
    if (*DAT_0058104c == 0) {
      DAT_0058104c[6] = 0xad;
      *piVar1 = 0xb;
      piVar1[1] = 0;
      temp_v0 = FUN_002d8b58(2);
      DAT_0058104c[5] = temp_v0;
      DAT_005f1908 = 0;
    }
  }
  return;
}

} /* extern "C" */
