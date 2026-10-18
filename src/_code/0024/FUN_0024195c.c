/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024195c` (_code @ 0x24195c, 0x160 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *DAT_0043daa8; /* 0x43daa8 */

/* Supplied declaration required: FUN_001a9f2c. */
/* Supplied declaration required: FUN_00220e60. */
/* Supplied declaration required: FUN_00252630. */
extern int FUN_0026f25c(int);
/* Supplied declaration required: FUN_002911ec. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002ceca8. */


void FUN_0024195c(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = DAT_0043daa8;
  if (DAT_0043daa8[0x357] != 0) {
    if (DAT_0043daa8[0x33d] != 0) {
      FUN_002c4360();
    }
    if (puVar1[0x33e] != 0) {
      FUN_002c4360();
    }
    if (puVar1[0x341] != 0) {
      FUN_002a755c();
    }
    FUN_002c45b8(*puVar1,0);
    FUN_002c4360(puVar1);
    DAT_0043daa8 = (unsigned int *)0x0;
    return;
  }
  temp_v1 = 0;
  do {
    temp_v0 = FUN_0026f25c(temp_v1);
    temp_v1 = temp_v1 + 1;
    if ((*(unsigned char *)(temp_v0 + 0x20) & 0x10) != 0) {
      *(unsigned char *)(temp_v0 + 0x20) = *(unsigned char *)(temp_v0 + 0x20) & 0xef;
    }
  } while (temp_v1 < 0xc);
  FUN_001a9f2c();
  FUN_002a497c(0x25);
  FUN_00252630();
  if (puVar1[0x33b] != 0) {
    FUN_002c4360();
  }
  if (puVar1[0x33c] != 0) {
    FUN_002c4360();
  }
  if (puVar1[0x33d] != 0) {
    FUN_002c4360();
  }
  if (puVar1[0x33e] != 0) {
    FUN_002c4360();
  }
  if (puVar1[0x33f] != 0) {
    FUN_002c4360();
  }
  if (puVar1[0x340] != 0) {
    FUN_002c4360();
  }
  if (puVar1[0x341] != 0) {
    FUN_002a755c();
  }
  if (puVar1[0x342] != 0) {
    FUN_002a755c();
  }
  FUN_002aeb2c(0x39,0);
  FUN_002aea7c(0x39);
  FUN_002ceca8();
  FUN_00220e60(DAT_0043daa8 + 0x28);
  FUN_002c45b8(*puVar1,0);
  FUN_002c4360(puVar1);
  DAT_0043daa8 = (unsigned int *)0x0;
  FUN_0029c650(0xf);
  FUN_002911ec(0x2d);
  return;
}
