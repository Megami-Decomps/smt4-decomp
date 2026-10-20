/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047e430` (_code @ 0x47e430, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);
int FUN_0019c364(void);
int FUN_00342010(void);
int FUN_003d54f8(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_003d54f8. */


void FUN_0047e430(unsigned int *param_1,unsigned char param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  *(unsigned char *)(param_1 + 2) = param_2;
  param_1[1] = 0xc;
  *param_1 = 0;
  if (param_1[3] != 0) {
    FUN_0019a5a0();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_0019a5a0();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    FUN_0019c364();
    param_1[5] = 0;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_00342010();
  }
  param_1[1] = 0xd;
  temp_v0 = FUN_0013def0(0);
  if (temp_v0 == 3) {
    FUN_003d54f8(0,5);
  }
  temp_v0 = FUN_0013def0(1);
  if (temp_v0 == 3) {
    FUN_003d54f8(1,5);
    return;
  }
  return;
}

} /* extern "C" */
