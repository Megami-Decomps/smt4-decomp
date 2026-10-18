/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003137c4` (_code @ 0x3137c4, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_00269404. */
/* Supplied declaration required: FUN_00269594. */
extern int FUN_002c34a4(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_00302494. */


void FUN_003137c4(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_1[0x27] != 0) {
    FUN_00269594();
  }
  param_2 = param_2 & 0xffff;
  FUN_00269404(param_2,*param_1,param_3);
  param_1[0x27] = param_2;
  if (param_1[0x29] != 0) {
    FUN_002c4360();
  }
  temp_v2 = *(unsigned int *)(param_1[0x27] + 8);
  temp_v0 = FUN_002c34a4(0x10000,0x100,0,temp_v2 * 0x1c,0x10,1);
  param_1[0x29] = temp_v0;
  temp_v1 = 0;
  param_1[0x28] = temp_v0;
  if (temp_v2 != 0) {
    do {
      FUN_00302494(param_1,temp_v0);
      temp_v1 = temp_v1 + 1;
      temp_v0 = temp_v0 + 0x1c;
    } while (temp_v1 < temp_v2);
  }
  return;
}
