/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337ba0` (_code @ 0x337ba0, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002ac068(int, unsigned int);
extern int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);


short * FUN_00337ba0(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  short *psVar5;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  if (*(int *)(param_1 + 0x2244) == 0) {
    return (short *)0x0;
  }
  temp_v0 = FUN_002ac068(*(int *)(param_1 + 0x2244),1);
  temp_v1 = FUN_002c0cc4();
  temp_v2 = FUN_002c0c74(temp_v0);
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      psVar5 = (short *)(temp_v1 + temp_v3 * 0x9c);
      temp_v4 = (unsigned int)*psVar5;
      temp_v5 = temp_v4 == param_2;
      if (temp_v5) {
        temp_v4 = (unsigned int)(unsigned short)psVar5[1];
      }
      if (temp_v5 && temp_v4 == param_3) {
        return psVar5;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return (short *)0x0;
}

} /* extern "C" */
