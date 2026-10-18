/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d44ac` (_code @ 0x3d44ac, 0x294 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: FUN_003872b8. */


void FUN_003d44ac(int param_1)

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
    FUN_0014e188(param_1 + temp_v0 * 0x8c + 0x20,0x10,0xffffffff,param_1,0x97);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  FUN_00184b80(param_1 + 0x20,*(int *)(param_1 + 0x2f8) * 1000);
  FUN_001846d0(param_1 + 0x20,0);
  switch(*(unsigned int *)(param_1 + 0x2f0)) {
  default:
    return;
  case 2:
  case 0x11:
    FUN_00184b80(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000 + 1);
    FUN_001846d0(param_1 + 0xac,0);
    FUN_00387240(param_1 + 0xac,0x10,*(int *)(param_1 + 0x2f8) * 1000 + 2);
    return;
  case 3:
    FUN_00387240(param_1 + 0x20,0x10,*(int *)(param_1 + 0x2f8) * 1000);
    *(unsigned char *)(param_1 + 0x5c) = 1;
    FUN_00184b80(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000);
    FUN_001846d0(param_1 + 0xac,0);
    FUN_00387240(param_1 + 0xac,0x10,*(int *)(param_1 + 0x2f8) * 1000);
    *(unsigned char *)(param_1 + 0xe8) = 1;
    return;
  case 8:
    FUN_00184b80(param_1 + 0x20,0x13881);
    FUN_003872b8(param_1 + 0x20,0x10,80000,0x13881);
    return;
  case 0xc:
  case 0x10:
    FUN_00184b80(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000 + 1);
    FUN_00184b80(param_1 + 0x138,*(int *)(param_1 + 0x2f8) * 1000 + 2);
    FUN_001846d0(param_1 + 0xac,0);
    FUN_001846d0(param_1 + 0x138,0);
    return;
  case 0xd:
    break;
  case 0x13:
    FUN_00184b80(param_1 + 0x20,*(int *)(param_1 + 0x2f8) * 1000);
  }
  FUN_00184b80(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000 + 1);
  return;
}
