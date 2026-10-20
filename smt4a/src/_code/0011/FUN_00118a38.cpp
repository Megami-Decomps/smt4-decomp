/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118a38` (_code @ 0x118a38, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e5700(unsigned char [56], unsigned char *, int, int);
int FUN_002f5020(unsigned char [56], unsigned char *, int, int);
int FUN_00304efc(...);

extern unsigned char LAB_001145e5; /* 0x1145e5 */
extern unsigned char LAB_00114615; /* 0x114615 */

/* Supplied declaration required: FUN_002e5700. */
/* Supplied declaration required: FUN_002f5020. */
extern int FUN_00304d10(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00304efc. */


void FUN_00118a38(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [56];
  
  temp_v0 = FUN_00304d10(param_2,0);
  if (temp_v0 != 0) {
    FUN_00304efc(param_1,temp_v0);
  }
  else {
    FUN_002f5020(temp_v1,&LAB_001145e5,0x38,1);
    FUN_00304efc(param_1,temp_v1);
    FUN_002e5700(temp_v1,&LAB_00114615,0x38,1);
  }
  return;
}

} /* extern "C" */
