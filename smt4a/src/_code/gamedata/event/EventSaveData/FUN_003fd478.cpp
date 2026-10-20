/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd478` (_code @ 0x3fd478, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAlloc(int, int, int, int, int);
int gameFlagBlockGet(void);
int rt_memcpy(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: gameFlagBlockGet. */
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_003fd478(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  gameFlagBlockGet();
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,0x44,1);
  rt_memcpy();
  return temp_v0;
}

} /* extern "C" */
