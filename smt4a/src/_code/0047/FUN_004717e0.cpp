/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004717e0` (_code @ 0x4717e0, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetEntries(void);
int FUN_00429f38(void);

extern int g_aocMain; /* 0x570260 */

extern int dataTableGetCount(int);
/* Supplied declaration required: dataTableGetEntries. */
extern int FUN_001a6f60(int, unsigned int);
extern int FUN_001d109c(void);
/* Supplied declaration required: FUN_00429f38. */


int FUN_004717e0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 0x44c);
  temp_v2 = 0;
  if (temp_v0 != 0) {
    FUN_00429f38();
    if (temp_v0 == 0) {
      *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
      return 0;
    }
    temp_v0 = FUN_001d109c();
    temp_v2 = 0;
    if (temp_v0 != 0) {
      temp_v2 = 0;
      temp_v0 = 0;
      if (temp_v0 < *(int *)(param_1 + 0x444)) {
        do {
          temp_v1 = *(int *)(*(int *)(param_1 + 0x44c) + temp_v0 * 0x10);
          if ((temp_v1 != 0) && (temp_v1 = FUN_001a6f60(temp_v1,0), temp_v1 != 0)) {
            dataTableGetEntries();
            temp_v1 = dataTableGetCount(temp_v1);
            temp_v2 = temp_v2 + temp_v1;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < *(int *)(param_1 + 0x444));
      }
    }
  }
  return temp_v2;
}

} /* extern "C" */
