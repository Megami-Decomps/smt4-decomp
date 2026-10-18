/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036c700` (_code @ 0x36c700, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int FUN_0014bce0(unsigned int);
/* Supplied declaration required: FUN_00163060. */


int FUN_0036c700(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v2 = 0x100;
  FUN_00163060(0x100,0x100,0,0x98,1);
  temp_v4 = 0;
  do {
    temp_v3 = FUN_0014bce0(0);
    *(unsigned int *)(temp_v2 + temp_v4 * 4) = temp_v3;
    temp_v0 = temp_v4 * 2;
    temp_v1 = temp_v4 * 4;
    temp_v4 = temp_v4 + 1;
    *(unsigned short *)(temp_v2 + temp_v0 + 0x28) = 0;
    *(unsigned int *)(temp_v2 + temp_v1 + 0x3c) = 0;
  } while (temp_v4 < 10);
  return temp_v2;
}
