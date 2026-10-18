/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002627cc` (_code @ 0x2627cc, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


unsigned int FUN_002627cc(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0cec(0x24,0);
  temp_v1 = FUN_002c0cc4();
  temp_v2 = FUN_002c0c74(temp_v0);
  if (param_1 >= temp_v2) {
    temp_v2 = 0xffffffff;
  }
  else {
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + param_1 * 0x90 + 1);
  }
  return temp_v2;
}
