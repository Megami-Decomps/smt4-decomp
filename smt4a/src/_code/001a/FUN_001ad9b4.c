/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad9b4` (_code @ 0x1ad9b4, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned short sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
} param_1_stack;

extern unsigned char LAB_001861dc; /* 0x1861dc */
extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);


void FUN_001ad9b4(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3 [154];
  unsigned int temp_v4 [2];
  
  temp_v4[0] = 0x1b;
  temp_v4[1] = 0x1c;
  temp_v3[0] = param_1;
  if (*(int *)(DAT_00570280 + 0x388) != 0) {
    puVar1 = temp_v3;
    FUN_00100854(puVar1,*(int *)(DAT_00570280 + 0x388),*(unsigned int *)(DAT_00570280 + 900),0x134,
                 &LAB_001861dc);
    if (puVar1 != (unsigned short *)0x0) {
      return;
    }
  }
  temp_v2 = 0;
  do {
    temp_v0 = FUN_00187180(temp_v4[temp_v2],0);
    temp_v1 = FUN_00192798();
    temp_v0 = FUN_00192748(temp_v0);
    puVar1 = temp_v3;
    FUN_00100854(puVar1,temp_v1,temp_v0,0x134,&LAB_001861dc);
    if (puVar1 != (unsigned short *)0x0) {
      return;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  return;
}
