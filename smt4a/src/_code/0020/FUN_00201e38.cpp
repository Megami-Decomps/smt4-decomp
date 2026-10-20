/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201e38` (_code @ 0x201e38, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fb4; /* 0x588fb4 */

extern int FUN_00143b58(int, unsigned char, unsigned int);
extern int FUN_001448a8(int, unsigned char, unsigned int);
extern int FUN_00162ea4(void);
extern int jyoucyuGetTableEntry(unsigned int);


int FUN_00201e38(int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = -1;
  temp_v0 = jyoucyuGetTableEntry(1);
  if ((temp_v0 == 0) && (temp_v0 = FUN_00162ea4(), temp_v0 == 0)) {
    if (param_1 + 0xfeffff84U < 0x191) {
      temp_v1 = FUN_001448a8(param_1,DAT_00588fb4,0);
      temp_v1 = temp_v1 + 100000;
    }
    else if (param_1 + 0xfefffdf3U < 0x106) {
      switch(param_2) {
      case 1:
        break;
      case 2:
        break;
      case 4:
        break;
      case 5:
      }
      temp_v1 = FUN_00143b58(param_1,DAT_00588fb4,0);
    }
  }
  return temp_v1;
}

} /* extern "C" */
