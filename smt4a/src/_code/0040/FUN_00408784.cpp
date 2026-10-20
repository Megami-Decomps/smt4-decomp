/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00408784` (_code @ 0x408784, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164b5c(int, int, unsigned int, unsigned int, unsigned int, int);
int FUN_001677c0(void);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */


void FUN_00408784(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *param_1;
  temp_v1 = param_1[1];
  FUN_001677c0();
  FUN_00164b5c(2,0x2b,param_1[3],temp_v0,temp_v1,2);
  FUN_001677c0();
  return;
}

} /* extern "C" */
