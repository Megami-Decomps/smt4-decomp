/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215cd4` (_code @ 0x215cd4, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_00250798. */
/* Supplied declaration required: FUN_0028fe0c. */
extern unsigned char FUN_00298f88(void);
/* Supplied declaration required: FUN_002b63c0. */
/* Supplied declaration required: FUN_002bd8e8. */


void FUN_00215cd4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = DAT_0043dd50;
  *(unsigned char *)(DAT_0043dd50 + 0x5f2) = 1;
  temp_v2 = FUN_00298f88();
  *(unsigned char *)(temp_v0 + 0x5c4) = temp_v2;
  *(short *)(temp_v0 + 0x97e) = (short)param_1;
  FUN_00250798();
  FUN_0028fe0c(param_1,1);
  FUN_002bd8e8(temp_v0 + 0x34,0);
  temp_v1 = DAT_0043dd50;
  *(unsigned int *)(DAT_0043dd50 + 8) = *(unsigned int *)(DAT_0043dd50 + 4);
  *(unsigned int *)(temp_v1 + 4) = 1;
  *(unsigned int *)(temp_v1 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0x1d;
  FUN_002b63c0();
  if ((*(unsigned char *)(param_1 + 7) & 0x40) != 0) {
    *(unsigned int *)(temp_v0 + 0x5c8) = 2;
  }
  else {
    *(unsigned int *)(temp_v0 + 0x5c8) = 1;
  }
  return;
}
