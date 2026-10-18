/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001283a0` (_code @ 0x1283a0, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00128258(void);
extern int FUN_001399e4(void);
extern unsigned int FUN_00139a60(void);


unsigned int FUN_001283a0(unsigned char *param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00128258();
  if ((temp_v0 & 0x80000000) == 0) {
    *param_1 = 0;
  }
  else {
    temp_v1 = FUN_001399e4();
    if (temp_v1 < 0) {
      temp_v0 = FUN_00139a60();
      if ((temp_v0 & 0x80000000) == 0) {
        *param_1 = 2;
        temp_v2 = 0;
      }
      else {
        temp_v2 = 0xd90103ea;
      }
      return temp_v2;
    }
    *param_1 = 1;
  }
  return 0;
}
