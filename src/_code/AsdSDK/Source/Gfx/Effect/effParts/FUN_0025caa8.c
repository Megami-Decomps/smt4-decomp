/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025caa8` (_code @ 0x25caa8, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_002a3ff8. */
extern int FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4b30. */


int FUN_0025caa8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c34a4(0x10000,0x100,0,0xc0,0x10,1);
  FUN_002c4b30(temp_v0,0xc0);
  FUN_002c4b30(temp_v0,0x90);
  *(unsigned int *)(temp_v0 + 0x84) = 1;
  *(unsigned char *)(temp_v0 + 0x88) = 8;
  *(unsigned char *)(temp_v0 + 0x89) = 0;
  *(unsigned char *)(temp_v0 + 0x8a) = 0;
  FUN_002a3ff8(temp_v0);
  return temp_v0;
}
