/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e600c` (_code @ 0x3e600c, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275bc8(int, unsigned int);
int FUN_00359974(int, unsigned int, unsigned int, int);
int screenStartOrClear(unsigned int, int);

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern unsigned int FUN_001ba3d4(unsigned int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: screenStartOrClear. */
extern int loadSlotIsLoaded(unsigned int);


void FUN_003e600c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar10;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  
  temp_v11 = *(int *)(param_1 + 0x10) != 0;
  temp_v0 = 0;
  if (temp_v11) {
    temp_v0 = *(int *)(param_1 + 0x14);
  }
  if ((temp_v11 && temp_v0 != 0) && (temp_v0 = loadSlotIsLoaded(0x4f), temp_v0 != 0)) {
    temp_v0 = *(int *)(param_1 + 0x14);
    FUN_00275bc8(temp_v0,*(unsigned int *)(param_1 + 0x10));
    *(int *)(param_1 + 0x18) = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
    temp_v8 = *(unsigned int *)(param_1 + 0x20);
    temp_v1 = dataTableGet(0x4f,0);
    temp_v0 = dataTableGetEntries();
    if (temp_v0 != 0) {
      temp_v2 = dataTableGetCount(temp_v1);
      *(unsigned int *)(param_1 + 0x24) = 0;
      *(unsigned int *)(param_1 + 0x28) = 0;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      *(unsigned int *)(param_1 + 0x30) = 0;
      *(unsigned int *)(param_1 + 0x34) = 0;
      *(unsigned int *)(param_1 + 0x38) = 0;
      *(unsigned int *)(param_1 + 0x3c) = 0;
      *(unsigned int *)(param_1 + 0x40) = 0;
      temp_v3 = 0;
      *(unsigned int *)(param_1 + 0x44) = 0;
      temp_v9 = 0;
      if (0 < temp_v2) {
        do {
          puVar10 = (unsigned int *)(temp_v0 + temp_v3 * 0xc);
          temp_v7 = *puVar10;
          temp_v10 = puVar10[1];
          temp_v6 = temp_v9;
          if ((temp_v7 & 0xffff) == temp_v8) {
            temp_v6 = temp_v9 + 1;
            temp_v9 = param_1 + temp_v9 * 0xc;
            *(unsigned int *)(temp_v9 + 0x2c) = puVar10[2];
            *(unsigned int *)(temp_v9 + 0x24) = temp_v7;
            *(unsigned int *)(temp_v9 + 0x28) = temp_v10;
            if (temp_v6 >= 3) break;
          }
          temp_v3 = temp_v3 + 1;
          temp_v9 = temp_v6;
        } while (temp_v3 < temp_v2);
      }
    }
    temp_v1 = FUN_001ba3d4(0x7c4);
    temp_v4 = FUN_001ba3d4(0x7c5);
    temp_v5 = FUN_001ba3d4(0x7c6);
    FUN_00359974(0x18,temp_v1,0xffffffff,0);
    FUN_00359974(0x19,temp_v4,0xffffffff,0);
    FUN_00359974(0x1a,temp_v5,0xffffffff,0);
    screenStartOrClear(*(unsigned int *)(param_1 + 0x10),0x15);
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 4) = 3;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

} /* extern "C" */
