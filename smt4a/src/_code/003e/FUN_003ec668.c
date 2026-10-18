/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec668` (_code @ 0x3ec668, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern unsigned int FUN_001a6f60(void);


int * FUN_003ec668(int param_1,unsigned int param_2,int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x2294) == 0) {
    return (int *)0x0;
  }
  temp_v0 = FUN_001a6f60();
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      piVar5 = (int *)(temp_v1 + temp_v3 * 0x68);
      if (*piVar5 == param_3) {
        return piVar5;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return (int *)0x0;
}
