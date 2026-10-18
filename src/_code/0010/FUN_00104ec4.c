/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104ec4` (_code @ 0x104ec4, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_00118170; /* 0x118170 */
extern unsigned char LAB_00118290; /* 0x118290 */
extern unsigned char DAT_00446e00; /* 0x446e00 */
extern unsigned char DAT_00446f2c; /* 0x446f2c */

/* Supplied declaration required: FUN_00109680. */
/* Supplied declaration required: FUN_0010a1a4. */
/* Supplied declaration required: FUN_0010e584. */
/* Supplied declaration required: FUN_002c29d8. */
extern int FUN_002c2a04(unsigned int);


void FUN_00104ec4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_00109680(1,&DAT_00446e00,0x19);
  FUN_0010a1a4(0xc9,&DAT_00446f2c,0x14);
  FUN_0010e584(&LAB_00118170,&LAB_00118290);
  temp_v0 = FUN_002c2a04(0);
  if (temp_v0 == 3) {
    FUN_002c29d8(0,10,0xff);
  }
  temp_v0 = FUN_002c2a04(1);
  if (temp_v0 == 3) {
    FUN_002c29d8(1,10,0xff);
    return;
  }
  return;
}
