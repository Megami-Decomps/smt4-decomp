/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f06c` (_code @ 0x35f06c, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_0035f06c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned short *puVar5;
  unsigned short *puVar6;
  unsigned short *puVar7;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  if (temp_v0 != 0) {
    puVar7 = *(unsigned short **)(temp_v2 + 0x4e58);
    if (*(unsigned short **)(temp_v2 + 0x4e5c) != puVar7) {
      do {
        if (*puVar7 != temp_v1) {
          puVar7 = puVar7 + 1;
        }
        else {
          puVar4 = *(unsigned short **)(temp_v2 + 0x4e5c);
          if (*(unsigned short **)(temp_v2 + 0x4e58) != puVar4) {
            puVar5 = puVar7 + 1;
            if ((puVar4 != puVar5) && (temp_v0 = (int)puVar4 - (int)puVar5, 0 < temp_v0 >> 1)) {
              puVar4 = puVar7;
              puVar6 = puVar7 + -1;
              if (temp_v0 * 0x40000000 < 0) {
                *puVar7 = *puVar5;
                puVar4 = puVar5;
                puVar6 = puVar7;
              }
              for (temp_v0 = temp_v0 >> 2; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
                puVar6[1] = puVar4[1];
                puVar4 = puVar4 + 2;
                puVar6 = puVar6 + 2;
                *puVar6 = *puVar4;
              }
            }
            *(int *)(temp_v2 + 0x4e5c) = *(int *)(temp_v2 + 0x4e5c) - 2;
          }
        }
      } while (*(unsigned short **)(temp_v2 + 0x4e5c) != puVar7);
    }
  }
  return 1;
}

} /* extern "C" */
