/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eca48` (_code @ 0x3eca48, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern unsigned int FUN_001a6f60(int, unsigned int);


short * FUN_003eca48(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  short *psVar5;
  
  if (*(int *)(param_1 + 0x2294) == 0) {
    return (short *)0x0;
  }
  temp_v0 = FUN_001a6f60(*(int *)(param_1 + 0x2294),0);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      psVar5 = (short *)(temp_v1 + temp_v3 * 0x38);
      if (*psVar5 == param_2) {
        return psVar5;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return (short *)0x0;
}

} /* extern "C" */
