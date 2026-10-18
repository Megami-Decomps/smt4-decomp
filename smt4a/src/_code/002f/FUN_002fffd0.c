/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fffd0` (_code @ 0x2fffd0, 0x6e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern unsigned char LAB_00300040; /* 0x300040 */

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_002ea20c. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002f2e3c. */


void FUN_002fffd0(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [20];
  
  FUN_002ea20c(&temp_v1);
  *(unsigned int *)(param_1 + 0x158) = temp_v1 + param_2;
  *(unsigned int *)(param_1 + 0x15c) = temp_v2 + (unsigned int)romwright_carry_4(temp_v1,param_2);
  *(unsigned char *)(*(int *)(param_1 + 0x214) + 0x34) = 0;
  FUN_002f2e3c(param_1 + 0x88,param_1 + 0xe4,0x10,param_1 + 0xf4,*(unsigned int *)(param_1 + 0x214),1)
  ;
  temp_v0 = FUN_002ea3c0(temp_v3,0x10dd49,0,&LAB_00300040);
  FUN_002ea3d0(param_1,temp_v0);
  return;
}
