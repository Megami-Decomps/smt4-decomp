/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004151b0` (_code @ 0x4151b0, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);
int asdMemoryAlloc(int, int, int, int, int);
int mtx44Copy(int *, unsigned int);
int FUN_00409e20(int *, unsigned int, unsigned int);
int FUN_00415310(int *);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned char DAT_00557b40; /* 0x557b40 */
extern unsigned char DAT_00557ca8; /* 0x557ca8 */
extern unsigned char DAT_00557d30; /* 0x557d30 */

/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: asdMemoryAlloc. */
extern unsigned int FUN_0018aeb8(void);
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: FUN_00409e20. */
/* Supplied declaration required: FUN_00415310. */


int * FUN_004151b0(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  unsigned int temp_v0;
  unsigned char *puVar4;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0x3f800000;
  temp_v2 = 0;
  if (param_3 != 0) {
    piVar1 = (int *)0xc;
    asdOperatorNew();
    if (piVar1 != (int *)0x0) {
      puVar4 = &DAT_00557d30;
      piVar1[2] = temp_v1;
      *piVar1 = (int)puVar4;
      piVar1[1] = 0;
    }
  }
  else {
    piVar1 = (int *)0x20;
    asdOperatorNew();
    if (piVar1 != (int *)0x0) {
      puVar4 = &DAT_00557b40;
      piVar1[2] = temp_v2;
      *piVar1 = (int)puVar4;
      piVar1[1] = 0;
    }
  }
  piVar2 = (int *)0x64;
  asdOperatorNew();
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0x3c23d70a;
    *piVar2 = (int)&DAT_00557ca8;
    piVar2[5] = (int)piVar1;
    piVar2[0x16] = temp_v2;
    piVar2[0x17] = temp_v1;
    piVar2[0x18] = 0;
  }
  piVar2[0x18] = param_1;
  temp_v1 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,0x50,1);
  piVar2[1] = temp_v1;
  FUN_00415310(piVar2);
  (**(romwright_code **)(*piVar2 + 0x10))(piVar2);
  temp_v0 = FUN_0018aeb8();
  mtx44Copy(piVar2 + 6,temp_v0);
  FUN_00409e20(piVar2,param_2,*(unsigned int *)(piVar2[0x18] + 0x1c));
  (**(romwright_code **)(*piVar1 + 0x14))
            (piVar1,*(unsigned int *)(param_1 + 0x34),*(unsigned int *)(param_1 + 0x38),
             *(unsigned int *)(param_1 + 0x3c));
  return piVar2;
}

} /* extern "C" */
