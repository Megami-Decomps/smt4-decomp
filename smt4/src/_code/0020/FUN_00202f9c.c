/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202f9c` (_code @ 0x202f9c, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *DAT_0044de2c; /* 0x44de2c */

/* Supplied declaration required: FUN_002108c0. */
/* Supplied declaration required: FUN_0028971c. */
/* Supplied declaration required: FUN_00292c0c. */
/* Supplied declaration required: FUN_00297050. */
/* Supplied declaration required: FUN_0029a128. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_00202f9c(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  
  puVar1 = DAT_0044de2c;
  FUN_002a775c(DAT_0044de2c[0xd8]);
  puVar1[0xd8] = 0;
  if (*(char *)((int)puVar1 + 0x37a) != '\0') {
    FUN_002b8cc8();
    FUN_002b8cc8();
  }
  FUN_0029ee6c(0,0x323232ff);
  puVar2 = DAT_0044de2c;
  temp_v0 = 0;
  do {
    FUN_002108c0(0x36,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 10);
  FUN_002a46d8(0x3d);
  FUN_0028971c();
  if (puVar2[0x92] != 0) {
    FUN_002a7218();
    puVar2[0x92] = 0;
  }
  if (puVar2[0x90] != 0) {
    FUN_002c415c();
    puVar2[0x90] = 0;
  }
  if (puVar2[0x91] != 0) {
    FUN_002c415c();
    puVar2[0x91] = 0;
  }
  FUN_0029a128(0);
  FUN_00292c0c();
  FUN_00297050(1);
  *(unsigned char *)(puVar1 + 1) = 1;
  if (puVar1[0xd4] != 0) {
    FUN_002c415c();
    puVar1[0xd4] = 0;
  }
  FUN_002c415c(puVar1[0xdf]);
  FUN_002c415c(puVar1[0xe0]);
  FUN_002c415c(puVar1[0xe1]);
  FUN_002c43b4(*puVar1,0);
  return;
}
