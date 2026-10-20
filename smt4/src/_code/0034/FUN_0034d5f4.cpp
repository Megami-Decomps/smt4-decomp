/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034d5f4` (_code @ 0x34d5f4, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a775c(void);
int FUN_002b2368(unsigned int *);
int FUN_002c415c(void);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_004209d0; /* 0x4209d0 */

/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_0034d5f4(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  *param_1 = (unsigned int)&DAT_004209d0;
  param_1[1] = 0;
  temp_v0 = 0;
  do {
    puVar3 = (unsigned int *)param_1[temp_v0 + 3];
    if (puVar3 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar3)(puVar3);
      (**(romwright_code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
      param_1[temp_v0 + 3] = 0;
    }
    puVar3 = (unsigned int *)param_1[temp_v0 + 6];
    if (puVar3 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar3)(puVar3);
      (**(romwright_code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
      param_1[temp_v0 + 6] = 0;
    }
    temp_v1 = temp_v0 + 1;
    param_1[temp_v0 + 3] = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 3);
  if (param_1[2] != 0) {
    FUN_002a775c();
    param_1[2] = 0;
  }
  if (param_1[9] != 0) {
    FUN_002c415c();
    param_1[9] = 0;
  }
  FUN_002b2368(param_1);
  return;
}

} /* extern "C" */
