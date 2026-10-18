/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024f07c` (_code @ 0x24f07c, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004656ca; /* 0x4656ca */
extern signed char DAT_004656cb; /* 0x4656cb */
extern signed char DAT_004656cc; /* 0x4656cc */
extern signed char DAT_004656ce; /* 0x4656ce */
extern unsigned int DAT_004e629c; /* 0x4e629c */

extern int FUN_00239bec(void);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
extern unsigned int FUN_00359700(unsigned int);
extern unsigned int FUN_0035b084(unsigned int);


unsigned int FUN_0024f07c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0xc8a10bf0;
  if ((DAT_004656ca != '\0') || (temp_v0 = FUN_00239bec(), temp_v0 != 0)) {
    FUN_002c3aa8(&DAT_004e629c);
    temp_v1 = 0;
    if (param_1 != 0) {
      temp_v0 = FUN_00239bec();
      if (temp_v0 == 0 && DAT_004656ce == '\0') {
        temp_v1 = 0xc8810bea;
        FUN_002c3a24(&DAT_004e629c);
        return temp_v1;
      }
      temp_v1 = FUN_00359700(0xe);
    }
    if (DAT_004656cb == '\0') {
      FUN_002c3a24(&DAT_004e629c);
      return 0xc8a10bf0;
    }
    if (DAT_004656cc != '\0') {
      temp_v1 = FUN_0035b084(0);
      if ((temp_v1 & 0x80000000) != 0) {
        FUN_002c3a24(&DAT_004e629c);
        return temp_v1;
      }
      DAT_004656cc = '\0';
    }
    FUN_002c3a24(&DAT_004e629c);
  }
  return temp_v1;
}
