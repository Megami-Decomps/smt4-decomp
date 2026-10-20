/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00244894` (_code @ 0x244894, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa88(void);
int asdMemoryAllocTracked(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00580c8c; /* 0x580c8c */

/* Supplied declaration required: FUN_0014aa88. */
/* Supplied declaration required: asdMemoryAllocTracked. */


void FUN_00244894(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x64c,1);
  DAT_00580c8c = temp_v0;
  FUN_0014aa88();
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v1 = temp_v0 + temp_v1 * 100;
    *(unsigned int *)(temp_v1 + 0xc) = 0;
    *(unsigned int *)(temp_v1 + 0x10) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 0;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x20) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = 0;
    *(unsigned int *)(temp_v1 + 0x28) = 0;
    *(unsigned int *)(temp_v1 + 0x2c) = 0;
    *(unsigned int *)(temp_v1 + 0x30) = 0;
    *(unsigned int *)(temp_v1 + 0x34) = 0;
    *(unsigned int *)(temp_v1 + 0x38) = 0;
    *(unsigned int *)(temp_v1 + 0x3c) = 0;
    *(unsigned int *)(temp_v1 + 0x40) = 0;
    *(unsigned int *)(temp_v1 + 0x44) = 0;
    *(unsigned int *)(temp_v1 + 0x48) = 0;
    *(unsigned int *)(temp_v1 + 0x4c) = 0;
    *(unsigned int *)(temp_v1 + 0x50) = 0;
    *(unsigned int *)(temp_v1 + 100) = 0;
    *(unsigned int *)(temp_v1 + 0x68) = 0;
    *(unsigned int *)(temp_v1 + 0x54) = 0;
    *(unsigned int *)(temp_v1 + 0x58) = 0;
    *(unsigned int *)(temp_v1 + 0x5c) = 0;
    *(unsigned int *)(temp_v1 + 0x60) = 0;
    *(unsigned char *)(temp_v1 + 0x6c) = 0;
    temp_v1 = temp_v2;
  } while (temp_v2 < 0x10);
  return;
}

} /* extern "C" */
