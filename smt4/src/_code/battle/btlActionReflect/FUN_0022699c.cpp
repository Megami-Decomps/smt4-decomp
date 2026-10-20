/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022699c` (_code @ 0x22699c, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemAlloc(int, int, int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: asdMemAlloc. */


void FUN_0022699c(int param_1,unsigned short param_2,unsigned short param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = (unsigned short *)0x100;
  asdMemAlloc(0x100,0x100,0,0x68,1);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(unsigned char *)(puVar1 + 2) = 0;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  puVar1[3] = 0;
  *(unsigned int *)(puVar1 + 6) = 0;
  *(unsigned int *)(puVar1 + 4) = param_4;
  *(unsigned int *)(puVar1 + 8) = 0;
  *(unsigned int *)(puVar1 + 10) = 0;
  *(unsigned int *)(puVar1 + 0xc) = 0;
  *(unsigned int *)(puVar1 + 0xe) = 0xffffffff;
  *(unsigned int *)(puVar1 + 0x14) = 0;
  *(unsigned int *)(puVar1 + 0x16) = 0;
  *(unsigned int *)(puVar1 + 0x26) = 0;
  *(unsigned int *)(puVar1 + 0x28) = 0;
  if (*(int *)(param_1 + 8) == 0) {
    *(unsigned short **)(param_1 + 8) = puVar1;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    *(unsigned short **)(param_1 + 0xc) = puVar1;
  }
  else {
    *(unsigned short **)(*(int *)(param_1 + 0xc) + 0xc) = puVar1;
    *(unsigned int *)(puVar1 + 8) = *(unsigned int *)(param_1 + 0xc);
    *(unsigned short **)(param_1 + 0xc) = puVar1;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

} /* extern "C" */
