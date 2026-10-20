/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011921c` (_code @ 0x11921c, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7160(unsigned int, int);
int FUN_002bff38(int);

extern int g_bustupCutAnim; /* 0x43dfc0 */

extern unsigned char FUN_00126520(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b7160. */
extern int FUN_002b7174(unsigned int);
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_002bff38. */


unsigned int FUN_0011921c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v0 = g_bustupCutAnim;
  if (g_bustupCutAnim == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 0;
    temp_v4 = 1;
    do {
      temp_v5 = temp_v0 + temp_v4 * 4;
      temp_v3 = jobIsValid(*(unsigned int *)(temp_v5 + 0x630));
      if (temp_v3 != 0) {
        temp_v3 = FUN_002b7174(*(unsigned int *)(temp_v5 + 0x630));
        if (temp_v3 == param_1) {
          FUN_002b7160(*(unsigned int *)(temp_v5 + 0x630),1);
          temp_v2 = 1;
          if (*(unsigned int *)(temp_v0 + 0x604) < 0xf) {
            temp_v2 = 2;
          }
          temp_v1 = FUN_00126520(*(unsigned int *)(temp_v5 + 0x630),temp_v2);
          FUN_002bff38(temp_v1);
          temp_v2 = 1;
        }
        else {
          FUN_002b7160(*(unsigned int *)(temp_v5 + 0x630),0);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
  }
  return temp_v2;
}

} /* extern "C" */
