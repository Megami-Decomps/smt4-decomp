/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cbf8` (_code @ 0x31cbf8, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_0031cbf8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v3 = -1;
  temp_v2 = 0;
  while( 1 ) {
    temp_v1 = btlGetMainState();
    puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v2 * 0x288);
    if (((*puVar3 & 0x10) != 0) && (*(unsigned short *)((int)puVar3 + 0xce) == temp_v0)) break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      scrSetResult(temp_v3);
      return 1;
    }
  }
  temp_v3 = (int)(short)puVar3[2];
  scrSetResult(temp_v3);
  return 1;
}

} /* extern "C" */
