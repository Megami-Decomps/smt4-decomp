/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211c50` (_code @ 0x211c50, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00289640(void);
extern int FUN_002bf41c(void);
extern int FUN_002c0ac8(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */
extern unsigned int FUN_0031bdbc(void);


unsigned int FUN_00211c50(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_0031bdbc();
  temp_v1 = FUN_002bf41c();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002c0ac8(temp_v0);
    if (*(int *)(temp_v1 + 0xc) == 1) {
      FUN_002c45b8(temp_v0,0);
      return 1;
    }
    if (*(char *)(temp_v1 + 100) != '\0') {
      temp_v2 = FUN_00289640();
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
