/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103578` (_code @ 0x103578, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int **, int);
int FUN_002e6e50(int);
int FUN_002e6e5c(int **);

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e50. */
/* Supplied declaration required: FUN_002e6e5c. */


void FUN_00103578(unsigned int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  temp_v1 = *param_2;
  piStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(&piStack_18,temp_v0 + 0x58);
  if (*(char *)(temp_v1 + 0x22) == '\x02') {
    FUN_002e6e50(temp_v1);
  }
  FUN_002e6e5c(&piStack_18);
  return;
}

} /* extern "C" */
