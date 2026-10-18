/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2808` (_code @ 0x2e2808, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_0028550c. */
extern unsigned char FUN_00296f60(unsigned int);


unsigned int FUN_002e2808(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  FUN_0028550c(temp_v0,temp_v1,0,0,0,0);
  return 1;
}
