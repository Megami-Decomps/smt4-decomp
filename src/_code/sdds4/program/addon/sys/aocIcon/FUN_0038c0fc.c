/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038c0fc` (_code @ 0x38c0fc, 0x10c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_001db94c. */
/* Supplied declaration required: FUN_002acd38. */
/* Supplied declaration required: FUN_002bd730. */
/* Supplied declaration required: FUN_002bd940. */
extern unsigned int FUN_002bf798(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3b48. */


void FUN_0038c0fc(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bf798(0x10000,0x100,0,0x2000,0x80,1);
  *(unsigned int *)(param_1 + 4) = temp_v0;
  FUN_002c3b48(temp_v0,0x2000);
  temp_v1 = 0;
  do {
    FUN_002acd38(*(int *)(param_1 + 4) + temp_v1 * 0x400 + 0x800,param_2 + temp_v1 * 0x300,0x300);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  temp_v0 = 0;
  FUN_002bd940();
  *(unsigned int *)(param_1 + 8) = temp_v0;
  FUN_001db94c();
  *(unsigned int *)(*(int *)(param_1 + 8) + 4) = 0xde1;
  *(unsigned int *)(*(int *)(param_1 + 8) + 8) = 0x10000;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0xc) = 0x1000000;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x10) = 0;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x14) = 0x40;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x18) = 0x40;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x1c) = 0x6754;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x20) = 0x8363;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x24) = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x28) = 0x2000;
  FUN_002bd730(*(unsigned int *)(param_1 + 8));
  return;
}
