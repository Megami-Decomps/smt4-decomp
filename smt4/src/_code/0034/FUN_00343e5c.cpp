/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343e5c` (_code @ 0x343e5c, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd498(int, unsigned int, int);
int FUN_002d5a08(unsigned int, unsigned int, unsigned int, int, int, int, unsigned int);

/* stack frame of param_5: 9 slot(s), 30 byte(s) */
typedef struct {
    unsigned char sp13; /* 0x13: local_13 */
    unsigned char sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

/* Supplied declaration required: FUN_002bd498. */
extern unsigned int asdMemoryGetAllocatorA(void);
/* Supplied declaration required: FUN_002d5a08. */
extern unsigned int FUN_0036ec8c(unsigned int *, unsigned int);


void FUN_00343e5c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int uStack_20;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  FUN_002d5a08(param_4,param_5,param_2,0x1908,0x8033,0x81a5,param_3);
  *(unsigned int *)(param_1 + 8) = param_4;
  temp_v0 = asdMemoryGetAllocatorA();
  temp_v3 = 1;
  uStack_20 = 0x2020000;
  temp_v6 = 0;
  temp_v7 = 1;
  temp_v4 = *(unsigned int *)(*(int *)(param_1 + 8) + 8);
  temp_v5 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x34);
  temp_v2 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x14);
  temp_v1 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x18);
  temp_v0 = FUN_0036ec8c((unsigned int *)&temp_v1,temp_v0);
  *(unsigned int *)(param_1 + 0xc) = temp_v0;
  temp_v0 = asdMemoryGetAllocatorA();
  FUN_002bd498(param_1 + 0xc,temp_v0,0);
  return;
}

} /* extern "C" */
