/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc2d4` (_code @ 0x3bc2d4, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


int FUN_003bc2d4(unsigned int param_1,unsigned char *param_2,int param_3)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char *pbVar6;
  int temp_v5;
  
  temp_v1 = FUN_002c0ec4(2,0);
  temp_v2 = FUN_002c0e9c();
  temp_v3 = FUN_002c0e4c(temp_v1);
  temp_v5 = 0;
  temp_v4 = 0;
  if (temp_v4 < temp_v3) {
    do {
      pbVar6 = (unsigned char *)(temp_v2 + temp_v4 * 0xa0);
      temp_v0 = *pbVar6;
      if (temp_v0 == param_1) {
        pbVar6 = (unsigned char *)(unsigned int)pbVar6[1];
      }
      if (temp_v0 == param_1 && pbVar6 == param_2) {
        if (temp_v5 == param_3) {
          return temp_v2 + temp_v4 * 0xa0;
        }
        temp_v5 = temp_v5 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v3);
  }
  return 0;
}
