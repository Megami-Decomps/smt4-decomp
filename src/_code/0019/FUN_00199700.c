/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00199700` (_code @ 0x199700, 0x338 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00296154. */
/* Supplied declaration required: FUN_002b90e0. */
/* Supplied declaration required: FUN_002bf030. */


void FUN_00199700(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  switch(*(unsigned int *)(param_1 + 0x2f0)) {
  default:
    return;
  case 1:
  case 8:
    FUN_002bf030(param_1 + 0x20,2);
    return;
  case 2:
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,3);
    return;
  case 3:
    FUN_002bf030(param_1 + 0x20,4);
    FUN_002bf030(param_1 + 0xac,5);
    return;
  case 4:
    FUN_002bf030(param_1 + 0x20,2);
    temp_v0 = 0;
    break;
  case 5:
    FUN_002b90e0(param_1 + 0xac,0x59d9);
    FUN_002b90e0(param_1 + 0x138,0x59da);
    FUN_00296154(param_1 + 0xac,0x18,0x59db);
    FUN_00296154(param_1 + 0x138,0x18,0x59db);
    FUN_002bf030(param_1 + 0xac,7);
    FUN_002bf030(param_1 + 0x138,8);
    return;
  case 6:
    FUN_002b90e0(param_1 + 0xac,0x7149);
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,9);
    return;
  case 7:
    FUN_002b90e0(param_1 + 0xac,0x130b1);
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,10);
    return;
  case 9:
    FUN_002b90e0(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000 + 1);
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,0xb);
    return;
  case 10:
  case 0xe:
    FUN_002b90e0(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000 + 1);
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,2);
    return;
  case 0xb:
    FUN_002b90e0(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000 + 1);
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,0xc);
    return;
  case 0xc:
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,2);
    FUN_002bf030(param_1 + 0x138,0xd);
    return;
  case 0xd:
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,0xf);
    return;
  case 0xf:
    FUN_002b90e0(param_1 + 0xac,*(int *)(param_1 + 0x2f8) * 1000);
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,0x10);
    return;
  case 0x10:
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,2);
    FUN_002bf030(param_1 + 0x138,0xe);
    return;
  case 0x11:
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,0x11);
    return;
  case 0x12:
    FUN_002b90e0(param_1 + 0xac,0x67071);
    FUN_002bf030(param_1 + 0x20,2);
    FUN_002bf030(param_1 + 0xac,0x12);
    return;
  case 0x13:
    FUN_002bf030(param_1 + 0x20,0x13);
    return;
  }
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_002b90e0(temp_v1 + 0xac,temp_v0 + 0x4269);
    FUN_002bf030(temp_v1 + 0xac,6);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  return;
}
