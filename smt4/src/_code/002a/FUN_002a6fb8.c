/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6fb8` (_code @ 0x2a6fb8, 0x244 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */

/* Supplied declaration required: FUN_0014ca50. */
/* Supplied declaration required: FUN_0014ca58. */
/* Supplied declaration required: FUN_00152bec. */
/* Supplied declaration required: FUN_002a46d0. */
/* Supplied declaration required: FUN_002a4bac. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002a72c0. */
/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002a7890. */
/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_002a6fb8(int param_1)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  FUN_002a7890();
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    if (*(int *)(temp_v1 + 0x28c) != 0) {
      FUN_002a780c();
      *(unsigned int *)(temp_v1 + 0x28c) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  FUN_002ae898(0x31,0);
  FUN_002ae7e8(0x31);
  FUN_002a46d0(param_1 + 0x20);
  FUN_0014ca50(param_1 + 0x20);
  FUN_0014ca58(param_1 + 0x20);
  if (*(int *)(param_1 + 0xfac) != 0) {
    FUN_002a4bac();
    if (*(int *)(param_1 + 0xfac) != 0) {
      FUN_002b2368(*(int *)(param_1 + 0xfac));
    }
    *(unsigned int *)(param_1 + 0xfac) = 0;
  }
  if (*(int *)(param_1 + 0xfb8) != 0) {
    FUN_00152bec();
    FUN_002a775c(*(unsigned int *)(param_1 + 0xfb8));
    *(unsigned int *)(param_1 + 0xfb8) = 0;
    FUN_002a72c0(0);
  }
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    puVar3 = (unsigned int *)(temp_v1 + 0xd10);
    FUN_00152bec(*puVar3);
    FUN_002a775c(*puVar3);
    *puVar3 = 0;
    FUN_00152bec(*(unsigned int *)(temp_v1 + 0xd28));
    FUN_002a775c(*(unsigned int *)(temp_v1 + 0xd28));
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v1 + 0xd28) = 0;
  } while (temp_v0 < 6);
  if (*(int *)(param_1 + 0x5a8) != 0) {
    FUN_002a7218();
    *(unsigned int *)(param_1 + 0x5a8) = 0;
  }
  if (*(int *)(param_1 + 0x5a0) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0x5a0) = 0;
  }
  if (*(int *)(param_1 + 0x5a4) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0x5a4) = 0;
  }
  if (*(int *)(param_1 + 0x5b4) != 0) {
    FUN_002a7218();
    *(unsigned int *)(param_1 + 0x5b4) = 0;
  }
  if (*(int *)(param_1 + 0x5ac) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0x5ac) = 0;
  }
  if (*(int *)(param_1 + 0x5b0) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0x5b0) = 0;
  }
  if (*(int *)(param_1 + 0x5c0) != 0) {
    FUN_002a7218();
    *(unsigned int *)(param_1 + 0x5c0) = 0;
  }
  if (*(int *)(param_1 + 0x5b8) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0x5b8) = 0;
  }
  if (*(int *)(param_1 + 0x5bc) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0x5bc) = 0;
  }
  FUN_002bff50();
  *(unsigned char *)(DAT_0043e190 + 0xa26) = 1;
  *(unsigned char *)(DAT_0043e18c + 0xa26) = 1;
  return;
}
