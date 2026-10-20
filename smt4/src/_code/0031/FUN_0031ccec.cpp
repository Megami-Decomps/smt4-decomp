/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031ccec` (_code @ 0x31ccec, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);


unsigned int FUN_0031ccec(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = -1;
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = btlGetMainState();
    puVar2 = (unsigned int *)(*(int *)(temp_v0 + 0x1fc0) + temp_v2 * 0x288);
    temp_v1 = *puVar2;
    if (((((temp_v1 & 1) != 0) && ((temp_v1 & 0x40) == 0)) && (-1 < (short)puVar2[2])) &&
       ((temp_v1 & 0x10) != 0)) break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      scrSetResult(temp_v3);
      return 1;
    }
  }
  temp_v3 = (int)(short)puVar2[2];
  scrSetResult(temp_v3);
  return 1;
}

} /* extern "C" */
