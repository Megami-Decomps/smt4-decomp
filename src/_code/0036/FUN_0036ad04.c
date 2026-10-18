/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036ad04` (_code @ 0x36ad04, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_00151500(); /* 0x151500 */
extern unsigned char LAB_00155650; /* 0x155650 */

/* Supplied declaration required: FUN_003f7344. */


void FUN_0036ad04(int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  romwright_code *pcVar1;
  int temp_v0;
  
  if ((*(char *)((int)param_1 + 0x59) == '\0') && (param_1[0x19] != param_1[0x1a])) {
    FUN_003f7344(param_1 + 0x18,*(unsigned int *)(param_2 + 0x18));
  }
  param_1[0x15] = param_2;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = *(int *)(param_2 + 0x14);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    pcVar1 = (romwright_code *)&LAB_00155650;
  }
  else {
    if (*(char *)(param_2 + 0x10) != '\x01') {
      *(unsigned char *)(param_1 + 0x16) = 1;
      temp_v0 = param_1[2];
      (**(romwright_code **)(*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0036ada8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v0);
      return;
    }
    pcVar1 = FUN_00151500;
  }
  param_1[0x13] = (int)pcVar1;
  *(unsigned char *)(param_1 + 0x16) = 1;
  temp_v0 = param_1[2];
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v0);
  return;
}
