/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019f240` (_code @ 0x19f240, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


int FUN_0019f240(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_001801a4();
  temp_v1 = 0;
  while( 1 ) {
    temp_v2 = temp_v0 + temp_v1 * 2;
    if (*(unsigned short *)(temp_v2 + 0x34) == param_1) {
      return (int)*(char *)(temp_v1 + temp_v0 + 0x44);
    }
    if (*(unsigned short *)(temp_v2 + 0x36) == param_1) break;
    temp_v1 = temp_v1 + 2;
    if (temp_v1 >= 8) {
      return 0;
    }
  }
  return (int)*(char *)(temp_v1 + temp_v0 + 0x45);
}

} /* extern "C" */
