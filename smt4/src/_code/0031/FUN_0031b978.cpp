/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031b978` (_code @ 0x31b978, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002958f8(int, int);
int FUN_002a780c(unsigned int);
int FUN_002c415c(unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002958f8. */
/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_0031b978(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_002a780c(param_1[temp_v0 + 2]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 7);
  FUN_002a780c(param_1[1]);
  FUN_002a780c(*param_1);
  FUN_002a780c(param_1[0xd]);
  temp_v0 = 0;
  do {
    FUN_002a780c(param_1[temp_v0 + 0x12]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  FUN_002a780c(param_1[0xe]);
  FUN_002a780c(param_1[0x10]);
  FUN_002a780c(param_1[0x23]);
  FUN_002958f8((int)*(short *)(param_1 + 0x22),1);
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
