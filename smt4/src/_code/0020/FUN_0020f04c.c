/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020f04c` (_code @ 0x20f04c, 0x340 bytes) from smt4_v1.2.0.cxi.
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
/* Supplied declaration required: FUN_001a9a4c. */
/* Supplied declaration required: FUN_001e1874. */
/* Supplied declaration required: FUN_002523f0. */
/* Supplied declaration required: FUN_0026a958. */
/* Supplied declaration required: FUN_00288728. */
/* Supplied declaration required: FUN_00294f64. */
/* Supplied declaration required: FUN_00295ba4. */
/* Supplied declaration required: FUN_0029b074. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002b2368. */
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c3f5c. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_00310ac0. */
/* Supplied declaration required: FUN_00337a34. */
/* Supplied declaration required: FUN_00338fb0. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


void FUN_0020f04c(void)

{
/* irregular: 19 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int *piVar4;
  int iStack_20;
  unsigned char temp_v1 [4];
  
  puVar1 = DAT_00435d90;
  *(unsigned char *)(DAT_00435d90 + 0x18) = 1;
  FUN_001a9a4c();
  FUN_0026a958(0);
  if (DAT_00439ca8 != 0) {
    FUN_001e1874(puVar1);
  }
  FUN_0029b074();
  piVar4 = (int *)(puVar1 + 0x127b);
  iStack_20 = *piVar4;
  puVar2 = temp_v1;
  FUN_002c40f8(puVar2,&iStack_20,1,0,0xffffffff,0xffffffff);
  if ((int)puVar2 < 0) {
    FUN_002c526c();
  }
  *(unsigned char *)(puVar1 + 0x127c) = 1;
  nn_os_Thread_FinalizeImpl((unsigned int)piVar4);
  if (*piVar4 != 0) {
    software_interrupt(0x23);
    *piVar4 = 0;
  }
  piVar4 = (int *)(puVar1 + 0x127e);
  if (*piVar4 != 0) {
    FUN_002c3f5c();
    temp_v0 = *piVar4;
    if (temp_v0 != 0) {
      FUN_002c3f5c();
      FUN_002b2368(temp_v0);
    }
    *piVar4 = 0;
  }
  if (puVar1[0x127d] != 0) {
    FUN_002c415c();
    puVar1[0x127d] = 0;
  }
  puVar1[0x1282] = 0xffffffff;
  if (puVar1[0x10e5] != 0) {
    FUN_00288728();
    if ((int *)puVar1[0x10e5] != (int *)0x0) {
      (**(romwright_code **)(*(int *)puVar1[0x10e5] + 4))();
    }
    puVar1[0x10e5] = 0;
  }
  FUN_00338fb0(puVar1);
  FUN_00337a34(puVar1);
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
    FUN_002a7218();
    puVar1[0x895] = 0;
  }
  if (puVar1[0x894] != 0) {
    puVar1[0x894] = 0;
  }
  if (puVar1[0x1291] != 0) {
    FUN_002c415c();
    puVar1[0x1291] = 0;
  }
  if (puVar1[0x1292] != 0) {
    FUN_002a7218();
    puVar1[0x1292] = 0;
  }
  puVar1[0x1293] = 0;
  if (puVar1[0x8c4] != 0) {
    FUN_002c415c();
    puVar1[0x8c4] = 0;
  }
  if (puVar1[0x7a2] != 0) {
    FUN_002c415c();
    puVar1[0x7a2] = 0;
  }
  if (puVar1[0x7f0] != 0) {
    FUN_002c415c();
    puVar1[0x7f0] = 0;
  }
  if (puVar1[0x7a6] != 0) {
    FUN_002c415c();
    puVar1[0x7a6] = 0;
  }
  if (puVar1[0x7ef] != 0) {
    FUN_002c415c();
    puVar1[0x7ef] = 0;
  }
  if (DAT_00435d94 != 0) {
    FUN_002c415c();
    DAT_00435d94 = 0;
  }
  if (DAT_00435d98 != 0) {
    FUN_002c415c();
    DAT_00435d98 = 0;
  }
  temp_v0 = 0;
  do {
    if (puVar1[temp_v0 + 0x84d] != 0) {
      FUN_00294f64();
      puVar1[temp_v0 + 0x84d] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x2a);
  FUN_00310ac0();
  FUN_002523f0();
  FUN_00295ba4(1);
  temp_v0 = FUN_002bf244(*puVar1);
  if (temp_v0 != 0) {
    FUN_002c43b4(*puVar1,0);
  }
  if (DAT_00435d90 != (unsigned int *)0x0) {
    FUN_002c415c();
    DAT_00435d90 = (unsigned int *)0x0;
  }
  return;
}
