/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001eb398` (_code @ 0x1eb398, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044e128; /* 0x44e128 */
extern unsigned char DAT_004c5634; /* 0x4c5634 */
extern unsigned char DAT_004c5818; /* 0x4c5818 */
extern unsigned char DAT_004c5819; /* 0x4c5819 */

extern int FUN_002893d8(void);
extern unsigned int FUN_002bfc24(int, unsigned int, unsigned char, unsigned char);


unsigned int FUN_001eb398(int param_1,unsigned int param_2)

{
  int temp_v0;
  char *pcVar2;
  unsigned char temp_v1;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 != 0) {
    if (DAT_0044e128 >= 4) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)(&DAT_004c5634 + DAT_0044e128 * 0x78);
    }
    if (*pcVar2 == '\x02') {
      return 1;
    }
  }
  else {
    if (param_1 == 1) {
      temp_v1 = DAT_004c5818 | 4;
    }
    else {
      temp_v1 = DAT_004c5818;
      if (param_1 == 2) {
        temp_v1 = 5;
      }
    }
    DAT_0044e128 = FUN_002bfc24(param_1,param_2,DAT_004c5819,temp_v1);
    if (DAT_0044e128 == 0xffffffff) {
      return 1;
    }
  }
  return 0;
}
