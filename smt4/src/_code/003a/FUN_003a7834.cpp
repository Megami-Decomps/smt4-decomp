/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7834` (_code @ 0x3a7834, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231240(...);
int FUN_0029d960(int);
int FUN_002a0cc8(int);
int FUN_002b8ee0(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_00231184(void);
/* Supplied declaration required: FUN_00231240. */
/* Supplied declaration required: FUN_0029d960. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002b8ee0. */
extern unsigned int FUN_002bed98(int);
extern unsigned int FUN_002beda4(int);


void FUN_003a7834(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + 0xfc;
  FUN_002b8ee0(temp_v2,0);
  temp_v0 = FUN_002bed98(temp_v2);
  temp_v1 = FUN_002beda4(temp_v2);
  FUN_00231240(param_1 + 200,temp_v1,temp_v0);
  if ((*(char *)(param_1 + 0x186) != '\0') && (temp_v2 = FUN_00231184(), temp_v2 != 0)) {
    FUN_002a0cc8(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_00231240(param_1 + 200,0,0);
    FUN_0029d960(param_1);
    return;
  }
  return;
}

} /* extern "C" */
