/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380928` (_code @ 0x380928, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002b777c. */
extern unsigned int FUN_002bb360(void);
/* Supplied declaration required: FUN_002bf774. */
/* Supplied declaration required: FUN_002c3628. */
/* Supplied declaration required: FUN_00379c24. */
/* Supplied declaration required: FUN_0037a3fc. */
/* Supplied declaration required: FUN_0037bc48. */


void FUN_00380928(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(char *)((int)param_1 + 0x45d) != '\0') {
    *(unsigned char *)((int)param_1 + 0x45d) = 0;
    if ((char)param_1[0x117] == '\x01') {
      temp_v0 = FUN_002bb360();
      FUN_0037a3fc(temp_v0,param_1 + 0x66);
      FUN_002c3628(param_1 + 0x69);
    }
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    *(unsigned char *)((int)param_1 + 0x45e) = 0;
    FUN_00379c24(param_1);
    FUN_0037bc48(param_1 + 0x76);
    temp_v1 = param_1[0x65];
    FUN_002b777c(temp_v1 + 8,param_1 + 0x35);
    (**(romwright_code **)(*param_1 + 0x10))(param_1);
    FUN_002bf774(temp_v1 + 0x14,temp_v1 + 0x18,param_1 + 0x35);
    return;
  }
  return;
}
