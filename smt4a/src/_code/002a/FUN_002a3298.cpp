/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3298` (_code @ 0x2a3298, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int);
int FUN_002c76c0(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int scrGetArg(unsigned int);
extern unsigned int FUN_002ba85c(void);
/* Supplied declaration required: FUN_002c76c0. */
extern unsigned int scrGetCommandFrame(void);


void FUN_002a3298(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  FUN_002c76c0(0);
  temp_v0 = FUN_002ba85c();
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetCommandFrame();
  FUN_0021bdac(temp_v0,temp_v1,temp_v2,0xf,0,0);
  return;
}

} /* extern "C" */
