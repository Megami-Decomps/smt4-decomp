/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202e38` (_code @ 0x202e38, 0x118 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *DAT_0044de2c; /* 0x44de2c */

/* Supplied declaration required: FUN_002107c4. */
/* Supplied declaration required: FUN_00289984. */
/* Supplied declaration required: FUN_00292eb0. */
/* Supplied declaration required: FUN_002972e8. */
/* Supplied declaration required: FUN_0029a3c4. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_00202e38(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  
  puVar1 = DAT_0044de2c;
  FUN_002a7aa0(DAT_0044de2c[0xd8]);
  puVar1[0xd8] = 0;
  if (*(char *)((int)puVar1 + 0x37a) != '\0') {
    FUN_002b9008();
    FUN_002b9008();
  }
  FUN_0029f10c(0,0x323232ff);
  puVar2 = DAT_0044de2c;
  temp_v0 = 0;
  do {
    FUN_002107c4(0x36,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 10);
  FUN_002a497c(0x3d);
  FUN_00289984();
  if (puVar2[0x92] != 0) {
    FUN_002a755c();
    puVar2[0x92] = 0;
  }
  if (puVar2[0x90] != 0) {
    FUN_002c4360();
    puVar2[0x90] = 0;
  }
  if (puVar2[0x91] != 0) {
    FUN_002c4360();
    puVar2[0x91] = 0;
  }
  FUN_0029a3c4(0);
  FUN_00292eb0();
  FUN_002972e8(1);
  *(unsigned char *)(puVar1 + 1) = 1;
  if (puVar1[0xd4] != 0) {
    FUN_002c4360();
    puVar1[0xd4] = 0;
  }
  FUN_002c4360(puVar1[0xdf]);
  FUN_002c4360(puVar1[0xe0]);
  FUN_002c4360(puVar1[0xe1]);
  FUN_002c45b8(*puVar1,0);
  return;
}
