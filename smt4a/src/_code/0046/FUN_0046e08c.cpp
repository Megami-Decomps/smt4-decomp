/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046e08c` (_code @ 0x46e08c, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b31ac(void);
int FUN_001b31e0(void);

extern unsigned int g_aocMain; /* 0x570260 */

extern int FUN_001b3148(unsigned int);
extern int FUN_001b315c(unsigned int);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */


unsigned int FUN_0046e08c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  char *pcVar6;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  if ((param_3 != 0) && (temp_v1 = FUN_001b3148(g_aocMain), temp_v1 == 0)) {
    return 0;
  }
  temp_v1 = 0;
  if (temp_v1 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v5 = *(int *)(param_1 + 0x318) + temp_v1 * 0x50;
      temp_v2 = FUN_001b315c(temp_v5);
      if (temp_v2 != 0) {
        temp_v3 = temp_v5;
        FUN_001b31ac();
        FUN_001b31e0();
        temp_v4 = 0;
        if (temp_v4 < temp_v5) {
          do {
            pcVar6 = (char *)(temp_v3 + temp_v4 * 0x40);
            temp_v0 = *pcVar6;
            temp_v6 = temp_v0 == '\a' || temp_v0 == '\b';
            if (temp_v0 == '\a' || temp_v0 == '\b') {
              temp_v6 = *(int *)(pcVar6 + 0x3c) == param_2;
            }
            if (temp_v6) {
              return 1;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < temp_v5);
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 0x310));
  }
  return 0;
}

} /* extern "C" */
