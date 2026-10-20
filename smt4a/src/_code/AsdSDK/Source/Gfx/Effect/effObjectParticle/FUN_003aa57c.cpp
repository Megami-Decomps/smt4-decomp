/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa57c` (_code @ 0x3aa57c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, unsigned int, int, int);
int asdMemFree(void);
int FUN_002b2d74(unsigned int, unsigned int, unsigned int);
int objectBufferFree(void);
int FUN_00390368(unsigned int *, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002b2d74. */
/* Supplied declaration required: objectBufferFree. */
/* Supplied declaration required: FUN_00390368. */


void FUN_003aa57c(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_1[0x27] != 0) {
    objectBufferFree();
  }
  param_2 = param_2 & 0xffff;
  FUN_002b2d74(param_2,*param_1,param_3);
  param_1[0x27] = param_2;
  if (param_1[0x29] != 0) {
    asdMemFree();
  }
  temp_v2 = *(unsigned int *)(param_1[0x27] + 8);
  temp_v0 = 0x10000;
  memAlloc(0x10000,0x100,0,temp_v2 * 0x1c,0x10,1);
  param_1[0x29] = temp_v0;
  temp_v1 = 0;
  param_1[0x28] = temp_v0;
  if (temp_v2 != 0) {
    do {
      FUN_00390368(param_1,temp_v0);
      temp_v1 = temp_v1 + 1;
      temp_v0 = temp_v0 + 0x1c;
    } while (temp_v1 < temp_v2);
  }
  return;
}

} /* extern "C" */
