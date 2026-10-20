/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00473824` (_code @ 0x473824, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);
int asdMemoryAlloc(int, int, int, int);
int sysFatalBreak(void);
int asdMemFree(void);
int asdOperatorDelete(void);
int rt_memclr(void);
int FUN_004279cc(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: rt_memclr. */
extern unsigned int FUN_004279a8(void);
/* Supplied declaration required: FUN_004279cc. */


void FUN_00473824(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x5a8) != 0) {
    FUN_004279cc();
    asdOperatorDelete();
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
      temp_v0 = FUN_004279a8();
    }
    *(unsigned int *)(param_1 + 0x5a8) = temp_v0;
    return;
  }
  sysFatalBreak();
  return;
}

} /* extern "C" */
