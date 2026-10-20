/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046bc7c` (_code @ 0x46bc7c, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b31ac(void);
int FUN_001b31e0(void);
int FUN_00429f38(void);

extern int g_aocMain; /* 0x570260 */

extern int FUN_001b315c(char *);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */
extern int FUN_001d109c(void);
/* Supplied declaration required: FUN_00429f38. */


int FUN_0046bc7c(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  char *pcVar5;
  char *pcVar6;
  
  temp_v3 = param_1;
  FUN_00429f38();
  if (temp_v3 != 0) {
    temp_v1 = FUN_001d109c();
    temp_v3 = 0;
    if (temp_v1 != 0) {
      temp_v3 = 0;
      temp_v1 = 0;
      if (temp_v1 < *(int *)(param_1 + 0x310)) {
        do {
          pcVar5 = (char *)(*(int *)(param_1 + 0x318) + temp_v1 * 0x50);
          temp_v2 = FUN_001b315c(pcVar5);
          if (temp_v2 != 0) {
            pcVar6 = pcVar5;
            FUN_001b31ac();
            FUN_001b31e0();
            for (; pcVar5 != (char *)0x0; pcVar5 = pcVar5 + -1) {
              temp_v0 = *pcVar6;
              pcVar6 = pcVar6 + 0x40;
              if (temp_v0 == param_2) {
                temp_v3 = temp_v3 + 1;
              }
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(int *)(param_1 + 0x310));
      }
    }
    return temp_v3;
  }
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
  return 0;
}

} /* extern "C" */
