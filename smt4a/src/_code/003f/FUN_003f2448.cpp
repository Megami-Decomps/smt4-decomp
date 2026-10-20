/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2448` (_code @ 0x3f2448, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int FUN_0019acdc(unsigned short, unsigned int);
extern int btlUnitGet(unsigned int);


int FUN_003f2448(void)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = btlUnitGet(g_btlScriptUnit);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 0x20);
  }
  if ((temp_v0 != 0 && temp_v1 != 0) && (piVar1 = (int *)(temp_v1 + 0x400), temp_v1 = 0, *piVar1 != 0)) {
    temp_v1 = FUN_0019acdc(*(unsigned short *)(*piVar1 + 300),0);
    if (temp_v1 == 2) {
      temp_v1 = 1;
    }
    else {
      temp_v1 = 0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
