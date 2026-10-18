/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030566e` (_code @ 0x30566e, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002ea20c. */
extern unsigned long long FUN_002ecfe4(unsigned int);


void FUN_0030566e(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned long long temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = param_3;
  temp_v2 = param_4;
  temp_v0 = FUN_002ecfe4(param_2);
  *(unsigned long long *)(param_1 + 0x58) = temp_v0;
  FUN_002ea20c(&temp_v1);
  *(unsigned int *)(param_1 + 0x54) = temp_v2;
  *(unsigned int *)(param_1 + 0x50) = temp_v1;
  return;
}
