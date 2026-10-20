/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0f58` (_code @ 0x3f0f58, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(...);
int memAlloc(...);
int FUN_0016dfc4(...);
int FUN_00188b60(...);
int FUN_002e3140(...);
int FUN_002fb0d4(...);
int software_interrupt(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int FUN_003f0794(...); /* 0x3f0794 */
extern unsigned char LAB_00514a24; /* 0x514a24 */
extern unsigned char LAB_00514ae4; /* 0x514ae4 */
extern unsigned char LAB_00514b74; /* 0x514b74 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_0016dfc4. */
/* Supplied declaration required: FUN_00188b60. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */


void FUN_003f0f58(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int *piVar4;
  unsigned int *puVar5;
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  int temp_v6 [2];
  
  FUN_00188b60(param_1 + 0x4d0c);
  if (*(int *)(param_1 + 0x4d00) == 0) {
    temp_v0 = 0x100;
    memAlloc(0x100,0x100,0,0x1000,0x1000,1);
    *(int *)(param_1 + 0x4d00) = temp_v0;
  }
  piVar4 = (int *)(param_1 + 0x4d04);
  if (*piVar4 == 0) {
    puVar2 = (unsigned int *)0x18;
    asdOperatorNew();
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned char *)(puVar2 + 4) = 0;
    }
    *piVar4 = (int)puVar2;
    FUN_0016dfc4();
  }
  puVar5 = (unsigned int *)(param_1 + 0x4cf8);
  temp_v1 = *puVar5;
  if (temp_v1 != 0) {
    software_interrupt(0x24);
    if ((int)temp_v1 < 0) {
      FUN_002e3140();
    }
    if ((temp_v1 & 0x3ff) == 0x3fe) {
      return;
    }
  }
  temp_v2 = 4;
  temp_v3 = &LAB_00514a24;
  temp_v4 = &LAB_00514b74;
  temp_v5 = &LAB_00514ae4;
  temp_v6[0] = param_1;
  FUN_002fb0d4(puVar5,&temp_v2,FUN_003f0794,temp_v6,
               *(int *)(*piVar4 + 0xc) + *(int *)(*piVar4 + 8),0x11,0,0);
  if ((int)puVar5 < 0) {
    FUN_002e3140();
  }
  return;
}

} /* extern "C" */
