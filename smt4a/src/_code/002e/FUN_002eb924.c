/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb924` (_code @ 0x2eb924, 0x6a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_001239b2(int, unsigned int);
/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002edb7c. */
/* Supplied declaration required: FUN_002edb8c. */
extern int FUN_002ede12(int *, unsigned int *);
/* Supplied declaration required: FUN_002ede22. */


void FUN_002eb924(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [8];
  
  FUN_002eb588(&temp_v4);
  temp_v1 = temp_v4 - *(int *)(param_1 + 0x28);
  if (temp_v1 >= 1000) {
    *(unsigned int *)(param_1 + 0x2c) = temp_v5;
    *(int *)(param_1 + 0x28) = temp_v4;
    temp_v2 = *(int *)(*(int *)(param_1 + 0x14) + 8);
    while( 1 ) {
      temp_v3 = *(unsigned int *)(param_1 + 0x14);
      temp_v0 = FUN_002ede12(&temp_v2,(unsigned int *)&temp_v3);
      if (temp_v0 == 0) break;
      temp_v0 = FUN_001239b2(temp_v2 + 0x30,temp_v1);
      if (temp_v0 != 0) {
        FUN_002edb7c(&temp_v6,&temp_v2,0);
        temp_v7 = temp_v6;
        FUN_002edb8c(temp_v8,param_1 + 4,&temp_v7);
      }
      else {
        FUN_002ede22(&temp_v2);
      }
    }
  }
  return;
}
