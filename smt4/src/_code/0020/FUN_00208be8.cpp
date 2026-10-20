/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208be8` (_code @ 0x208be8, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetMapBlock(...);

extern unsigned int FUN_0027d98c(void);
extern int FUN_00287800(void);
/* Supplied declaration required: gameGetMapBlock. */


void FUN_00208be8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = gameGetMapBlock();
  if (*(char *)(temp_v0 + 0x790) != '\0') {
    *(unsigned char *)(temp_v0 + 0x790) = 0;
    temp_v1 = FUN_0027d98c();
    switch(temp_v1) {
    case 0:
    case 1:
    case 3:
    case 5:
      temp_v0 = FUN_00287800();
      if (temp_v0 == 0) {
        temp_v0 = gameGetMapBlock(0);
        *(unsigned char *)(temp_v0 + 3) = 0;
        temp_v0 = gameGetMapBlock();
        *(unsigned char *)(temp_v0 + 0x1c) = 0;
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
