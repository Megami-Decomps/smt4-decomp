/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039da34` (_code @ 0x39da34, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00192550. */
extern int scrGetArg(unsigned int);


unsigned int FUN_0039da34(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  unsigned short *puVar6;
  unsigned short *puVar7;
  unsigned short *puVar8;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  if (temp_v0 != 0) {
    puVar8 = *(unsigned short **)(temp_v2 + 0x4e58);
    if (*(unsigned short **)(temp_v2 + 0x4e5c) != puVar8) {
      do {
        temp_v3 = (unsigned int)*puVar8;
        FUN_00192550();
        if (*(int *)(temp_v3 + 0x3c) == temp_v1) {
          puVar8 = puVar8 + 1;
        }
        else {
          puVar5 = *(unsigned short **)(temp_v2 + 0x4e5c);
          if (*(unsigned short **)(temp_v2 + 0x4e58) != puVar5) {
            puVar6 = puVar8 + 1;
            if ((puVar5 != puVar6) && (temp_v0 = (int)puVar5 - (int)puVar6, 0 < temp_v0 >> 1)) {
              puVar5 = puVar8;
              puVar7 = puVar8 + -1;
              if (temp_v0 * 0x40000000 < 0) {
                *puVar8 = *puVar6;
                puVar5 = puVar6;
                puVar7 = puVar8;
              }
              for (temp_v0 = temp_v0 >> 2; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
                puVar7[1] = puVar5[1];
                puVar5 = puVar5 + 2;
                puVar7 = puVar7 + 2;
                *puVar7 = *puVar5;
              }
            }
            *(int *)(temp_v2 + 0x4e5c) = *(int *)(temp_v2 + 0x4e5c) - 2;
          }
        }
      } while (*(unsigned short **)(temp_v2 + 0x4e5c) != puVar8);
    }
  }
  return 1;
}

} /* extern "C" */
