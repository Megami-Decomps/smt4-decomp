/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e384c` (_code @ 0x2e384c, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
} param_2_stack;

extern unsigned char LAB_0032c8fc; /* 0x32c8fc */

/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_002e384c(unsigned char param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [96];
  
  if (param_2 != 0) {
    temp_v0 = FUN_002c0ec4(0x16,0);
  }
  else {
    temp_v0 = FUN_002c0ec4(0x16,1);
  }
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  temp_v2[0] = param_1;
  FUN_002b48dc(temp_v2,temp_v1,temp_v0,0x60,&LAB_0032c8fc);
  return;
}
