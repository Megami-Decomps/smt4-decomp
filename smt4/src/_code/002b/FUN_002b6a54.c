/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6a54` (_code @ 0x2b6a54, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned char);


int FUN_002b6a54(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v3 = 0;
  if (param_1 == 5) {
    temp_v3 = 2;
  }
  else if (param_1 < 6) {
    if (param_1 != 3) {
      temp_v3 = param_1 == 4;
    }
  }
  else if (param_1 == 0x5c) {
    temp_v3 = 4;
  }
  else if (param_1 == 0x5d) {
    temp_v3 = 3;
  }
  temp_v0 = FUN_002c0cec(10,temp_v3);
  temp_v1 = FUN_002c0cc4();
  temp_v2 = FUN_002c0c74(temp_v0);
  if (param_2 < temp_v2) {
    temp_v1 = temp_v1 + param_2 * 0x5c;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
