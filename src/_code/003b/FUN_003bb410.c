/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb410` (_code @ 0x3bb410, 0x158 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char DAT_00404eb4; /* 0x404eb4 */
extern unsigned char DAT_00404ec0; /* 0x404ec0 */
extern unsigned char DAT_00404ed8; /* 0x404ed8 */

/* Supplied declaration required: FUN_00233600. */
/* Supplied declaration required: FUN_002af854. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */


void FUN_003bb410(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  *(unsigned char *)(param_1 + 0x630) = 0;
  *(unsigned char *)(param_1 + 0x631) = 0;
  *(unsigned char *)(param_1 + 0x632) = 0;
  *(unsigned int *)(param_1 + 0xc58) = 0;
  *(unsigned int *)(param_1 + 0xc60) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xc5c) = 0;
  *(unsigned int *)(param_1 + 0xc64) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xc68) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xc6c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xc70) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xc74) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xc78) = 0;
  *(unsigned int *)(param_1 + 0xc7c) = 0;
  *(unsigned int *)(param_1 + 0xc80) = 0;
  *(unsigned int *)(param_1 + 0xc84) = 0;
  *(unsigned int *)(param_1 + 0xc88) = 0;
  *(unsigned int *)(param_1 + 0xc8c) = 0;
  *(unsigned int *)(param_1 + 0xc90) = 0;
  *(unsigned int *)(param_1 + 0xc94) = 0;
  *(unsigned int *)(param_1 + 0xc98) = 0;
  *(unsigned int *)(param_1 + 0xc9c) = 0;
  *(unsigned int *)(param_1 + 0xca0) = 0;
  *(unsigned int *)(param_1 + 0xca4) = 0;
  *(unsigned int *)(param_1 + 0xca8) = 0;
  *(unsigned int *)(param_1 + 0xcac) = 0;
  temp_v0 = param_1 + 0x634;
  *(unsigned int *)(param_1 + 0xcb0) = 0;
  *(unsigned int *)(param_1 + 0xcb4) = 0;
  FUN_002c3344();
  FUN_002c32f8(temp_v0,&DAT_00404eb4,0xc,&DAT_00404ec0,0x18,0,0,0,0,&DAT_00404ed8,0x38);
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c + 0x654;
    FUN_002bdb2c(temp_v2,0x2a,0,temp_v0,0x15);
    FUN_002af854(temp_v2,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 10);
  FUN_002bdb2c(param_1 + 0xbcc,0x2a,0,temp_v0,0x15);
  FUN_00233600(param_1 + 0xa8);
  return;
}
