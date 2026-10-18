/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036fd64` (_code @ 0x36fd64, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00187180(unsigned int, unsigned char);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


unsigned int FUN_0036fd64(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v6 = 0;
  if (param_1 == 5) {
    temp_v6 = 2;
  }
  else if (param_1 < 5) {
    if (param_1 != 3) {
      temp_v6 = param_1 == 4;
    }
  }
  else if (param_1 == 0x5c) {
    temp_v6 = 4;
  }
  else if (param_1 == 0x5d) {
    temp_v6 = 3;
  }
  temp_v0 = FUN_00187180(10,temp_v6);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  temp_v3 = 0;
  if (temp_v2 != 0) {
    temp_v3 = temp_v2 & 1;
    temp_v4 = 0;
    if (temp_v3 != 0) {
      do {
        if (*(unsigned short *)(temp_v1 + temp_v4 * 0x68 + 8) == param_2) {
          return temp_v4;
        }
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < (int)temp_v3);
    }
  }
  while( 1 ) {
    if (temp_v2 <= temp_v3) {
      return 0;
    }
    temp_v5 = temp_v1 + temp_v3 * 0x68;
    if (*(unsigned short *)(temp_v5 + 8) == param_2) break;
    if (*(unsigned short *)(temp_v5 + 0x70) == param_2) {
      return temp_v3 + 1;
    }
    temp_v3 = temp_v3 + 2;
  }
  return temp_v3;
}
