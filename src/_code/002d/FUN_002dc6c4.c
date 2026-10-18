/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc6c4` (_code @ 0x2dc6c4, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00249950. */
extern int FUN_0029abc0(unsigned int);
extern int FUN_0029ac70(unsigned int, unsigned int);


void FUN_002dc6c4(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((int)param_1[1] < 0) {
    temp_v0 = FUN_0029ac70(*param_1,1);
  }
  else {
    temp_v0 = FUN_0029abc0(*param_1);
  }
  if ((int)param_2[1] < 0) {
    temp_v1 = FUN_0029ac70(*param_2,1);
  }
  else {
    temp_v1 = FUN_0029abc0(*param_2);
  }
  if (temp_v0 == temp_v1) {
    FUN_00249950(param_1,param_2);
    return;
  }
  return;
}
