/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309db8` (_code @ 0x309db8, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int FUN_002bda1c(unsigned int);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int * FUN_00309db8(void)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x10,1);
  temp_v0 = FUN_002bda1c(0);
  *puVar1 = temp_v0;
  temp_v0 = FUN_002bda1c(0);
  puVar1[1] = temp_v0;
  temp_v0 = FUN_002bda1c(0);
  puVar1[2] = temp_v0;
  *(unsigned char *)(puVar1 + 3) = 0;
  return puVar1;
}
