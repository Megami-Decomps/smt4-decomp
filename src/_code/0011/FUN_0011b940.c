/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b940` (_code @ 0x11b940, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

/* Supplied declaration required: FUN_001272fc. */
/* Supplied declaration required: FUN_002b5c2c. */
extern int FUN_002bb99c(unsigned int, int *, unsigned int);


void FUN_0011b940(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int **ppiVar1;
  int temp_v0;
  unsigned char temp_v1 [12];
  int *temp_v2;
  
  FUN_002b5c2c(temp_v1,0,param_2);
  ppiVar1 = &temp_v2;
  FUN_001272fc(ppiVar1,temp_v1);
  if ((-1 < (int)ppiVar1) && (temp_v0 = FUN_002bb99c(param_1,temp_v2,0), temp_v0 < 0)) {
    (**(romwright_code **)(*temp_v2 + 0x30))();
  }
  return;
}
