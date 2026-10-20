/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b174` (_code @ 0x38b174, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFreeNonNull(void);
int asdOperatorNew(void);
int rt_memclr(void);
int asdMemFree(void);
int asdFatalError(void);
int asdMemoryAlloc(int, int, int, int);
int FUN_00352f0c(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: asdMemFreeNonNull. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdFatalError. */
/* Supplied declaration required: asdMemoryAlloc. */
extern unsigned int FUN_00352ee8(void);
/* Supplied declaration required: FUN_00352f0c. */


void FUN_0038b174(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x5a8) != 0) {
    FUN_00352f0c();
    asdMemFreeNonNull();
    *(unsigned int *)(param_1 + 0x5a8) = 0;
  }
  if (*(int *)(param_1 + 0x5ac) != 0) {
    asdMemFree();
    *(int *)(param_1 + 0x5ac) = 0;
  }
  temp_v0 = 0x10000;
  asdMemoryAlloc(0x10000,0x100,0,0x20000);
  *(unsigned int *)(param_1 + 0x5ac) = temp_v0;
  rt_memclr();
  if (*(int *)(param_1 + 0x5ac) != 0) {
    temp_v1 = 0x10;
    asdOperatorNew();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_00352ee8();
    }
    *(unsigned int *)(param_1 + 0x5a8) = temp_v0;
    return;
  }
  asdFatalError();
  return;
}

} /* extern "C" */
