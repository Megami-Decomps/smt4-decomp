/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003007a0` (_code @ 0x3007a0, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int FUN_001b4ddc(int);
int FUN_002e6354(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_001b4ddc. */
/* Supplied declaration required: FUN_002e6354. */


int FUN_003007a0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0x10000;
  FUN_00167ab4(0x10000,0x100,0,0xc0,0x10,1);
  FUN_002e6354();
  FUN_002e6354(temp_v0,0x90);
  *(unsigned int *)(temp_v0 + 0x84) = 1;
  *(unsigned char *)(temp_v0 + 0x88) = 8;
  *(unsigned char *)(temp_v0 + 0x89) = 0;
  *(unsigned char *)(temp_v0 + 0x8a) = 0;
  FUN_001b4ddc(temp_v0);
  return temp_v0;
}

} /* extern "C" */
