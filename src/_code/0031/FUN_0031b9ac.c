/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031b9ac` (_code @ 0x31b9ac, 0xd8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int FUN_002bda1c(unsigned int);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int * FUN_0031b9ac(void)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x98,1);
  temp_v2 = 0;
  do {
    temp_v0 = FUN_002bda1c(0);
    temp_v1 = temp_v2 + 1;
    puVar1[temp_v2 + 2] = temp_v0;
    *(unsigned short *)((int)puVar1 + temp_v2 * 2 + 0x24) = 0;
    temp_v2 = temp_v1;
  } while (temp_v1 < 7);
  temp_v0 = FUN_002bda1c(0);
  puVar1[1] = temp_v0;
  temp_v0 = FUN_002bda1c(0);
  *puVar1 = temp_v0;
  temp_v0 = FUN_002bda1c(0);
  puVar1[0xd] = temp_v0;
  temp_v2 = 0;
  do {
    temp_v0 = FUN_002bda1c(0);
    temp_v1 = temp_v2 + 1;
    puVar1[temp_v2 + 0x12] = temp_v0;
    puVar1[temp_v2 + 0x1a] = 0;
    temp_v2 = temp_v1;
  } while (temp_v1 < 8);
  temp_v0 = FUN_002bda1c(0);
  puVar1[0xe] = temp_v0;
  temp_v0 = FUN_002bda1c(0);
  puVar1[0x10] = temp_v0;
  temp_v0 = FUN_002bda1c(0);
  puVar1[0x23] = temp_v0;
  *(unsigned char *)(puVar1 + 0x25) = 0;
  return puVar1;
}
