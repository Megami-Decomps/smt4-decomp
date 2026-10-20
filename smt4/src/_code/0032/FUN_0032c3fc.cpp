/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032c3fc` (_code @ 0x32c3fc, 0x294 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00262210(...);
int FUN_00295eb0(int, int, int);
int pairSetFirstResetSecond(...);
int FUN_002bd954(int, int, unsigned int, int, int);
int FUN_002bee58(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00262210. */
/* Supplied declaration required: FUN_00295eb0. */
/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */


void FUN_0032c3fc(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  *(unsigned int *)(param_1 + 0x2fc) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x300) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x304) = 0;
  *(unsigned int *)(param_1 + 0x2dc) = 0;
  *(unsigned char *)(param_1 + 0x2e0) = 0;
  do {
    FUN_002bd954(param_1 + temp_v0 * 0x8c + 0x20,0x18,0xffffffff,param_1,0x97);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  pairSetFirstResetSecond(param_1 + 0x20,*(int *)(param_1 + 0x2f8) * 1000);
  FUN_002bee58(param_1 + 0x20,0);
  switch(*(unsigned int *)(param_1 + 0x2f0)) {
  default:
    return;
  case 2:
  case 0x11:
    pairSetFirstResetSecond(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000 + 1);
    FUN_002bee58(param_1 + 0xac,0);
    FUN_00295eb0(param_1 + 0xac,0x18,*(int *)(param_1 + 0x2f8) * 1000 + 2);
    return;
  case 3:
    FUN_00295eb0(param_1 + 0x20,0x18,*(int *)(param_1 + 0x2f8) * 1000);
    *(unsigned char *)(param_1 + 0x5c) = 1;
    pairSetFirstResetSecond(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000);
    FUN_002bee58(param_1 + 0xac,0);
    FUN_00295eb0(param_1 + 0xac,0x18,*(int *)(param_1 + 0x2f8) * 1000);
    *(unsigned char *)(param_1 + 0xe8) = 1;
    return;
  case 8:
    pairSetFirstResetSecond(param_1 + 0x20,0x13881);
    FUN_00262210(param_1 + 0x20,0x18,80000,0x13881);
    return;
  case 0xc:
  case 0x10:
    pairSetFirstResetSecond(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000 + 1);
    pairSetFirstResetSecond(param_1 + 0x138,*(int *)(param_1 + 0x2f8) * 1000 + 2);
    FUN_002bee58(param_1 + 0xac,0);
    FUN_002bee58(param_1 + 0x138,0);
    return;
  case 0xd:
    break;
  case 0x13:
    pairSetFirstResetSecond(param_1 + 0x20,*(int *)(param_1 + 0x2f8) * 1000);
  }
  pairSetFirstResetSecond(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000 + 1);
  return;
}

} /* extern "C" */
