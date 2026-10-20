/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a414` (_code @ 0x33a414, 0x170 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bcc60(...);
int resultReportIfFailed(...);
int asdOperatorNew(...);
int memAlloc(...);
int nn_os_CriticalSection_Initialize(...);
int FUN_002c40f8(...);
int FUN_002c526c(...);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int FUN_00339b64(...); /* 0x339b64 */
extern unsigned char LAB_003f6e74; /* 0x3f6e74 */
extern unsigned char LAB_003f6f44; /* 0x3f6f44 */
extern unsigned char LAB_003f6fe0; /* 0x3f6fe0 */

/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: resultReportIfFailed. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0033a414(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_38 [3];
  unsigned char *temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  int temp_v4 [2];
  
  nn_os_CriticalSection_Initialize(param_1 + 0x4a00);
  if (*(int *)(param_1 + 0x49f4) == 0) {
    temp_v0 = 0x100;
    memAlloc(0x100,0x100,0,0x1000,0x1000,1);
    *(int *)(param_1 + 0x49f4) = temp_v0;
  }
  piVar5 = (int *)(param_1 + 0x49f8);
  if (*piVar5 == 0) {
    puVar2 = (unsigned int *)0x18;
    asdOperatorNew();
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned char *)(puVar2 + 4) = 0;
    }
    *piVar5 = (int)puVar2;
    resultReportIfFailed();
  }
  piVar4 = (int *)(param_1 + 0x49ec);
  aiStack_38[0] = *piVar4;
  if (aiStack_38[0] != 0) {
    piVar3 = aiStack_38 + 1;
    FUN_002c40f8(piVar3,aiStack_38,1,0,0,0);
    if ((int)piVar3 < 0) {
      FUN_002c526c();
    }
    if (((unsigned int)piVar3 & 0x3ff) == 0x3fe) {
      return;
    }
  }
  aiStack_38[2] = 4;
  temp_v1 = &LAB_003f6e74;
  temp_v2 = &LAB_003f6fe0;
  temp_v3 = &LAB_003f6f44;
  aiStack_38[0] = 0;
  aiStack_38[1] = 0;
  temp_v4[0] = param_1;
  FUN_002bcc60(piVar4,aiStack_38 + 2,FUN_00339b64,temp_v4,
               *(int *)(*piVar5 + 0xc) + *(int *)(*piVar5 + 8),0x11);
  if ((int)piVar4 < 0) {
    FUN_002c526c();
  }
  return;
}

} /* extern "C" */
