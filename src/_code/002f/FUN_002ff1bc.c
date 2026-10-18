/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff1bc` (_code @ 0x2ff1bc, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern int FUN_00296cc8(unsigned int);


unsigned int FUN_002ff1bc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v3 = 0;
  while( 1 ) {
    temp_v1 = FUN_002939f4();
    puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v3 * 0x288);
    temp_v2 = *puVar3;
    if ((((temp_v2 & 0x10) != 0 && (temp_v2 & 1) != 0) && ((temp_v2 & 0x40) == 0)) &&
       (*(unsigned short *)((int)puVar3 + temp_v0 * 2 + 0x1f2) >> 10 == 4)) break;
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x6d) {
      FUN_0028dcb0(0);
      return 1;
    }
  }
  FUN_0028dcb0(1);
  return 1;
}
