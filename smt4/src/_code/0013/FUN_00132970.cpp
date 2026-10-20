/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00132970` (_code @ 0x132970, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


int FUN_00132970(unsigned int param_1,unsigned char *param_2)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char *pbVar6;
  
  temp_v1 = FUN_002c0cec(2,3);
  temp_v2 = FUN_002c0cc4();
  temp_v3 = FUN_002c0c74(temp_v1);
  temp_v4 = 0;
  if (temp_v4 < temp_v3) {
    do {
      pbVar6 = (unsigned char *)(temp_v2 + temp_v4 * 2);
      temp_v0 = *pbVar6;
      if (temp_v0 == param_1) {
        pbVar6 = (unsigned char *)(unsigned int)pbVar6[1];
      }
      if (temp_v0 == param_1 && pbVar6 == param_2) {
        return temp_v4;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v3);
  }
  return 0;
}

} /* extern "C" */
