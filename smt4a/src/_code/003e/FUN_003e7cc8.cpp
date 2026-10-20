/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e7cc8` (_code @ 0x3e7cc8, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(short [2], int, int, unsigned char *);

extern unsigned char LAB_003d4ec0; /* 0x3d4ec0 */

/* Supplied declaration required: FUN_0010063a. */


void FUN_003e7cc8(int param_1,unsigned int param_2)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned short *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  short *psVar9;
  unsigned int temp_v6;
  int temp_v7;
  unsigned short temp_v8 [2];
  int uStack_74;
  short asStack_70 [2];
  unsigned int uStack_6c;
  unsigned short temp_v9 [2];
  unsigned int temp_v10 [17];
  
  temp_v5 = 0;
  temp_v3 = 5;
  puVar3 = temp_v8;
  puVar1 = (unsigned int *)&uStack_74;
  do {
    puVar3[4] = 0xffff;
    puVar1[2] = 0;
    puVar1 = puVar1 + 4;
    puVar3 = puVar3 + 8;
    *puVar3 = 0xffff;
    temp_v3 = temp_v3 - 1;
    *puVar1 = 0;
  } while (temp_v3 != 0);
  if ((param_2 & 0x400) == 0) {
    return;
  }
  temp_v3 = 4;
LAB_003e7d24:
  temp_v7 = *(int *)(param_1 + 0x1ed4);
  temp_v0 = temp_v7 + temp_v3 * 0x1d0;
  temp_v1 = *(unsigned int *)(temp_v0 + 0x50);
  if ((temp_v1 & 1) != 0 && (temp_v1 & 0x80) != 0) {
    temp_v2 = 0;
    if ((temp_v1 & 0x10) != 0) {
      temp_v2 = 0;
      do {
        psVar9 = asStack_70 + temp_v2 * 4;
        if (*psVar9 < 0) {
          temp_v5 = temp_v5 + 1;
          asStack_70[temp_v2 * 4] = *(short *)(temp_v0 + 0x6a);
          *(unsigned int *)(psVar9 + 2) = *(unsigned int *)(temp_v0 + 0x14);
          break;
        }
        temp_v4 = temp_v7 + *psVar9 * 0x1d0;
      } while ((((*(unsigned int *)(temp_v4 + 0x50) & 0x10) == 0) ||
               (*(int *)(temp_v4 + 0x110) != *(int *)(temp_v0 + 0x110))) &&
              (temp_v2 = temp_v2 + 1, temp_v2 < 10));
    }
    else {
      do {
        psVar9 = asStack_70 + temp_v2 * 4;
        if (*psVar9 < 0) {
          temp_v5 = temp_v5 + 1;
          asStack_70[temp_v2 * 4] = *(short *)(temp_v0 + 0x6a);
          *(unsigned int *)(psVar9 + 2) = *(unsigned int *)(temp_v0 + 0x14);
          break;
        }
        temp_v4 = temp_v7 + *psVar9 * 0x1d0;
      } while ((((*(unsigned int *)(temp_v4 + 0x50) & 0x10) != 0) ||
               (*(float *)(temp_v4 + 0x14) != *(float *)(temp_v0 + 0x14))) &&
              (temp_v2 = temp_v2 + 1, temp_v2 < 10));
    }
  }
  goto LAB_003e7dfc;
  temp_v5 = temp_v5 + 1;
  asStack_70[temp_v2 * 4] = *(short *)(temp_v0 + 0x6a);
  *(unsigned int *)(psVar9 + 2) = *(unsigned int *)(temp_v0 + 0x14);
LAB_003e7dfc:
  temp_v3 = temp_v3 + 1;
  if (temp_v3 >= 0x36) {
    FUN_0010063a(asStack_70,temp_v5,8,&LAB_003d4ec0);
    temp_v3 = 4;
    do {
      temp_v7 = *(int *)(param_1 + 0x1ed4);
      temp_v0 = temp_v7 + temp_v3 * 0x1d0;
      temp_v1 = *(unsigned int *)(temp_v0 + 0x50);
      if ((temp_v1 & 1) != 0 && (temp_v1 & 0x80) != 0) {
        temp_v2 = 0;
        do {
          temp_v4 = (int)asStack_70[temp_v2 * 4];
          if (temp_v4 >= 0) {
            if (*(short *)(temp_v0 + 0x6a) == temp_v4) {
              *(char *)(temp_v0 + 0x44) = (char)temp_v2;
              break;
            }
            temp_v4 = temp_v7 + temp_v4 * 0x1d0;
            temp_v6 = *(unsigned int *)(temp_v4 + 0x50) & 0x10;
            if ((temp_v1 & 0x10) != 0) {
              if ((temp_v6 != 0) && (*(int *)(temp_v4 + 0x110) == *(int *)(temp_v0 + 0x110))) {
                *(char *)(temp_v0 + 0x44) = (char)temp_v2;
                break;
              }
            }
            else if ((temp_v6 == 0) && (*(float *)(temp_v4 + 0x14) == *(float *)(temp_v0 + 0x14))) {
              *(char *)(temp_v0 + 0x44) = (char)temp_v2;
              break;
            }
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 10);
      }
      temp_v3 = temp_v3 + 1;
      if (temp_v3 >= 0x36) {
        *(char *)(param_1 + 0x1ed8) = (char)temp_v5;
        return;
      }
    } while( 1 );
  }
  goto LAB_003e7d24;
}

} /* extern "C" */
