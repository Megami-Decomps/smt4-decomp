/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022afc4` (_code @ 0x22afc4, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152ed8(int);
int FUN_0028c640(unsigned int, int, int);
int FUN_003416bc(int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_00152ed8. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_003416bc. */


void FUN_0022afc4(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned char *)(param_1 + 0x14) = 0;
  FUN_00152ed8(param_1);
  FUN_003416bc(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x15) != '\0') {
    *(unsigned int *)(param_1 + 0x1658) = *(unsigned int *)(param_1 + 0x1664);
    *(unsigned int *)(param_1 + 0x165c) = *(unsigned int *)(param_1 + 0x1668);
    *(unsigned int *)(param_1 + 0x1660) = *(unsigned int *)(param_1 + 0x166c);
    FUN_0028c640(*(unsigned int *)(*(int *)(param_1 + 0x20) + 8),0,param_1 + 0x1658);
    return;
  }
  return;
}

} /* extern "C" */
