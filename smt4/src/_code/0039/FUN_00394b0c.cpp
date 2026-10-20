/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394b0c` (_code @ 0x394b0c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bfc24(int, int, unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_002bfc24. */
extern unsigned int FUN_002bfdc4(void);


void FUN_00394b0c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002939f4();
  if (*(short *)(temp_v0 + 0x1fc4) < 2) {
    temp_v1 = FUN_002bfdc4();
    FUN_002bfc24(1,0x7a576,temp_v1,4);
    return;
  }
  temp_v1 = FUN_002bfdc4();
  FUN_002bfc24(1,0x7a5d0,temp_v1,4);
  return;
}

} /* extern "C" */
