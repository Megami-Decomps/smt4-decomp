/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010633c` (_code @ 0x10633c, 0x304 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010bf44(unsigned int);
int FUN_0010ddcc(int, unsigned int, unsigned int, unsigned int);

extern unsigned char DAT_0044e098; /* 0x44e098 */
extern int DAT_0044e09c; /* 0x44e09c */
extern unsigned int DAT_004c53c4; /* 0x4c53c4 */
extern unsigned int DAT_004c53c8; /* 0x4c53c8 */
extern unsigned int DAT_004c53cc; /* 0x4c53cc */
extern unsigned int DAT_004c53d0; /* 0x4c53d0 */
extern unsigned int DAT_004c53d4; /* 0x4c53d4 */
extern unsigned int DAT_004c53e0; /* 0x4c53e0 */
extern unsigned int DAT_004c53e4; /* 0x4c53e4 */

/* Supplied declaration required: FUN_0010bf44. */
extern int FUN_0010c5b0(int, unsigned int);
extern int FUN_0010d2d4(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0010ddcc. */
extern unsigned int FUN_0010df80(int);
extern unsigned int soundVolumeSettingGet(void);
extern unsigned long long rt_memcmp(void);
extern int jyoucyuGetTableEntry(unsigned int);


void FUN_0010633c(void)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int *piVar8;
  unsigned int *puVar9;
  unsigned char temp_v7;
  unsigned long long temp_v8;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    temp_v0 = 0;
    do {
      puVar9 = (unsigned int *)0x0;
      temp_v3 = temp_v0 * 0x20;
      piVar8 = (int *)(&DAT_004c53c4 + temp_v0 * 8);
      if (temp_v0 == 0) {
        puVar9 = &DAT_004c53e4;
      }
      else if (temp_v0 == 1) {
        puVar9 = &DAT_004c53c4;
      }
      temp_v1 = (&DAT_004c53e0)[temp_v0 * 8];
      if ((temp_v1 & 1) != 0) {
        if ((temp_v1 & 2) != 0) {
          temp_v1 = FUN_0010df80(*piVar8);
          temp_v4 = (&DAT_004c53e0)[temp_v0 * 8];
          if ((temp_v4 & 4) != 0) {
            if ((temp_v1 & 0x20) == 0) {
              temp_v4 = temp_v4 & 0xfffffffb;
              (&DAT_004c53e0)[temp_v0 * 8] = temp_v4;
            }
          }
          else if ((temp_v4 & 8) != 0) {
            temp_v2 = FUN_0010c5b0(*piVar8,(&DAT_004c53cc)[temp_v0 * 8]);
            if (temp_v2 != 0) {
              temp_v1 = (&DAT_004c53e0)[temp_v0 * 8];
              (&DAT_004c53e0)[temp_v0 * 8] = temp_v1 & 0xfffffff5;
              (&DAT_004c53d0)[temp_v0 * 8] = 0;
              (&DAT_004c53c8)[temp_v0 * 8] = 0;
              (&DAT_004c53cc)[temp_v0 * 8] = 0;
              *(unsigned int *)(temp_v3 + 0x4c53d8) = 0;
              if ((temp_v1 & 0x100) != 0) {
                temp_v5 = (&DAT_004c53d4)[temp_v0 * 8];
                (&DAT_004c53e0)[temp_v0 * 8] = (temp_v1 & 0xfffffff5) | 5;
                temp_v6 = *(unsigned int *)(temp_v3 + 0x4c53dc);
                (&DAT_004c53d4)[temp_v0 * 8] = 0;
                (&DAT_004c53d0)[temp_v0 * 8] = temp_v5;
                (&DAT_004c53c8)[temp_v0 * 8] = temp_v6;
                temp_v4 = (temp_v1 & 0xfffffef5) | 5;
                *(unsigned int *)(temp_v3 + 0x4c53dc) = 0;
                (&DAT_004c53e0)[temp_v0 * 8] = temp_v4;
              }
              else {
                (&DAT_004c53e0)[temp_v0 * 8] = 0;
                if ((*piVar8 == DAT_0044e09c) && ((puVar9[7] & 0x400) == 0)) {
                  if (DAT_0044e09c != 0) {
                    DAT_0044e09c = 0;
                  }
                  else {
                    DAT_0044e09c = 1;
                  }
                }
              }
            }
          }
          else if ((temp_v4 & 0x10) != 0) {
            temp_v3 = FUN_0010d2d4(*piVar8,0,(&DAT_004c53cc)[temp_v0 * 8]);
            if (((temp_v3 != 0) &&
                ((&DAT_004c53e0)[temp_v0 * 8] = ((&DAT_004c53e0)[temp_v0 * 8] & 0xffffffef) | 0x20,
                *piVar8 == DAT_0044e09c)) && ((puVar9[7] & 0x400) == 0)) {
              if (DAT_0044e09c == 0) {
                DAT_0044e09c = 1;
              }
              else {
                DAT_0044e09c = 0;
              }
            }
          }
          else if (((temp_v4 & 0x40) != 0) &&
                  (temp_v3 = FUN_0010d2d4(*piVar8,1,(&DAT_004c53c8)[temp_v0 * 8]), temp_v3 != 0)) {
            temp_v1 = (&DAT_004c53e0)[temp_v0 * 8];
            (&DAT_004c53e0)[temp_v0 * 8] = temp_v1 & 0xffffffbf;
            if ((temp_v1 & 0x200) != 0) {
              temp_v4 = (temp_v1 & 0xfffff5bf) | 0x10;
              (&DAT_004c53e0)[temp_v0 * 8] = temp_v4;
            }
            else if ((temp_v1 & 0x800) != 0) {
              temp_v4 = (temp_v1 & 0xfffff7bf) | 8;
              (&DAT_004c53e0)[temp_v0 * 8] = temp_v4;
            }
          }
        }
        else {
          if ((temp_v1 & 0x800) != 0) {
            if (*(int *)(temp_v3 + 0x4c53d8) < 0x10) {
              *(int *)(temp_v3 + 0x4c53d8) = *(int *)(temp_v3 + 0x4c53d8) + 1;
              goto LAB_001065fc;
            }
            (&DAT_004c53e0)[temp_v0 * 8] = temp_v1 & 0xfffff7ff;
            *(unsigned int *)(temp_v3 + 0x4c53d8) = 0;
          }
          FUN_0010bf44((&DAT_004c53d0)[temp_v0 * 8]);
          temp_v1 = (unsigned int)DAT_0044e098;
          temp_v8 = rt_memcmp();
          temp_v3 = (int)((unsigned long long)temp_v8 >> 0x20);
          if (((int)temp_v8 == 0) && (temp_v2 = (&DAT_004c53d0)[temp_v0 * 8], temp_v2 != 0x100007b)) {
            if (temp_v2 != 0x100007c) {
              temp_v3 = temp_v2 - 0x1000000;
            }
            if (temp_v2 != 0x100007c && temp_v3 != 0x7d) {
              temp_v3 = 0;
              if (temp_v2 != 0x1000081) {
                temp_v3 = temp_v2 - 0x1000000;
              }
              if (temp_v2 != 0x1000081 && temp_v3 != 0x82) {
                temp_v3 = 0;
                if (temp_v2 != 0x1000083) {
                  temp_v3 = temp_v2 - 0x1000000;
                }
                if (temp_v2 != 0x1000083 && temp_v3 != 0x8a) {
                  temp_v7 = temp_v2 == 0x100008b || temp_v2 == 0x100008c;
                  if (temp_v2 != 0x100008b && temp_v2 != 0x100008c) {
                    temp_v7 = temp_v2 == 0x10000a4;
                  }
                  if (!temp_v7) {
                    temp_v1 = soundVolumeSettingGet();
                  }
                }
              }
            }
          }
          FUN_0010ddcc(*piVar8,(&DAT_004c53d0)[temp_v0 * 8],temp_v1,(&DAT_004c53c8)[temp_v0 * 8]);
          temp_v4 = (&DAT_004c53e0)[temp_v0 * 8] | 2;
          (&DAT_004c53e0)[temp_v0 * 8] = temp_v4;
        }
      }
      else if (((temp_v1 & 0x100) != 0) && ((temp_v1 & 0x3c) == 0 && (temp_v1 & 2) == 0)) {
        temp_v2 = *(int *)(temp_v3 + 0x4c53dc);
        temp_v4 = temp_v1 | 1;
        (&DAT_004c53e0)[temp_v0 * 8] = temp_v4;
        if (temp_v2 != 0) {
          temp_v4 = temp_v1 | 5;
          (&DAT_004c53e0)[temp_v0 * 8] = temp_v4;
        }
        temp_v5 = (&DAT_004c53d4)[temp_v0 * 8];
        (&DAT_004c53d4)[temp_v0 * 8] = 0;
        (&DAT_004c53c8)[temp_v0 * 8] = temp_v2;
        (&DAT_004c53d0)[temp_v0 * 8] = temp_v5;
        temp_v4 = temp_v4 & 0xfffffeff;
        *(unsigned int *)(temp_v3 + 0x4c53dc) = 0;
        (&DAT_004c53e0)[temp_v0 * 8] = temp_v4;
      }
LAB_001065fc:
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
  }
  return;
}

} /* extern "C" */
