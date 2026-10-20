/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b5e8c` (_code @ 0x3b5e8c, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int FUN_0014bce0(unsigned int);
/* Supplied declaration required: FUN_00163060. */


unsigned int * FUN_003b5e8c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0xb8,1);
  temp_v2 = 0;
  do {
    temp_v0 = FUN_0014bce0(0);
    temp_v1 = temp_v2 + 1;
    puVar1[temp_v2 + 2] = temp_v0;
    *(unsigned short *)((int)puVar1 + temp_v2 * 2 + 0x24) = 0;
    temp_v2 = temp_v1;
  } while (temp_v1 < 7);
  temp_v0 = FUN_0014bce0(0);
  puVar1[1] = temp_v0;
  temp_v0 = FUN_0014bce0(0);
  *puVar1 = temp_v0;
  temp_v0 = FUN_0014bce0(0);
  puVar1[0xd] = temp_v0;
  temp_v2 = 0;
  do {
    temp_v0 = FUN_0014bce0(0);
    temp_v1 = temp_v2 + 1;
    puVar1[temp_v2 + 0x14] = temp_v0;
    puVar1[temp_v2 + 0x1c] = 0;
    temp_v2 = temp_v1;
  } while (temp_v1 < 8);
  temp_v0 = FUN_0014bce0(0);
  puVar1[0xe] = temp_v0;
  temp_v0 = FUN_0014bce0(0);
  puVar1[0x10] = temp_v0;
  temp_v0 = FUN_0014bce0(0);
  puVar1[0x12] = temp_v0;
  *(unsigned char *)((int)puVar1 + 0x92) = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  return puVar1;
}

} /* extern "C" */
