/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f288` (_code @ 0x47f288, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001628c0(int, unsigned int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_0014aa78(void);
extern unsigned int FUN_0014af98(int);
/* Supplied declaration required: FUN_001628c0. */


void FUN_0047f288(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = FUN_0014af98((int)*(short *)(temp_v0 + 0x2000));
  FUN_001628c0(0x47f2cc,temp_v1,2,0);
  return;
}

} /* extern "C" */
