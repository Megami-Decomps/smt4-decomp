/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e36e4` (_code @ 0x3e36e4, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275bc8(int, unsigned int);
int FUN_00275f44(unsigned int, int);

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_00357bc8(unsigned int, char *);
extern int FUN_003f86c8(unsigned int);


void FUN_003e36e4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  
  temp_v7 = *(int *)(param_1 + 0x10) != 0;
  temp_v0 = 0;
  if (temp_v7) {
    temp_v0 = *(int *)(param_1 + 0x14);
  }
  if ((temp_v7 && temp_v0 != 0) && (temp_v0 = FUN_003f86c8(0x4f), temp_v0 != 0)) {
    temp_v0 = *(int *)(param_1 + 0x14);
    FUN_00275bc8(temp_v0,*(unsigned int *)(param_1 + 0x10));
    *(int *)(param_1 + 0x18) = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
    temp_v0 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),"npcShop_Select_00");
    if (-1 < temp_v0) {
      FUN_00275f44(*(unsigned int *)(param_1 + 0x18),temp_v0);
    }
    *(unsigned char *)(param_1 + 0x98) = 0;
    temp_v5 = *(unsigned int *)(param_1 + 0x9c);
    temp_v1 = FUN_00187180(0x4f,1);
    temp_v0 = FUN_00192798();
    if (temp_v0 != 0) {
      temp_v2 = FUN_00192748(temp_v1);
      temp_v3 = 0;
      temp_v6 = 0;
      if (temp_v3 < temp_v2) {
        do {
          puVar7 = (unsigned int *)(temp_v0 + temp_v3 * 0x24);
          temp_v8 = puVar7[1];
          temp_v9 = puVar7[2];
          temp_v10 = puVar7[3];
          temp_v11 = puVar7[4];
          temp_v12 = puVar7[5];
          temp_v13 = puVar7[6];
          temp_v14 = puVar7[7];
          temp_v15 = puVar7[8];
          temp_v4 = temp_v6;
          if ((*puVar7 & 0xffff) == temp_v5) {
            temp_v4 = temp_v6 + 1;
            temp_v6 = param_1 + temp_v6 * 0x24;
            *(unsigned int *)(temp_v6 + 0x20) = *puVar7;
            *(unsigned int *)(temp_v6 + 0x24) = temp_v8;
            *(unsigned int *)(temp_v6 + 0x28) = temp_v9;
            *(unsigned int *)(temp_v6 + 0x2c) = temp_v10;
            *(unsigned int *)(temp_v6 + 0x30) = temp_v11;
            *(unsigned int *)(temp_v6 + 0x34) = temp_v12;
            *(unsigned int *)(temp_v6 + 0x38) = temp_v13;
            *(unsigned int *)(temp_v6 + 0x3c) = temp_v14;
            *(unsigned int *)(temp_v6 + 0x40) = temp_v15;
            if (temp_v4 >= 3) break;
          }
          temp_v3 = temp_v3 + 1;
          temp_v6 = temp_v4;
        } while (temp_v3 < temp_v2);
      }
    }
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 4) = 3;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

} /* extern "C" */
