/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a0c08` (_code @ 0x2a0c08, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a0cc8(int);
int FUN_002b8838(int);

extern int DAT_0043dd68; /* 0x43dd68 */

extern int FUN_00296f4c(unsigned int, int);
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002b8838. */


unsigned int FUN_002a0c08(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043dd68;
  if (DAT_0043dd68 != 0) {
    if (*(char *)(DAT_0043dd68 + 0x430) != '\0') {
      *(int *)(DAT_0043dd68 + 0x478) = param_1;
    }
    else {
      temp_v1 = FUN_00296f4c(*(unsigned int *)(DAT_0043dd68 + 0x42c),param_1);
      if (temp_v1 != 0) {
        if (((!(param_1 == 7 || param_1 == 8)) && (!(param_1 == 9 || param_1 == 10))) &&
           (!(param_1 == 0xb || param_1 == 0xd))) {
          if (param_1 == 0xc) {
            FUN_002a0cc8(1);
          }
        }
        else {
          FUN_002a0cc8(1);
          FUN_002b8838(0x9e);
        }
        *(unsigned int *)(temp_v0 + 0x478) = 0xffffffff;
        *(int *)(temp_v0 + 0x434) = param_1;
        *(unsigned char *)(temp_v0 + 0x430) = 1;
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
