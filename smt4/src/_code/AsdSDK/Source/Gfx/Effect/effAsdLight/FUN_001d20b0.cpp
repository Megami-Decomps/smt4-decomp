/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d20b0` (_code @ 0x1d20b0, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c32a0(int, int, int, int, int, int);
int FUN_002c4938(void);
int rt_memcpy_w(unsigned int *, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int * FUN_001d20b0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,0x110,0x10,1);
  FUN_002c4938();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[3] = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[7] = 0x3f800000;
  puVar1[9] = 0xffffffff;
  puVar1[8] = 0x3f800000;
  rt_memcpy_w(puVar1 + 0xc,param_1 + 0x30,0xb4);
  return puVar1;
}

} /* extern "C" */
