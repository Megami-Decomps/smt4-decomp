/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003399ec` (_code @ 0x3399ec, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002ac2f4(int, unsigned int);
extern int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);


int * FUN_003399ec(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x2244) == 0) {
    return (int *)0x0;
  }
  temp_v0 = FUN_002ac2f4(*(int *)(param_1 + 0x2244),2);
  temp_v1 = FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v0);
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      piVar5 = (int *)(temp_v1 + temp_v3 * 0x14);
      if (*piVar5 == param_2) {
        return piVar5;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return (int *)0x0;
}
