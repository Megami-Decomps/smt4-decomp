/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7d6c` (_code @ 0x2f7d6c, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(unsigned int);
extern int FUN_0029bcf0(unsigned int);


unsigned int FUN_002f7d6c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v4 = -1;
  temp_v3 = 0;
  while( 1 ) {
    temp_v1 = FUN_002939f4();
    puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v3 * 0x288);
    temp_v2 = *puVar3;
    if (((((temp_v2 & 1) != 0) && ((temp_v2 & 0x40) == 0)) && ((temp_v2 & 8) != 0)) &&
       (((-1 < (short)puVar3[2] && (puVar3[0x9f] != 0)) &&
        (*(unsigned short *)(puVar3[0x9f] + 0x46) == temp_v0)))) break;
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x6d) {
      temp_v3 = FUN_0029bcf0(temp_v0 & 0xffff);
      if (-1 < temp_v3) {
        temp_v4 = temp_v3 + 0x6d;
      }
      FUN_0028dcb0(temp_v4);
      return 1;
    }
  }
  temp_v4 = (int)(short)puVar3[2];
  FUN_0028dcb0(temp_v4);
  return 1;
}

} /* extern "C" */
