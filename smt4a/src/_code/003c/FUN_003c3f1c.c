/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3f1c` (_code @ 0x3c3f1c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_0034f3a4; /* 0x34f3a4 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);


void FUN_003c3f1c(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [2];
  
  temp_v0 = FUN_00187180(6,1);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  temp_v2[0] = param_1;
  FUN_00100854(temp_v2,temp_v1,temp_v0,4,&LAB_0034f3a4);
  return;
}
