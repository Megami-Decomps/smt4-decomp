/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104e68` (_code @ 0x104e68, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_00118070; /* 0x118070 */
extern unsigned char LAB_00118194; /* 0x118194 */
extern unsigned char DAT_00446e00; /* 0x446e00 */
extern unsigned char DAT_00446f2c; /* 0x446f2c */

/* Supplied declaration required: FUN_00109624. */
/* Supplied declaration required: FUN_0010a13c. */
/* Supplied declaration required: FUN_0010e560. */
/* Supplied declaration required: FUN_002c2ba4. */
extern int FUN_002c2bd0(unsigned int);


void FUN_00104e68(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_00109624(1,&DAT_00446e00,0x19);
  FUN_0010a13c(0xc9,&DAT_00446f2c,0x14);
  FUN_0010e560(&LAB_00118070,&LAB_00118194);
  temp_v0 = FUN_002c2bd0(0);
  if (temp_v0 == 3) {
    FUN_002c2ba4(0,10,0xff);
  }
  temp_v0 = FUN_002c2bd0(1);
  if (temp_v0 == 3) {
    FUN_002c2ba4(1,10,0xff);
    return;
  }
  return;
}
