/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002378b8` (_code @ 0x2378b8, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int FUN_00236038(unsigned int);
extern unsigned int FUN_002ba85c(void);
extern unsigned int FUN_002deb84(void);


void FUN_002378b8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002ba85c();
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_002deb84();
  FUN_0021bdac(temp_v0,temp_v1,temp_v2,5,0,0);
  return;
}
