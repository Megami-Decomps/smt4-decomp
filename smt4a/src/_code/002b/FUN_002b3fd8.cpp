/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b3fd8` (_code @ 0x2b3fd8, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int *DAT_006471a0; /* 0x6471a0 */
extern unsigned int *DAT_006471b4; /* 0x6471b4 */

/* Supplied declaration required: memAlloc. */


void FUN_002b3fd8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  puVar2[7] = 0xc0000000;
  puVar2[1] = 5;
  puVar2[2] = param_1;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  puVar2[5] = param_4;
  puVar2[6] = 0xffffc040;
  puVar1 = puVar2;
  if (DAT_006471a0 != (unsigned int *)0x0) {
    *DAT_006471b4 = (unsigned int)puVar2;
    puVar1 = DAT_006471a0;
  }
  DAT_006471a0 = puVar1;
  DAT_006471b4 = puVar2;
  *puVar2 = 0;
  return;
}

} /* extern "C" */
