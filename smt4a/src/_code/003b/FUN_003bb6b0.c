/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb6b0` (_code @ 0x3bb6b0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned char sp1B; /* 0x1b: local_1b */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_0038e798; /* 0x38e798 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);


void FUN_003bb6b0(unsigned char param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = FUN_00187180(5,2);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  temp_v2 = param_1;
  temp_v3 = param_2;
  FUN_00100854(&temp_v2,temp_v1,temp_v0,4,&LAB_0038e798);
  return;
}
