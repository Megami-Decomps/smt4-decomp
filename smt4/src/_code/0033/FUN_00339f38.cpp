/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339f38` (_code @ 0x339f38, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mdlPartsRelease(void);
int playerModelListCreate(void);
int asdOperatorNew(void);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_004207d8; /* 0x4207d8 */

/* Supplied declaration required: mdlPartsRelease. */
/* Supplied declaration required: playerModelListCreate. */
extern unsigned int *_ZN9Obj4206e8C1Ev(void);
/* Supplied declaration required: asdOperatorNew. */


void FUN_00339f38(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  if (*(int *)(param_1 + 0x4394) != 0) {
    mdlPartsRelease();
    if (*(int **)(param_1 + 0x4394) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x4394) + 4))();
    }
    *(unsigned int *)(param_1 + 0x4394) = 0;
  }
  temp_v0 = 0x100;
  asdOperatorNew();
  puVar2 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)_ZN9Obj4206e8C1Ev();
    *puVar2 = (unsigned int)&DAT_004207d8;
  }
  *(unsigned int **)(param_1 + 0x4394) = puVar2;
  playerModelListCreate();
  return;
}

} /* extern "C" */
