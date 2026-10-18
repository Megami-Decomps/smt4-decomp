/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bc2ec` (_code @ 0x1bc2ec, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001a0ca4(void);
extern int FUN_001a0cbc(unsigned int, unsigned int);
extern int FUN_001a0d40(void);
extern unsigned int FUN_001a0d58(void);
extern int FUN_001c6da0(unsigned int, unsigned int);


int FUN_001bc2ec(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001c6da0(param_1,1);
  if (temp_v0 == 0) {
    if ((param_1 + 0xe1000000 < 0x600000) || (param_1 == 0x1f600000)) {
      temp_v0 = param_1 + 0xf9000000;
    }
    else {
      temp_v0 = FUN_001a0ca4();
      if ((temp_v0 == 0) || (temp_v0 = FUN_001a0cbc(param_1,1), temp_v0 == 0)) {
        temp_v1 = FUN_001a0d58();
        temp_v0 = FUN_001a0d40();
        if ((temp_v1 != 0) && ((temp_v1 <= param_1 && (param_1 < temp_v0 + temp_v1)))) {
          if (temp_v1 >= 0x30000000) {
            temp_v0 = param_1 + 0xf0000000;
          }
          else {
            temp_v0 = param_1 + 0xc000000;
          }
          return temp_v0;
        }
        return 0;
      }
    }
  }
  return temp_v0;
}
