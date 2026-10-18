/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039474c` (_code @ 0x39474c, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044e0b0; /* 0x44e0b0 */

extern int FUN_0012655c(int, unsigned char, unsigned int);
extern int FUN_00126850(int, unsigned char, unsigned int);
extern int FUN_002c1d5c(void);
extern int FUN_002c564c(unsigned int);


int FUN_0039474c(int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = -1;
  temp_v0 = FUN_002c564c(1);
  if ((temp_v0 == 0) && (temp_v0 = FUN_002c1d5c(), temp_v0 == 0)) {
    if (param_1 + 0xfeffff94U < 0x100) {
      temp_v1 = FUN_00126850(param_1,DAT_0044e0b0,0);
      temp_v1 = temp_v1 + 100000;
    }
    else if (param_1 + 0xfefffe94U < 0xfc) {
      switch(param_2) {
      case 1:
        break;
      case 2:
        break;
      case 4:
        break;
      case 5:
      }
      temp_v1 = FUN_0012655c(param_1,DAT_0044e0b0,0);
    }
  }
  return temp_v1;
}
