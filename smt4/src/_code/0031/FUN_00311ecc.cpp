/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311ecc` (_code @ 0x311ecc, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int scrGetArg(int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_00311ecc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v4 = 0;
  do {
    temp_v2 = btlGetMainState();
    puVar4 = (unsigned int *)(*(int *)(temp_v2 + 0x1fc0) + temp_v4 * 0x288);
    temp_v3 = *puVar4;
    if ((temp_v3 & 0x10) != 0 && (temp_v3 & 1) != 0) {
      temp_v5 = (temp_v3 & 0x40) == 0;
      if (temp_v5) {
        temp_v3 = (unsigned int)*(unsigned short *)((int)puVar4 + 0xce);
      }
      if ((temp_v5 && temp_v3 == temp_v0) && (*(unsigned short *)((int)puVar4 + temp_v1 * 2 + 0x1f2) >> 10 == 4)) {
        scrSetResult(1);
        return 1;
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x6d) {
      scrSetResult(0);
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
