/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030bbc8` (_code @ 0x30bbc8, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int btlGetMainState(void);
extern unsigned int scrGetArg(void);


unsigned int FUN_0030bbc8(void)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  temp_v2 = 4;
  do {
    puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v2 * 0x288);
    temp_v3 = *puVar3;
    if (((((temp_v3 & 1) != 0) && ((temp_v3 & 0x40) == 0)) && ((temp_v3 & 0x10) != 0)) &&
       (*(unsigned short *)((int)puVar3 + 0xce) == temp_v0)) {
      *puVar3 = *puVar3 | 0x400000;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x36);
  return 1;
}

} /* extern "C" */
