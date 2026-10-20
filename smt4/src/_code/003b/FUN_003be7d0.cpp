/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003be7d0` (_code @ 0x3be7d0, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b06c4(void);

extern int FUN_0023eae0(unsigned int);
extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_002b06c4. */


void FUN_003be7d0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned short *puVar8;
  int temp_v7;
  
  temp_v0 = FUN_002939f4();
  temp_v5 = temp_v0 + 0x174;
  temp_v1 = (unsigned int)*(unsigned short *)((int)param_1 + 0xce);
  FUN_002b06c4();
  if (temp_v1 != 0) {
    temp_v7 = 0;
    *(int *)(temp_v0 + 0x1a8) = *(int *)(temp_v0 + 0x1a8) + *(int *)(temp_v1 + 0x6c);
    *(int *)(temp_v0 + 0x1a4) = *(int *)(temp_v0 + 0x1a4) + *(int *)(temp_v1 + 0x78);
    temp_v3 = *(unsigned int *)(temp_v0 + 0x1ac);
    if (*(unsigned int *)(temp_v0 + 0x1ac) <= (unsigned int)*(unsigned char *)(temp_v1 + 2)) {
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 2);
    }
    *(unsigned int *)(temp_v0 + 0x1ac) = temp_v3;
    temp_v0 = FUN_002939f4();
    temp_v6 = 0;
    if (*(char *)(temp_v0 + 0x44b7) != '\0') {
      temp_v7 = 0x32;
    }
    do {
      temp_v0 = temp_v1 + temp_v6 * 6;
      puVar8 = (unsigned short *)(temp_v0 + 0x58);
      if ((*puVar8 != 0) &&
         ((temp_v2 = FUN_0023eae0(99), temp_v2 < (int)((unsigned int)*(unsigned short *)(temp_v0 + 0x5a) + temp_v7) ||
          ((*param_1 & 0x4000000) != 0)))) {
        temp_v3 = (unsigned int)*puVar8;
        temp_v0 = 0;
        do {
          temp_v4 = *(unsigned int *)(temp_v5 + temp_v0 * 4);
          if (temp_v4 == 0 || temp_v4 == temp_v3) {
            *(unsigned int *)(temp_v5 + temp_v0 * 4) = temp_v3;
            temp_v0 = temp_v5 + temp_v0 * 4;
            *(int *)(temp_v0 + 0x18) = *(int *)(temp_v0 + 0x18) + 1;
            break;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 6);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 3);
  }
  return;
}

} /* extern "C" */
