/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002720d4` (_code @ 0x2720d4, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);
int FUN_00271d28(void);
int FUN_002b2d74(unsigned int, unsigned int, int);
int objectBufferFree(void);
int rt_memclr(void);
int effParticleParamCopy(unsigned int *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_00271d28. */
/* Supplied declaration required: FUN_002b2d74. */
/* Supplied declaration required: objectBufferFree. */
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: effParticleParamCopy. */


unsigned int * FUN_002720d4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = *(int *)(*(int *)(param_1 + 0x4c) + 0x24);
  temp_v0 = *(int *)(temp_v1 + 0x20);
  if (temp_v0 == 0) {
    temp_v0 = *(int *)(temp_v1 + 0xb8);
  }
  temp_v2 = temp_v0 * *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + 0x24) + 0x24);
  if (temp_v2 >= 301) {
    temp_v2 = 300;
  }
  puVar1 = (unsigned int *)0x10000;
  memAlloc(0x10000,0x100,0,0x5c,0x10,1);
  rt_memclr();
  puVar1[1] = 0xffffffff;
  *puVar1 = temp_v2;
  puVar1[2] = 0x3f800000;
  temp_v2 = (unsigned int)**(unsigned short **)(param_1 + 0x4c);
  if (puVar1[0x13] != 0) {
    objectBufferFree();
  }
  FUN_002b2d74(temp_v2,*puVar1,temp_v1);
  puVar1[0x13] = temp_v2;
  *(unsigned char *)((int)puVar1 + 0xe) = *(unsigned char *)((int)puVar1 + 0xe) | 1;
  if (*puVar1 != 0) {
    temp_v2 = *(unsigned int *)(param_1 + 0x50);
    if (temp_v2 != 0) {
      FUN_00271d28();
      puVar1[0x14] = temp_v2;
    }
    effParticleParamCopy(puVar1,param_1);
  }
  return puVar1;
}

} /* extern "C" */
