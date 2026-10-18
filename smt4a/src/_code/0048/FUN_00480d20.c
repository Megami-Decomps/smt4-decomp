/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00480d20` (_code @ 0x480d20, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_00169230; /* 0x169230 */
extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
/* Supplied declaration required: FUN_001763a4. */
extern int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(int);
extern unsigned int FUN_00192798(void);


void FUN_00480d20(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  if (((*(int *)(DAT_00570280 + 0x3d0) == 0) ||
      (temp_v0 = DAT_00570280, FUN_001763a4(DAT_00570280,param_1), temp_v0 == 0)) &&
     (temp_v0 = FUN_00187180(8,4), temp_v0 != 0)) {
    temp_v1 = FUN_00192798();
    temp_v2 = FUN_00192748(temp_v0);
    FUN_00100854(temp_v3,temp_v1,temp_v2,0x30,&LAB_00169230);
  }
  return;
}
