/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a72fc` (_code @ 0x2a72fc, 0x244 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */

/* Supplied declaration required: FUN_0014c968. */
/* Supplied declaration required: FUN_0014c970. */
/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_002a4974. */
/* Supplied declaration required: FUN_002a4ef0. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002a7604. */
/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002a7b50. */
/* Supplied declaration required: FUN_002a7bd4. */
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c0128. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_002a72fc(int param_1)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  FUN_002a7bd4();
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    if (*(int *)(temp_v1 + 0x28c) != 0) {
      FUN_002a7b50();
      *(unsigned int *)(temp_v1 + 0x28c) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  FUN_002aeb2c(0x31,0);
  FUN_002aea7c(0x31);
  FUN_002a4974(param_1 + 0x20);
  FUN_0014c968(param_1 + 0x20);
  FUN_0014c970(param_1 + 0x20);
  if (*(int *)(param_1 + 0xfac) != 0) {
    FUN_002a4ef0();
    if (*(int *)(param_1 + 0xfac) != 0) {
      FUN_002b2520(*(int *)(param_1 + 0xfac));
    }
    *(unsigned int *)(param_1 + 0xfac) = 0;
  }
  if (*(int *)(param_1 + 0xfb8) != 0) {
    FUN_00152af8();
    FUN_002a7aa0(*(unsigned int *)(param_1 + 0xfb8));
    *(unsigned int *)(param_1 + 0xfb8) = 0;
    FUN_002a7604(0);
  }
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    puVar3 = (unsigned int *)(temp_v1 + 0xd10);
    FUN_00152af8(*puVar3);
    FUN_002a7aa0(*puVar3);
    *puVar3 = 0;
    FUN_00152af8(*(unsigned int *)(temp_v1 + 0xd28));
    FUN_002a7aa0(*(unsigned int *)(temp_v1 + 0xd28));
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v1 + 0xd28) = 0;
  } while (temp_v0 < 6);
  if (*(int *)(param_1 + 0x5a8) != 0) {
    FUN_002a755c();
    *(unsigned int *)(param_1 + 0x5a8) = 0;
  }
  if (*(int *)(param_1 + 0x5a0) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0x5a0) = 0;
  }
  if (*(int *)(param_1 + 0x5a4) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0x5a4) = 0;
  }
  if (*(int *)(param_1 + 0x5b4) != 0) {
    FUN_002a755c();
    *(unsigned int *)(param_1 + 0x5b4) = 0;
  }
  if (*(int *)(param_1 + 0x5ac) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0x5ac) = 0;
  }
  if (*(int *)(param_1 + 0x5b0) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0x5b0) = 0;
  }
  if (*(int *)(param_1 + 0x5c0) != 0) {
    FUN_002a755c();
    *(unsigned int *)(param_1 + 0x5c0) = 0;
  }
  if (*(int *)(param_1 + 0x5b8) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0x5b8) = 0;
  }
  if (*(int *)(param_1 + 0x5bc) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0x5bc) = 0;
  }
  FUN_002c0128();
  *(unsigned char *)(DAT_0043e190 + 0xa26) = 1;
  *(unsigned char *)(DAT_0043e18c + 0xa26) = 1;
  return;
}
