/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00473acc` (_code @ 0x473acc, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00161a10(void);
int FUN_00180008(int);
int FUN_001b576c(int *, int, unsigned int);
int FUN_001b5acc(int *);
int FUN_00428a58(int *, int, int, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_00161a10. */
/* Supplied declaration required: FUN_00180008. */
/* Supplied declaration required: FUN_001b576c. */
/* Supplied declaration required: FUN_001b5acc. */
extern int FUN_001d25ec(int *);
/* Supplied declaration required: FUN_00428a58. */


void FUN_00473acc(int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int iStack_2c;
  unsigned int uStack_28;
  int temp_v2;
  int iStack_1c;
  int temp_v3;
  int iStack_14;
  
  FUN_00161a10();
  FUN_001b5acc(&temp_v2);
  iStack_2c = param_2 + 0x18;
  temp_v1 = param_2 + 4;
  uStack_28 = 1;
  FUN_00428a58(&temp_v3,param_2 + 0x7c,param_2 + 0x80,param_2 + 0x10);
  temp_v2 = temp_v3;
  iStack_1c = iStack_14;
  temp_v0 = FUN_001d25ec(&temp_v2);
  if (-1 < temp_v0) {
    FUN_001b576c(&temp_v1,param_2 + 0x84,*(unsigned int *)(param_2 + 0x80));
    temp_v2 = temp_v1;
    iStack_1c = iStack_2c;
    temp_v0 = FUN_001d25ec(&temp_v2);
    if (-1 < temp_v0) {
      *param_1 = temp_v2;
      param_1[1] = iStack_1c;
      return;
    }
  }
  FUN_00180008(0);
  *param_1 = temp_v2;
  param_1[1] = iStack_1c;
  return;
}

} /* extern "C" */
