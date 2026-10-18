/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020eee8` (_code @ 0x20eee8, 0x340 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int *DAT_00435d90; /* 0x435d90 */
extern int DAT_00435d94; /* 0x435d94 */
extern int DAT_00435d98; /* 0x435d98 */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a9948. */
/* Supplied declaration required: FUN_001e1774. */
/* Supplied declaration required: FUN_00252630. */
/* Supplied declaration required: FUN_0026abc0. */
/* Supplied declaration required: FUN_00288990. */
/* Supplied declaration required: FUN_00295208. */
/* Supplied declaration required: FUN_00295e48. */
/* Supplied declaration required: FUN_0029b310. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002b2520. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c4160. */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_00310b24. */
/* Supplied declaration required: FUN_00337c68. */
/* Supplied declaration required: FUN_003391e4. */


void FUN_0020eee8(void)

{
/* irregular: 20 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int *piVar4;
  int iStack_20;
  unsigned char temp_v1 [4];
  
  puVar1 = DAT_00435d90;
  *(unsigned char *)(DAT_00435d90 + 0x18) = 1;
  FUN_001a9948();
  FUN_0026abc0(0);
  if (DAT_00439ca8 != 0) {
    FUN_001e1774(puVar1);
  }
  FUN_0029b310();
  piVar4 = (int *)(puVar1 + 0x127b);
  iStack_20 = *piVar4;
  puVar2 = temp_v1;
  FUN_002c42fc(puVar2,&iStack_20,1,0,0xffffffff,0xffffffff);
  if ((int)puVar2 < 0) {
    FUN_002c5468();
  }
  *(unsigned char *)(puVar1 + 0x127c) = 1;
  FUN_002c41e8(piVar4);
  if (*piVar4 != 0) {
    software_interrupt(0x23);
    *piVar4 = 0;
  }
  piVar4 = (int *)(puVar1 + 0x127e);
  if (*piVar4 != 0) {
    FUN_002c4160();
    temp_v0 = *piVar4;
    if (temp_v0 != 0) {
      FUN_002c4160();
      FUN_002b2520(temp_v0);
    }
    *piVar4 = 0;
  }
  if (puVar1[0x127d] != 0) {
    FUN_002c4360();
    puVar1[0x127d] = 0;
  }
  puVar1[0x1282] = 0xffffffff;
  if (puVar1[0x10e5] != 0) {
    FUN_00288990();
    if ((int *)puVar1[0x10e5] != (int *)0x0) {
      (**(romwright_code **)(*(int *)puVar1[0x10e5] + 4))();
    }
    puVar1[0x10e5] = 0;
  }
  FUN_003391e4(puVar1);
  FUN_00337c68(puVar1);
  if (puVar1[0x88f] != 0) {
    puVar1[0x88f] = 0;
  }
  if (puVar1[0x88e] != 0) {
    puVar1[0x88e] = 0;
  }
  if (puVar1[0x88c] != 0) {
    puVar1[0x88c] = 0;
  }
  if (puVar1[0x88d] != 0) {
    puVar1[0x88d] = 0;
  }
  if (puVar1[0x890] != 0) {
    puVar1[0x890] = 0;
  }
  if (puVar1[0x891] != 0) {
    puVar1[0x891] = 0;
  }
  if (puVar1[0x892] != 0) {
    puVar1[0x892] = 0;
  }
  if (puVar1[0x893] != 0) {
    puVar1[0x893] = 0;
  }
  if (puVar1[0x895] != 0) {
    FUN_002a755c();
    puVar1[0x895] = 0;
  }
  if (puVar1[0x894] != 0) {
    puVar1[0x894] = 0;
  }
  if (puVar1[0x1291] != 0) {
    FUN_002c4360();
    puVar1[0x1291] = 0;
  }
  if (puVar1[0x1292] != 0) {
    FUN_002a755c();
    puVar1[0x1292] = 0;
  }
  puVar1[0x1293] = 0;
  if (puVar1[0x8c4] != 0) {
    FUN_002c4360();
    puVar1[0x8c4] = 0;
  }
  if (puVar1[0x7a2] != 0) {
    FUN_002c4360();
    puVar1[0x7a2] = 0;
  }
  if (puVar1[0x7f0] != 0) {
    FUN_002c4360();
    puVar1[0x7f0] = 0;
  }
  if (puVar1[0x7a6] != 0) {
    FUN_002c4360();
    puVar1[0x7a6] = 0;
  }
  if (puVar1[0x7ef] != 0) {
    FUN_002c4360();
    puVar1[0x7ef] = 0;
  }
  if (DAT_00435d94 != 0) {
    FUN_002c4360();
    DAT_00435d94 = 0;
  }
  if (DAT_00435d98 != 0) {
    FUN_002c4360();
    DAT_00435d98 = 0;
  }
  temp_v0 = 0;
  do {
    if (puVar1[temp_v0 + 0x84d] != 0) {
      FUN_00295208();
      puVar1[temp_v0 + 0x84d] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x2a);
  FUN_00310b24();
  FUN_00252630();
  FUN_00295e48(1);
  temp_v0 = FUN_002bf41c(*puVar1);
  if (temp_v0 != 0) {
    FUN_002c45b8(*puVar1,0);
  }
  if (DAT_00435d90 != (unsigned int *)0x0) {
    FUN_002c4360();
    DAT_00435d90 = (unsigned int *)0x0;
  }
  return;
}
