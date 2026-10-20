/* NON_MATCHING: romwright 0.5.0 decompilation of `handleBlockRefCreate` (_code @ 0x256fec, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d22a0(void);
int memAlloc(int, int, int, int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_001d22a0. */
/* Supplied declaration required: memAlloc. */


int * handleBlockRefCreate(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = *param_1;
  *(int *)(temp_v0 + 0x10) = *(int *)(temp_v0 + 0x10) + 1;
  piVar1 = (int *)0x10000;
  memAlloc(0x10000,0x100,0,*(int *)(temp_v0 + 8) * 0x14 + 0x18,0x10,1);
  piVar1[4] = (int)(piVar1 + 6);
  *piVar1 = temp_v0;
  FUN_001d22a0();
  *(unsigned short *)(piVar1 + 5) = 1;
  return piVar1;
}

} /* extern "C" */
