/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dea9c` (_code @ 0x2dea9c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [40], unsigned char *, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern unsigned char LAB_002deac8; /* 0x2deac8 */

/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_002dea9c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [40];
  
  temp_v0 = FUN_00236038(0);
  FUN_00100388(temp_v1,&LAB_002deac8,temp_v0);
                    /* WARNING: Treating indirect jump as return */
  return 1;
}

} /* extern "C" */
