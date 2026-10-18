/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311d70` (_code @ 0x311d70, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_00311d70(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296f60(0);
  temp_v3 = 0;
  while( 1 ) {
    temp_v1 = FUN_00293c98();
    puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v3 * 0x288);
    temp_v2 = *puVar3;
    if ((((temp_v2 & 0x10) != 0 && (temp_v2 & 1) != 0) && ((temp_v2 & 0x40) == 0)) &&
       (((unsigned int)*(unsigned short *)((int)puVar3 + 0x1c6) & (1 << (temp_v0 & 0xff))) == 0)) break;
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x6d) {
      FUN_0028df54(1);
      return 1;
    }
  }
  FUN_0028df54(0);
  return 1;
}
