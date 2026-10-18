/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae4c4` (_code @ 0x2ae4c4, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp18; /* 0x18: local_18 */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern unsigned char LAB_00138868; /* 0x138868 */
extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00140f9c. */
/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(int);
extern unsigned int FUN_002c0e9c(void);
extern int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_002ae4c4(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [80];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  if (((*(int *)(DAT_00433158 + 0x3a0) == 0) ||
      (temp_v0 = DAT_00433158, FUN_00140f9c(DAT_00433158,param_1), temp_v0 == 0)) &&
     (temp_v0 = FUN_002c0ec4(8,0), temp_v0 != 0)) {
    temp_v1 = FUN_002c0e9c();
    temp_v2 = FUN_002c0e4c(temp_v0);
    FUN_002b48dc(temp_v3,temp_v1,temp_v2,0x58,&LAB_00138868);
  }
  return;
}
