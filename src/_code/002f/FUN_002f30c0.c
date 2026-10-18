/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f30c0` (_code @ 0x2f30c0, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_002f30c0(int param_1)

{
  int temp_v0;
  romwright_code *pcVar2;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0x8c);
  while( 1 ) {
    if (temp_v1 == 0) {
      return 0;
    }
    pcVar2 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x90) + 4) * 0x44 + 0x464148);
    if ((pcVar2 != (romwright_code *)0x0) &&
       (temp_v0 = (*pcVar2)(*(unsigned int *)(*(int *)(temp_v1 + 0x90) + 8)), temp_v0 != 0)) break;
    temp_v1 = *(int *)(temp_v1 + 0xac);
  }
  return 1;
}
