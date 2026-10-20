/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311d90` (_code @ 0x311d90, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);


unsigned int FUN_00311d90(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v3 = 0;
  if (temp_v0 == 0) {
    temp_v3 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v3 = 10;
  }
  else if (temp_v0 == 2) {
    temp_v3 = 0xb;
  }
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = btlGetMainState();
    puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v0 * 0x288);
    temp_v2 = *puVar3;
    if ((((temp_v2 & 0x10) != 0 && (temp_v2 & 1) != 0) && ((temp_v2 & 0x40) == 0)) &&
       (0 < *(short *)((int)puVar3 + temp_v3 * 2 + 0x72))) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x6d) {
      scrSetResult(0);
      return 1;
    }
  }
  scrSetResult(1);
  return 1;
}

} /* extern "C" */
