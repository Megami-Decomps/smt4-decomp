/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d24c` (_code @ 0x28d24c, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae164(void);

extern int FUN_0026efec(unsigned int);
/* Supplied declaration required: FUN_002ae164. */


unsigned int FUN_0028d24c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = *(unsigned int *)(param_1 + 0x2f34);
  if (temp_v1 - 1 >= 4) {
    temp_v2 = 0;
    temp_v1 = temp_v2;
    do {
      temp_v0 = FUN_0026efec(temp_v2);
      temp_v2 = temp_v2 + 1;
      if (*(short *)(temp_v0 + 0x48) != 0) {
        temp_v1 = temp_v1 + 1;
      }
    } while ((int)temp_v2 < 0xc);
  }
  if ((0 < (int)temp_v1) && (temp_v0 = 0, 0 < *(short *)(param_1 + 0xb4))) {
    do {
      temp_v3 = (unsigned int)*(unsigned short *)(param_1 + temp_v0 * 2 + 0x8c);
      temp_v2 = temp_v3;
      FUN_002ae164();
      if (*(unsigned char *)(temp_v2 + 0x4b) == temp_v1) {
        return temp_v3;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0xb4));
  }
  return 0;
}

} /* extern "C" */
