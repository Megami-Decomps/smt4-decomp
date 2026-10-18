/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289870` (_code @ 0x289870, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002a755c. */
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002c4360. */


void FUN_00289870(unsigned int *param_1,unsigned char param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  *(unsigned char *)(param_1 + 2) = param_2;
  param_1[1] = 0xb;
  *param_1 = 0;
  if (param_1[3] != 0) {
    FUN_002c4360();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_002c4360();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    FUN_002a755c();
    param_1[5] = 0;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_0028d974();
  }
  param_1[1] = 0xc;
  temp_v0 = FUN_002c2bd0(0);
  if (temp_v0 == 3) {
    FUN_002a0678(0,5);
  }
  temp_v0 = FUN_002c2bd0(1);
  if (temp_v0 == 3) {
    FUN_002a0678(1,5);
    return;
  }
  return;
}
