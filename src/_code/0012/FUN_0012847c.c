/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012847c` (_code @ 0x12847c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00128334(void);
extern int FUN_0013a074(void);
extern unsigned int FUN_0013a0f0(void);


unsigned int FUN_0012847c(unsigned char *param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00128334();
  if ((temp_v0 & 0x80000000) == 0) {
    *param_1 = 0;
  }
  else {
    temp_v1 = FUN_0013a074();
    if (temp_v1 < 0) {
      temp_v0 = FUN_0013a0f0();
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
