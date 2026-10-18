/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041488c` (_code @ 0x41488c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e9afe. */
extern int FUN_002f4e86(int);
/* Supplied declaration required: FUN_004130c0. */


void FUN_0041488c(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x88) = 0;
  }
  temp_v1 = *(unsigned int *)(param_2 + 0x38);
  uStack_14 = *(unsigned int *)(param_2 + 0x3c);
  uStack_10 = *(unsigned int *)(param_2 + 0x40);
  FUN_002e9afe(param_1 + 0x7c,&temp_v1);
  temp_v0 = FUN_002f4e86(param_1 + 0x7c);
  if (temp_v0 == 0) {
    *(unsigned char *)(param_1 + 0xfc) = 1;
  }
  else {
    FUN_004130c0(param_1,3);
  }
  return;
}
