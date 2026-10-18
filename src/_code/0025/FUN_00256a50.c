/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256a50` (_code @ 0x256a50, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00125d78; /* 0x125d78 */
extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_001316ec. */
/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(int);
extern unsigned int FUN_002c0e9c(void);
extern int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_00256a50(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  if (((*(int *)(DAT_00433158 + 0x3c4) == 0) ||
      (temp_v0 = DAT_00433158, FUN_001316ec(DAT_00433158,param_1), temp_v0 == 0)) &&
     (temp_v0 = FUN_002c0ec4(8,3), temp_v0 != 0)) {
    temp_v1 = FUN_002c0e9c();
    temp_v2 = FUN_002c0e4c(temp_v0);
    FUN_002b48dc(temp_v3,temp_v1,temp_v2,0x3c,&LAB_00125d78);
  }
  return;
}
