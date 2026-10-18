/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122a10` (_code @ 0x122a10, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_001038f2(int, int, unsigned int);
/* Supplied declaration required: FUN_002e7908. */


void FUN_00122a10(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  piVar2 = &temp_v2;
  temp_v1 = param_3;
  if (param_3 != 0) {
    if ((*(int *)(param_2 + 0x11c) != 0) && (*(char *)(*(int *)(param_2 + 0x11c) + 0x22) != '\x05'))
    {
      temp_v2 = -0x7ffefffc;
    }
    else {
      temp_v2 = param_4;
      temp_v0 = FUN_001038f2(param_2,param_3,*(unsigned int *)(param_2 + 0x78));
      if (temp_v0 != 0) {
        temp_v1 = 0x10001;
        piVar2 = &temp_v1;
      }
      else {
        temp_v2 = -0x7ffefff3;
      }
    }
  }
  else {
    temp_v2 = -0x7ffefff6;
  }
  FUN_002e7908(param_1,piVar2);
  return;
}
