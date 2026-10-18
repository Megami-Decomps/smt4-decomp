/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6f74` (_code @ 0x2b6f74, 0x17c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

/* Supplied declaration required: FUN_0013861c. */
/* Supplied declaration required: FUN_002ae394. */
/* Supplied declaration required: FUN_002ae3f0. */
extern int FUN_002ae464(void);
extern unsigned int FUN_002ae54c(unsigned int);
/* Supplied declaration required: FUN_002aec80. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002b70ca) */

void FUN_002b6f74(int param_1,unsigned int param_2,romwright_code *UNRECOVERED_JUMPTABLE,unsigned int param_4,
                 int param_5)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (param_1 == -1) {
    temp_v0 = 0x3ef;
  }
  else if (param_1 == -2) {
    temp_v0 = 0x3f0;
  }
  else if (param_1 == -3) {
    temp_v0 = 0x3f6;
  }
  else {
    temp_v1 = FUN_002ae464();
    if (temp_v1 != 0) {
      temp_v0 = 0x419;
    }
    else {
      temp_v1 = param_1;
      FUN_002ae3f0();
      if (temp_v1 == 0) {
        temp_v0 = 1000;
      }
      else {
        temp_v0 = FUN_002ae54c(*(unsigned int *)(temp_v1 + 0x28) & 0x1f);
      }
    }
  }
  temp_v2 = 2;
  FUN_002aec80(2,0x13);
  if (param_5 != 0) {
    FUN_002ae394(param_1);
    FUN_0013861c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_002aec80(2,0x13,temp_v2,temp_v3,temp_v0,param_2);
                    /* WARNING: Could not recover jumptable at 0x002b7114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
