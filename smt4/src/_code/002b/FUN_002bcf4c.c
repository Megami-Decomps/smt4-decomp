/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcf4c` (_code @ 0x2bcf4c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_001247e0; /* 0x1247e0 */
extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00131530. */
/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


void FUN_002bcf4c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = DAT_00433158;
  FUN_00131530(DAT_00433158,param_1);
  if (temp_v0 == 0) {
    temp_v1 = FUN_002c0cec(0x19,0);
    temp_v2 = FUN_002c0cc4();
    temp_v1 = FUN_002c0c74(temp_v1);
    temp_v4 = (unsigned short)param_1;
    FUN_002b46f8(temp_v3,temp_v2,temp_v1,0x2c,&LAB_001247e0);
  }
  return;
}
