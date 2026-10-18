/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cbf8` (_code @ 0x31cbf8, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_0031cbf8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v3 = -1;
  temp_v2 = 0;
  while( 1 ) {
    temp_v1 = FUN_002939f4();
    puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v2 * 0x288);
    if (((*puVar3 & 0x10) != 0) && (*(unsigned short *)((int)puVar3 + 0xce) == temp_v0)) break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      FUN_0028dcb0(temp_v3);
      return 1;
    }
  }
  temp_v3 = (int)(short)puVar3[2];
  FUN_0028dcb0(temp_v3);
  return 1;
}
