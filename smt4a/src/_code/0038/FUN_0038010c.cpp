/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038010c` (_code @ 0x38010c, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00192550. */
extern int FUN_00236038(unsigned int);


unsigned int FUN_0038010c(void)

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
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_0014aa78();
  if (temp_v0 != 0) {
    puVar8 = *(unsigned short **)(temp_v2 + 0x4e58);
    if (*(unsigned short **)(temp_v2 + 0x4e5c) != puVar8) {
      do {
        temp_v3 = (unsigned int)*puVar8;
        FUN_00192550();
        if (*(int *)(temp_v3 + 0x3c) != temp_v1) {
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
