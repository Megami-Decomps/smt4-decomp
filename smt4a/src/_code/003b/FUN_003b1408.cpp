/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b1408` (_code @ 0x3b1408, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int FUN_001aba54(void);
int FUN_003283ac(unsigned int);

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_001aba54. */
extern unsigned short FUN_001ba3d4(unsigned int);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003b1408(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v2 = FUN_00236038(0);
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v3 = FUN_0014aa78();
  if (temp_v2 != 0) {
    puVar5 = *(unsigned short **)(temp_v3 + 0x4e58);
    temp_v4 = 0;
    if (*(unsigned short **)(temp_v3 + 0x4e5c) != puVar5) {
      do {
        temp_v0 = *puVar5;
        temp_v1 = FUN_001ba3d4((unsigned int)temp_v0);
        temp_v5 = temp_v4;
        if (temp_v4 < temp_v1) {
          temp_v5 = temp_v1;
        }
        if (temp_v4 < temp_v1) {
          temp_v6 = (unsigned int)temp_v0;
        }
        puVar5 = puVar5 + 1;
        temp_v4 = temp_v5;
      } while (*(unsigned short **)(temp_v3 + 0x4e5c) != puVar5);
    }
    FUN_00192550();
    temp_v6 = (unsigned int)*(unsigned short *)(temp_v6 + 0x32);
    FUN_001aba54();
    if (temp_v6 != 0) {
      temp_v7 = (*(unsigned int *)(temp_v6 + 0x28) & 0xffff) >> 0xb;
    }
  }
  FUN_003283ac(temp_v7);
  return 1;
}

} /* extern "C" */
