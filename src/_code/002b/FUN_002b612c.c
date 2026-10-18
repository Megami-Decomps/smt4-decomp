/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b612c` (_code @ 0x2b612c, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_00127fa8; /* 0x127fa8 */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_001413d0. */
extern int FUN_0014143c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5d5c. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b612c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int unaff_r4;
  unsigned int unaff_r8;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  
  FUN_002c5d5c(param_1,&LAB_00127fa8,0x18,6);
  *(unsigned char *)(param_1 + 0x90) = 0;
  *(unsigned char *)(param_1 + 0x91) = 0;
  *(unsigned char *)(param_1 + 0x92) = 0;
  *(unsigned char *)(param_1 + 0x93) = 0;
  *(unsigned char *)((unaff_r8 & 0xffffff00) + 0xe) = 0;
  temp_v0 = unaff_r8 >> 0xe;
  temp_v1 = FUN_0014143c(DAT_00433158,temp_v0);
  if (temp_v1 != 0) {
    FUN_001413d0(DAT_00433158,temp_v0,unaff_r4 >> 0xd,0,0xfffffffe);
    return;
  }
  if (temp_v0 >= 0x200) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iStack_48 = (temp_v0 / 0x10) * 0x10;
  iStack_44 = iStack_48 + 0x10;
  iStack_40 = (temp_v0 % 0x10) * 0x20;
  if (*(char *)(temp_v0 + 0x18) != '\0' ||
      &iStack_48 != *(int **)(temp_v0 + ((int)&iStack_48 >> 0x20) * 4 + 8)) {
    (**(romwright_code **)(temp_v0 + 0x1c))();
    *(unsigned char *)(temp_v0 + 0x18) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
