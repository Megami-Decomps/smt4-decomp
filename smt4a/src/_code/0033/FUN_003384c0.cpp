/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003384c0` (_code @ 0x3384c0, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);
int asdMdlManagerDestroy(void);
int FUN_002e6dd4(void);
int FUN_003aa57c(unsigned int *, int, int);
int FUN_003b8ecc(unsigned int *);
int rt_memcpy_w(unsigned int *, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: memAlloc. */
extern unsigned int asdMdlManagerClone(unsigned int, unsigned int);
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_003aa57c. */
/* Supplied declaration required: FUN_003b8ecc. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int * FUN_003384c0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = *(int *)(*(int *)(param_1 + 0x9c) + 0x24);
  temp_v0 = *(int *)(temp_v1 + 0x20);
  if (temp_v0 == 0) {
    temp_v0 = *(int *)(temp_v1 + 0xb8);
  }
  temp_v2 = temp_v0 * *(int *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x24) + 0x24);
  if (temp_v2 >= 101) {
    temp_v2 = 100;
  }
  puVar1 = (unsigned int *)0x10000;
  memAlloc(0x10000,0x100,0,0xa8,0x10,1);
  FUN_002e6dd4();
  puVar1[1] = 0xffffffff;
  *puVar1 = temp_v2;
  puVar1[2] = 0x3f800000;
  rt_memcpy_w(puVar1 + 4,param_1 + 0x10,0x44);
  FUN_003aa57c(puVar1,**(unsigned short **)(param_1 + 0x9c),temp_v1);
  if (*(int *)(puVar1[0x27] + 8) != 0) {
    if (*(short *)(param_1 + 0xc) == 3) {
      if (puVar1[0x15] != 0) {
        asdMdlManagerDestroy();
      }
      temp_v2 = asdMdlManagerClone(*(unsigned int *)(param_1 + 0x54),0);
      puVar1[0x15] = temp_v2;
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)(temp_v2 + 8) + 0x2c) + 0x220) + 8) + 0x28) =
           1;
    }
    *(unsigned short *)(puVar1 + 3) = *(unsigned short *)(param_1 + 0xc);
    FUN_003b8ecc(puVar1);
  }
  return puVar1;
}

} /* extern "C" */
