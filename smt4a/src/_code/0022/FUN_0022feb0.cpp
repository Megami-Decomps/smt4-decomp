/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022feb0` (_code @ 0x22feb0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192748(unsigned int);
int FUN_00192798(void);
int FUN_002e6354(int *, int);
int FUN_0040816c(int);

extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192748. */
/* Supplied declaration required: FUN_00192798. */
extern unsigned int FUN_001b564c(unsigned short);
extern unsigned int FUN_00261424(void);
extern int FUN_002e50d4(void);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0040816c. */


void FUN_0022feb0(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned short *puVar10;
  int unaff_r8;
  
  if (param_1 != 0) {
    temp_v1 = FUN_00187180(0x37,0);
    FUN_00192798();
    temp_v2 = FUN_00192748(temp_v1);
    piVar4 = (int *)(param_1 + 0x48c);
    FUN_002e6354(piVar4,0x260);
    if (0 < temp_v2) {
      unaff_r8 = param_1 + 0x400;
    }
    temp_v7 = 0;
    if ((int)temp_v7 < temp_v2) {
      do {
        temp_v1 = FUN_00187180(0x37,0);
        temp_v3 = FUN_00192798();
        temp_v4 = FUN_00192748(temp_v1);
        if (((temp_v7 < temp_v4) &&
            (puVar10 = (unsigned short *)(temp_v3 + temp_v7 * 0x40), puVar10 != (unsigned short *)0x0)) &&
           (temp_v0 = *puVar10, -1 < (short)temp_v0)) {
          if (temp_v0 != 0x2e) {
            if (temp_v0 != 0x2c) {
              temp_v1 = FUN_001b564c(temp_v0 & 0xff);
              temp_v3 = param_1 + temp_v7 * 4;
              *(unsigned int *)(temp_v3 + 0x490) = temp_v1;
              temp_v1 = FUN_0040816c(*puVar10 & 0xff);
            }
            else {
              temp_v1 = FUN_00261424();
              temp_v3 = param_1 + temp_v7 * 4;
              *(unsigned int *)(temp_v3 + 0x490) = temp_v1;
              temp_v1 = FUN_00261424();
            }
            *(unsigned int *)(temp_v3 + 0x5c0) = temp_v1;
          }
          else {
            temp_v3 = FUN_002e50d4();
            temp_v5 = FUN_0040816c(0x2e);
            temp_v6 = param_1 + temp_v7 * 4;
            *(int *)(temp_v6 + 0x490) = temp_v3 - temp_v5;
            *(int *)(temp_v6 + 0x5c0) = temp_v3;
          }
          if (*puVar10 != 0x17 && *puVar10 != 0x20) {
            temp_v3 = param_1 + temp_v7 * 4;
            if (*(int *)(temp_v3 + 0x490) != 0) {
              *(short *)(param_1 + *(int *)(param_1 + 0x48c) * 2 + 0x558) = (short)temp_v7;
              *piVar4 = *piVar4 + 1;
            }
            if (*(int *)(temp_v3 + 0x5c0) != 0) {
              *(short *)(param_1 + *(int *)(param_1 + 0x5bc) * 2 + 0x688) = (short)temp_v7;
              *(int *)(unaff_r8 + 0x1bc) = *(int *)(unaff_r8 + 0x1bc) + 1;
            }
          }
        }
        temp_v7 = temp_v7 + 1;
      } while ((int)temp_v7 < temp_v2);
    }
    return;
  }
  return;
}

} /* extern "C" */
