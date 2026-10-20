/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6fcc` (_code @ 0x2f6fcc, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern int FUN_00296cc8(unsigned int);


unsigned int FUN_002f6fcc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = FUN_00296cc8(0);
  temp_v4 = 0;
  while( 1 ) {
    temp_v2 = FUN_002939f4();
    puVar4 = (unsigned int *)(*(int *)(temp_v2 + 0x1fc0) + temp_v4 * 0x288);
    temp_v3 = *puVar4;
    if ((((temp_v3 & 0x10) != 0 && (temp_v3 & 1) != 0) && ((temp_v3 & 0x40) == 0)) &&
       (temp_v0 = *(unsigned short *)((int)puVar4 + temp_v1 * 2 + 0x1f2),
       (temp_v0 & 0xfc00) == 0 || temp_v0 >> 10 == 2)) break;
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x6d) {
      FUN_0028dcb0(0);
      return 1;
    }
  }
  FUN_0028dcb0(1);
  return 1;
}

} /* extern "C" */
