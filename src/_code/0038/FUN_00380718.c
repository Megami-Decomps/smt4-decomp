/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380718` (_code @ 0x380718, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002b743c. */
extern unsigned int FUN_002bb020(void);
/* Supplied declaration required: FUN_002bf59c. */
/* Supplied declaration required: FUN_002c3424. */
/* Supplied declaration required: FUN_00379a14. */
/* Supplied declaration required: FUN_0037a1ec. */
/* Supplied declaration required: FUN_0037ba38. */


void FUN_00380718(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(char *)((int)param_1 + 0x45d) != '\0') {
    *(unsigned char *)((int)param_1 + 0x45d) = 0;
    if ((char)param_1[0x117] == '\x01') {
      temp_v0 = FUN_002bb020();
      FUN_0037a1ec(temp_v0,param_1 + 0x66);
      FUN_002c3424(param_1 + 0x69);
    }
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    *(unsigned char *)((int)param_1 + 0x45e) = 0;
    FUN_00379a14(param_1);
    FUN_0037ba38(param_1 + 0x76);
    temp_v1 = param_1[0x65];
    FUN_002b743c(temp_v1 + 8,param_1 + 0x35);
    (**(romwright_code **)(*param_1 + 0x10))(param_1);
    FUN_002bf59c(temp_v1 + 0x14,temp_v1 + 0x18,param_1 + 0x35);
    return;
  }
  return;
}
