/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8d10` (_code @ 0x2f8d10, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001176c8(int, int);
int FUN_002eab08(int *);
int FUN_002f87e8(int [2], int, int *);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
} param_1_stack;

/* Supplied declaration required: FUN_001176c8. */
/* Supplied declaration required: FUN_002eab08. */
extern int FUN_002eb690(int *, unsigned int *);
/* Supplied declaration required: FUN_002f87e8. */


void FUN_002f8d10(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5 [2];
  int temp_v6 [2];
  unsigned int temp_v7 [2];
  
  temp_v5[0] = *(int *)(param_1 + 0x1dc);
  while( 1 ) {
    temp_v7[0] = *(unsigned int *)(param_1 + 0x1e4);
    temp_v1 = FUN_002eb690(temp_v5,temp_v7);
    temp_v0 = temp_v5[0];
    if (temp_v1 == 0) break;
    FUN_002eab08(&temp_v3);
    *(unsigned int *)(temp_v0 + 0x100) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x104) = temp_v4;
    FUN_001176c8(param_1 + 0xa4,temp_v0);
    temp_v2 = temp_v5[0];
    FUN_002f87e8(temp_v6,param_1 + 0x1d4,&temp_v2);
    temp_v5[0] = temp_v6[0];
  }
  return;
}

} /* extern "C" */
