/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002722a8` (_code @ 0x2722a8, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int FUN_001b4ddc(int);
int FUN_002e6354(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_001b4ddc. */
/* Supplied declaration required: FUN_002e6354. */


int FUN_002722a8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x90,0x10,1);
  FUN_002e6354();
  *(unsigned int *)(temp_v0 + 0x80) = 0;
  *(unsigned int *)(temp_v0 + 0x84) = 0;
  FUN_001b4ddc(temp_v0);
  return temp_v0;
}

} /* extern "C" */
