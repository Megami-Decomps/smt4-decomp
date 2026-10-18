/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389f0c` (_code @ 0x389f0c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_1_stack;

extern unsigned char LAB_0018449c; /* 0x18449c */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int FUN_00187180(unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);


void FUN_00389f0c(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [92];
  
  temp_v2[0] = param_1;
  temp_v0 = FUN_00187180(0);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  FUN_00100854(temp_v2,temp_v1,temp_v0,0xb4,&LAB_0018449c);
  return;
}
