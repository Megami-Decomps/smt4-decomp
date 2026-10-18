/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ea80` (_code @ 0x20ea80, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern unsigned char LAB_0020eaac; /* 0x20eaac */

extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002be7fc. */


unsigned int FUN_0020ea80(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [40];
  
  temp_v0 = FUN_00296f60(0);
  FUN_002be7fc(temp_v1,&LAB_0020eaac,temp_v0);
                    /* WARNING: Treating indirect jump as return */
  return 1;
}
