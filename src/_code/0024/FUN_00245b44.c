/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245b44` (_code @ 0x245b44, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_00124704; /* 0x124704 */
extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00131454. */
/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_00245b44(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = DAT_00433158;
  FUN_00131454(DAT_00433158,param_1);
  if (temp_v0 == 0) {
    temp_v1 = FUN_002c0ec4(0x19,0);
    temp_v2 = FUN_002c0e9c();
    temp_v1 = FUN_002c0e4c(temp_v1);
    temp_v4 = (unsigned short)param_1;
    FUN_002b48dc(temp_v3,temp_v2,temp_v1,0x2c,&LAB_00124704);
  }
  return;
}
