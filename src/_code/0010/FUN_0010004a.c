/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010004a` (_code @ 0x10004a, 0x9e bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

extern int DAT_001000e8; /* 0x1000e8 */
extern int DAT_001000ec; /* 0x1000ec */

extern unsigned int FUN_00100262(unsigned int);
extern int *FUN_002c6c40(void);


unsigned int FUN_0010004a(unsigned int param_1)

{
  int *piVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  piVar1 = (int *)FUN_002c6c40();
  if (*(char *)(*piVar1 + 0x100) == '\0') {
    temp_v0 = FUN_00100262(param_1);
    return temp_v0;
  }
  if (param_1 < 0x10000) {
    temp_v5 = -1;
    temp_v4 = DAT_001000e8;
    while (temp_v3 = temp_v5, temp_v4 - temp_v3 >= 2) {
      temp_v2 = (temp_v3 + temp_v4) / 2;
      temp_v5 = temp_v2 * 6;
      temp_v1 = (unsigned int)*(unsigned short *)(DAT_001000ec + 0x10008a + temp_v5);
      if (((param_1 - temp_v1) & 0xffff) < (*(unsigned short *)(temp_v5 + DAT_001000ec + 0x10008a + 2) & 0x3fff)
         ) {
        if (temp_v4 - temp_v3 < 2) {
          return 0;
        }
        temp_v5 = temp_v5 + DAT_001000ec + 0x10008a;
        return *(unsigned int *)
                (DAT_001000ec + 0x100052 +
                (*(unsigned short *)(temp_v5 + 4) >>
                 (((param_1 - *(unsigned short *)(DAT_001000ec + 0x10008a + temp_v2 * 6)) &
                   ~(-1 << (unsigned int)(*(unsigned short *)(temp_v5 + 2) >> 0xe)) & 0x3f) << 2) & 0xf) * 4);
      }
      temp_v5 = temp_v2;
      if ((int)param_1 < (int)temp_v1) {
        temp_v5 = temp_v3;
        temp_v4 = temp_v2;
      }
    }
  }
  return 0;
}
