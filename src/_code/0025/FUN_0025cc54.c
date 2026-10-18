/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025cc54` (_code @ 0x25cc54, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002b63ac(void);
extern int FUN_002c09d0(unsigned int);


unsigned int FUN_0025cc54(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_002c09d0(0x410);
  if (temp_v0 != 0) {
    temp_v1 = FUN_002b63ac();
    temp_v2 = *(short *)(temp_v1 + 2) != 0;
    if (temp_v2) {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v1 + 4);
    }
    if (temp_v2 && temp_v1 != 0) {
      return 1;
    }
  }
  return 0;
}
