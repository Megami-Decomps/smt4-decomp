/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211d4c` (_code @ 0x211d4c, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c43b4(unsigned int, int);

extern int FUN_002893d8(void);
extern int FUN_002bf244(void);
extern int FUN_002c08f0(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */
extern unsigned int FUN_0031bc6c(void);


unsigned int FUN_00211d4c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_0031bc6c();
  temp_v1 = FUN_002bf244();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002c08f0(temp_v0);
    if (*(int *)(temp_v1 + 0xc) == 1) {
      FUN_002c43b4(temp_v0,0);
      return 1;
    }
    if (*(char *)(temp_v1 + 100) != '\0') {
      temp_v2 = FUN_002893d8();
      if (temp_v2 == 0) {
        *(unsigned char *)(temp_v1 + 0x30) = 1;
        *(unsigned int *)(temp_v1 + 0x28) = 0xbdcccccd;
      }
      return 0;
    }
    *(unsigned char *)(temp_v1 + 0x30) = 1;
    *(unsigned int *)(temp_v1 + 0x28) = 0xbe800000;
  }
  return 1;
}

} /* extern "C" */
