/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aba54` (_code @ 0x1aba54, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp78; /* 0x78: local_78 */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_1_stack;

extern unsigned char LAB_001ac63c; /* 0x1ac63c */
extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_001b2e34. */


void FUN_001aba54(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = DAT_00570280;
  FUN_001b2e34(DAT_00570280,param_1);
  if (temp_v0 == 0) {
    temp_v1 = FUN_00187180(4,0);
    temp_v2 = FUN_00192798();
    temp_v1 = FUN_00192748(temp_v1);
    temp_v4 = (unsigned short)param_1;
    FUN_00100854(temp_v3,temp_v2,temp_v1,0x88,&LAB_001ac63c);
  }
  return;
}
