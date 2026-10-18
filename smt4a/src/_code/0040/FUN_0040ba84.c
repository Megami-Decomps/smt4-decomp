/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040ba84` (_code @ 0x40ba84, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0040bc84; /* 0x40bc84 */
extern unsigned char LAB_0040bca0; /* 0x40bca0 */
extern unsigned char LAB_0040bcd8; /* 0x40bcd8 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_003e573c. */
extern unsigned int FUN_0040b11c(unsigned int, unsigned int, unsigned short, unsigned short, unsigned int);


/* WARNING: Removing unreachable block (ram,0x0040bba8) */
/* WARNING: Removing unreachable block (ram,0x0040bafc) */
/* WARNING: Removing unreachable block (ram,0x0040bc38) */

void FUN_0040ba84(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [68];
  
  if (param_2 != 0) {
    temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 6);
    FUN_00192608();
    temp_v1 = FUN_0040b11c(param_1,0,*(unsigned short *)(temp_v0 + 0x40),*(unsigned short *)(temp_v0 + 0x42),0);
    FUN_00100388(temp_v2,&LAB_0040bc84,*(unsigned short *)(temp_v0 + 0x40),
                 *(unsigned short *)(temp_v0 + 0x42),temp_v1);
    FUN_003e573c(param_1,0,temp_v2,param_3);
    temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 8);
    FUN_00192608();
    temp_v1 = FUN_0040b11c(param_1,1,*(unsigned short *)(temp_v0 + 0x40),*(unsigned short *)(temp_v0 + 0x42),0);
    FUN_00100388(temp_v2,&LAB_0040bca0,*(unsigned short *)(temp_v0 + 0x40),
                 *(unsigned short *)(temp_v0 + 0x42),temp_v1);
    FUN_003e573c(param_1,1,temp_v2,param_3);
    temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 10);
    FUN_00192608();
    temp_v1 = FUN_0040b11c(param_1,2,*(unsigned short *)(temp_v0 + 0x40),*(unsigned short *)(temp_v0 + 0x42),0);
    FUN_00100388(temp_v2,&LAB_0040bcd8,*(unsigned short *)(temp_v0 + 0x40),
                 *(unsigned short *)(temp_v0 + 0x42),temp_v1);
    FUN_003e573c(param_1,2,temp_v2,param_3);
    return;
  }
  return;
}
