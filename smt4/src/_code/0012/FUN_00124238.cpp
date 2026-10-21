/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124238` (_code @ 0x124238, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_soundVolumeSetting; /* 0x44e0b0 */

extern int FUN_0012655c(int, unsigned char, unsigned int);
extern int FUN_00126850(int, unsigned char, unsigned int);
extern int FUN_002c1d5c(void);
extern int jyoucyuGetTableEntry(unsigned int);


int FUN_00124238(int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = -1;
  temp_v0 = jyoucyuGetTableEntry(1);
  if ((temp_v0 == 0) && (temp_v0 = FUN_002c1d5c(), temp_v0 == 0)) {
    if (param_1 + 0xfeffff94U < 0x100) {
      temp_v1 = FUN_00126850(param_1,g_soundVolumeSetting,0);
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
      temp_v1 = FUN_0012655c(param_1,g_soundVolumeSetting,0);
    }
  }
  return temp_v1;
}

} /* extern "C" */
