/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b2008` (_code @ 0x3b2008, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057a7b8; /* 0x57a7b8 */

extern int FUN_0014bef4(unsigned int);
extern int FUN_0018719c(void);
extern int FUN_00192748(void);
extern int FUN_00192798(unsigned int);
/* Supplied declaration required: FUN_001b4a90. */
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern unsigned int FUN_004c97b4(int);


unsigned int FUN_003b2008(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  unsigned char temp_v9;
  int aiStack_428 [128];
  int aiStack_228 [129];
  
  piVar10 = aiStack_428;
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_004c97b4(DAT_0057a7b8);
  temp_v2 = FUN_00192748();
  temp_v3 = FUN_00192798(temp_v1);
  FUN_001b4a90(aiStack_428,0x200,0xffffffff);
  temp_v7 = 0;
  temp_v5 = 0;
  if (temp_v7 < temp_v2) {
    do {
      temp_v6 = temp_v3 + temp_v7 * 0xf0;
      temp_v8 = temp_v5;
      if (*(short *)(temp_v6 + 0xec) != 0) {
        temp_v4 = (unsigned int)*(unsigned char *)(temp_v6 + 6);
        temp_v9 = temp_v4 == 6;
        if (temp_v9) {
          temp_v4 = 0;
        }
        if ((temp_v0 == temp_v4) &&
           ((*(short *)(temp_v6 + 0xee) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 != 0)))) {
          aiStack_428[temp_v5] = temp_v7;
          temp_v8 = temp_v5 + 1;
          if (temp_v9) {
            aiStack_428[temp_v8] = temp_v7;
            temp_v8 = temp_v5 + 2;
          }
        }
      }
      temp_v7 = temp_v7 + 1;
      temp_v5 = temp_v8;
    } while (temp_v7 < temp_v2);
  }
  temp_v2 = 0;
  FUN_001b4a90(aiStack_228,0x200,0xffffffff);
  temp_v5 = 0x80;
  do {
    temp_v3 = *piVar10;
    if ((temp_v3 != -1) && (*(int *)(DAT_0057a7b8 + temp_v3 * 4 + 0x34) == -1)) {
      aiStack_228[temp_v2] = temp_v3;
      temp_v2 = temp_v2 + 1;
    }
    temp_v5 = temp_v5 - 1;
    piVar10 = piVar10 + 1;
  } while (temp_v5 != 0);
  if (temp_v2 == 0) {
    temp_v2 = 1;
  }
  temp_v5 = FUN_0014bef4((temp_v2 - 1U) & 0xffff);
  *(unsigned int *)(DAT_0057a7b8 + aiStack_228[temp_v5] * 4 + 0x34) = 0xffffffff;
  FUN_003283ac();
  return 1;
}
