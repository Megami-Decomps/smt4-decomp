/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f8bc` (_code @ 0x35f8bc, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f50fc(int, unsigned int);

extern unsigned int g_battleMaskPresets; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_001f50fc. */
extern int valueAtF0IsReady(void);


unsigned int FUN_0035f8bc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  
  temp_v1 = btlGetMainState();
  if ((temp_v1 != 0) && (temp_v2 = valueAtF0IsReady(), temp_v2 != 0)) {
    temp_v2 = 4;
    do {
      puVar5 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v2 * 0x408);
      if (((*puVar5 & g_battleMaskPresets) != 0 || (puVar5[1] & DAT_00570d7c) != 0) &&
         ((*puVar5 & DAT_00570d90) == 0 && (DAT_00570d94 & puVar5[1]) == 0)) {
        temp_v0 = (int)(puVar5[0x97] * 0x1d) / 100;
        temp_v3 = puVar5[0x96];
        if ((int)puVar5[0x96] < (int)temp_v0) {
          temp_v3 = temp_v0;
        }
        FUN_001f50fc((int)*(short *)((int)puVar5 + 0x166),temp_v3);
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x36);
  }
  return 1;
}

} /* extern "C" */
