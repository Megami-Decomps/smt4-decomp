/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ebe4` (_code @ 0x20ebe4, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be624(unsigned char [40], unsigned char *, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern unsigned char LAB_0020ec10; /* 0x20ec10 */

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_002be624. */


unsigned int FUN_0020ebe4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [40];
  
  temp_v0 = scrGetArg(0);
  FUN_002be624(temp_v1,&LAB_0020ec10,temp_v0);
                    /* WARNING: Treating indirect jump as return */
  return 1;
}

} /* extern "C" */
