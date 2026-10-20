/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038971c` (_code @ 0x38971c, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b06c4(void);

extern unsigned int g_aocMain; /* 0x432fc8 */

extern int FUN_002955fc(void);
extern int FUN_002a1534(unsigned int);
extern int FUN_002a6d50(unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_002b06c4. */
extern int FUN_002b8804(void);


unsigned int FUN_0038971c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  param_2 = param_2 & 0xffff;
  FUN_002b06c4();
  temp_v0 = *(short *)(param_2 + 0x88);
  temp_v1 = FUN_002955fc();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002a1534(g_aocMain);
    if (temp_v1 != 0) {
      return 1;
    }
  }
  else {
    temp_v1 = FUN_002b8804();
    if (temp_v1 != 0) {
      return 1;
    }
    temp_v1 = FUN_002a6d50(param_1,0x16,temp_v0 + 1);
    if ((temp_v1 != 0) && (*(char *)(temp_v1 + 0xd) != '\0')) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
