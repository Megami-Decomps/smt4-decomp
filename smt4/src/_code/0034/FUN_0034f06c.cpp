/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f06c` (_code @ 0x34f06c, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034f0fc(int, int, int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0034f0fc. */
extern int FUN_0034f768(void);


void FUN_0034f06c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0034f768();
  if (((temp_v0 != 0) &&
      (((*(int *)(param_1 + 8) == 0 ||
        (temp_v0 = param_1,
        FUN_0034f0fc(param_1,*(int *)(param_1 + 8),param_1 + 0x10,param_1 + 0x40,param_1 + 0x1c),
        temp_v0 != 0)) && (temp_v0 = *(int *)(param_1 + 0xc), temp_v0 != 0)))) &&
     ((*(int *)(temp_v0 + 8) == 6 &&
      (temp_v1 = param_1, FUN_0034f0fc(param_1,temp_v0,param_1 + 0x18,param_1 + 0x80,param_1 + 0x24),
      temp_v1 != 0)))) {
    *(unsigned int *)(param_1 + 0x30) = 0x401;
  }
  return;
}

} /* extern "C" */
