/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336704` (_code @ 0x336704, 0x220 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0032c934; /* 0x32c934 */

/* Supplied declaration required: FUN_002b7f0a. */


void FUN_00336704(int param_1,unsigned int param_2)

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
LAB_00336760:
  temp_v7 = *(int *)(param_1 + 0x1e98);
  temp_v0 = temp_v7 + temp_v3 * 0x114;
  temp_v1 = *(unsigned int *)(temp_v0 + 0x50);
  if ((temp_v1 & 1) != 0 && (temp_v1 & 0x80) != 0) {
    temp_v2 = 0;
    if ((temp_v1 & 0x10) != 0) {
      temp_v2 = 0;
      do {
        psVar9 = asStack_70 + temp_v2 * 4;
        if (*psVar9 < 0) {
          temp_v5 = temp_v5 + 1;
          asStack_70[temp_v2 * 4] = *(short *)(temp_v0 + 0x62);
          *(unsigned int *)(psVar9 + 2) = *(unsigned int *)(temp_v0 + 0x14);
          break;
        }
        temp_v4 = temp_v7 + *psVar9 * 0x114;
      } while ((((*(unsigned int *)(temp_v4 + 0x50) & 0x10) == 0) ||
               (*(int *)(temp_v4 + 0xfc) != *(int *)(temp_v0 + 0xfc))) &&
              (temp_v2 = temp_v2 + 1, temp_v2 < 10));
    }
    else {
      do {
        psVar9 = asStack_70 + temp_v2 * 4;
        if (*psVar9 < 0) {
          temp_v5 = temp_v5 + 1;
          asStack_70[temp_v2 * 4] = *(short *)(temp_v0 + 0x62);
          *(unsigned int *)(psVar9 + 2) = *(unsigned int *)(temp_v0 + 0x14);
          break;
        }
        temp_v4 = temp_v7 + *psVar9 * 0x114;
      } while ((((*(unsigned int *)(temp_v4 + 0x50) & 0x10) != 0) ||
               (*(float *)(temp_v4 + 0x14) != *(float *)(temp_v0 + 0x14))) &&
              (temp_v2 = temp_v2 + 1, temp_v2 < 10));
    }
  }
  goto LAB_00336838;
  temp_v5 = temp_v5 + 1;
  asStack_70[temp_v2 * 4] = *(short *)(temp_v0 + 0x62);
  *(unsigned int *)(psVar9 + 2) = *(unsigned int *)(temp_v0 + 0x14);
LAB_00336838:
  temp_v3 = temp_v3 + 1;
  if (temp_v3 >= 0x36) {
    FUN_002b7f0a(asStack_70,temp_v5,8,&LAB_0032c934);
    temp_v3 = 4;
    do {
      temp_v7 = *(int *)(param_1 + 0x1e98);
      temp_v0 = temp_v7 + temp_v3 * 0x114;
      temp_v1 = *(unsigned int *)(temp_v0 + 0x50);
      if ((temp_v1 & 1) != 0 && (temp_v1 & 0x80) != 0) {
        temp_v2 = 0;
        do {
          temp_v4 = (int)asStack_70[temp_v2 * 4];
          if (temp_v4 >= 0) {
            if (*(short *)(temp_v0 + 0x62) == temp_v4) {
              *(char *)(temp_v0 + 0x44) = (char)temp_v2;
              break;
            }
            temp_v4 = temp_v7 + temp_v4 * 0x114;
            temp_v6 = *(unsigned int *)(temp_v4 + 0x50) & 0x10;
            if ((temp_v1 & 0x10) != 0) {
              if ((temp_v6 != 0) && (*(int *)(temp_v4 + 0xfc) == *(int *)(temp_v0 + 0xfc))) {
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
        *(char *)(param_1 + 0x1e9c) = (char)temp_v5;
        return;
      }
    } while( 1 );
  }
  goto LAB_00336760;
}
