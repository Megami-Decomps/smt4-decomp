/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ab18` (_code @ 0x13ab18, 0x330 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00588fac; /* 0x588fac */
extern unsigned int DAT_00588fb0; /* 0x588fb0 */
extern unsigned int DAT_0061951c; /* 0x61951c */
extern unsigned int DAT_00619520; /* 0x619520 */
extern unsigned int DAT_00619524; /* 0x619524 */
extern unsigned int DAT_00619528; /* 0x619528 */
extern unsigned int DAT_0061952c; /* 0x61952c */
extern unsigned int DAT_00619538; /* 0x619538 */
extern unsigned int DAT_0061953c; /* 0x61953c */

/* Supplied declaration required: FUN_0013ebe8. */
extern int FUN_00140924(unsigned int, unsigned int);
extern int FUN_001414d4(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001418b8. */
/* Supplied declaration required: FUN_00141d48. */
extern unsigned int FUN_00145868(void);
extern int FUN_00180008(unsigned int);
extern int FUN_0030ef8c(void);


void FUN_0013ab18(void)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned char temp_v7;
  
  temp_v0 = FUN_00180008(1);
  if (temp_v0 == 0) {
    temp_v0 = 0;
    do {
      puVar9 = (unsigned int *)0x0;
      temp_v3 = temp_v0 * 0x20;
      puVar8 = &DAT_0061951c + temp_v0 * 8;
      if (temp_v0 == 0) {
        puVar9 = &DAT_0061953c;
      }
      else if (temp_v0 == 1) {
        puVar9 = &DAT_0061951c;
      }
      temp_v1 = (&DAT_00619538)[temp_v0 * 8];
      if ((temp_v1 & 1) != 0) {
        if ((temp_v1 & 2) != 0) {
          temp_v1 = *puVar8;
          FUN_00141d48();
          temp_v4 = (&DAT_00619538)[temp_v0 * 8];
          if ((temp_v4 & 4) != 0) {
            if ((temp_v1 & 0x20) == 0) {
              temp_v4 = temp_v4 & 0xfffffffb;
              (&DAT_00619538)[temp_v0 * 8] = temp_v4;
            }
          }
          else if ((temp_v4 & 8) != 0) {
            temp_v2 = FUN_00140924(*puVar8,(&DAT_00619524)[temp_v0 * 8]);
            if (temp_v2 != 0) {
              temp_v1 = (&DAT_00619538)[temp_v0 * 8];
              (&DAT_00619538)[temp_v0 * 8] = temp_v1 & 0xfffffff5;
              (&DAT_00619528)[temp_v0 * 8] = 0;
              (&DAT_00619520)[temp_v0 * 8] = 0;
              (&DAT_00619524)[temp_v0 * 8] = 0;
              *(unsigned int *)(temp_v3 + 0x619530) = 0;
              if ((temp_v1 & 0x100) != 0) {
                temp_v5 = (&DAT_0061952c)[temp_v0 * 8];
                (&DAT_00619538)[temp_v0 * 8] = (temp_v1 & 0xfffffff5) | 5;
                temp_v6 = *(unsigned int *)(temp_v3 + 0x619534);
                (&DAT_0061952c)[temp_v0 * 8] = 0;
                (&DAT_00619528)[temp_v0 * 8] = temp_v5;
                (&DAT_00619520)[temp_v0 * 8] = temp_v6;
                temp_v4 = (temp_v1 & 0xfffffef5) | 5;
                *(unsigned int *)(temp_v3 + 0x619534) = 0;
                (&DAT_00619538)[temp_v0 * 8] = temp_v4;
              }
              else {
                (&DAT_00619538)[temp_v0 * 8] = 0;
                if ((*puVar8 == DAT_00588fb0) && ((puVar9[7] & 0x400) == 0)) {
                  if (DAT_00588fb0 != 0) {
                    DAT_00588fb0 = 0;
                  }
                  else {
                    DAT_00588fb0 = 1;
                  }
                }
              }
            }
          }
          else if ((temp_v4 & 0x10) != 0) {
            temp_v3 = FUN_001414d4(*puVar8,0,(&DAT_00619524)[temp_v0 * 8]);
            if (((temp_v3 != 0) &&
                ((&DAT_00619538)[temp_v0 * 8] = ((&DAT_00619538)[temp_v0 * 8] & 0xffffffef) | 0x20,
                *puVar8 == DAT_00588fb0)) && ((puVar9[7] & 0x400) == 0)) {
              if (DAT_00588fb0 == 0) {
                DAT_00588fb0 = 1;
              }
              else {
                DAT_00588fb0 = 0;
              }
            }
          }
          else if (((temp_v4 & 0x40) != 0) &&
                  (temp_v3 = FUN_001414d4(*puVar8,1,(&DAT_00619520)[temp_v0 * 8]), temp_v3 != 0)) {
            temp_v1 = (&DAT_00619538)[temp_v0 * 8];
            (&DAT_00619538)[temp_v0 * 8] = temp_v1 & 0xffffffbf;
            if ((temp_v1 & 0x200) != 0) {
              temp_v4 = (temp_v1 & 0xfffff5bf) | 0x10;
              (&DAT_00619538)[temp_v0 * 8] = temp_v4;
            }
            else if ((temp_v1 & 0x800) != 0) {
              temp_v4 = (temp_v1 & 0xfffff7bf) | 8;
              (&DAT_00619538)[temp_v0 * 8] = temp_v4;
            }
          }
        }
        else {
          if ((temp_v1 & 0x800) != 0) {
            if (*(int *)(temp_v3 + 0x619530) < 0x10) {
              *(int *)(temp_v3 + 0x619530) = *(int *)(temp_v3 + 0x619530) + 1;
              goto LAB_0013ae00;
            }
            (&DAT_00619538)[temp_v0 * 8] = temp_v1 & 0xfffff7ff;
            *(unsigned int *)(temp_v3 + 0x619530) = 0;
          }
          FUN_001418b8((&DAT_00619528)[temp_v0 * 8]);
          temp_v1 = (unsigned int)DAT_00588fac;
          temp_v3 = FUN_0030ef8c();
          if (((temp_v3 == 0) && (temp_v3 = (&DAT_00619528)[temp_v0 * 8], temp_v3 != 0x100008b)) &&
             (temp_v3 != 0x100008c && temp_v3 != 0x100008d)) {
            temp_v2 = 0;
            if (temp_v3 != 0x1000090) {
              temp_v2 = temp_v3 - 0x1000000;
            }
            if (temp_v3 != 0x1000090 && temp_v2 != 0x91) {
              temp_v2 = 0;
              if (temp_v3 != 0x1000097) {
                temp_v2 = temp_v3 - 0x1000000;
              }
              if (temp_v3 != 0x1000097 && temp_v2 != 0x98) {
                temp_v2 = 0;
                if (temp_v3 != 0x1000099) {
                  temp_v2 = temp_v3 - 0x1000000;
                }
                if (temp_v3 != 0x1000099 && temp_v2 != 0xa2) {
                  temp_v2 = 0;
                  if (temp_v3 != 0x1000093) {
                    temp_v2 = temp_v3 - 0x1000000;
                  }
                  if (temp_v3 != 0x1000093 && temp_v2 != 0x89) {
                    temp_v7 = temp_v3 == 0x100008a || temp_v3 == 0x100008e;
                    if (temp_v3 != 0x100008a && temp_v3 != 0x100008e) {
                      temp_v7 = temp_v3 == 0x1000095;
                    }
                    if (!temp_v7) {
                      temp_v1 = FUN_00145868();
                    }
                  }
                }
              }
            }
          }
          FUN_0013ebe8(*puVar8,(&DAT_00619528)[temp_v0 * 8],temp_v1,(&DAT_00619520)[temp_v0 * 8]);
          temp_v4 = (&DAT_00619538)[temp_v0 * 8] | 2;
          (&DAT_00619538)[temp_v0 * 8] = temp_v4;
        }
      }
      else if (((temp_v1 & 0x100) != 0) && ((temp_v1 & 0x3c) == 0 && (temp_v1 & 2) == 0)) {
        temp_v2 = *(int *)(temp_v3 + 0x619534);
        temp_v4 = temp_v1 | 1;
        (&DAT_00619538)[temp_v0 * 8] = temp_v4;
        if (temp_v2 != 0) {
          temp_v4 = temp_v1 | 5;
          (&DAT_00619538)[temp_v0 * 8] = temp_v4;
        }
        temp_v5 = (&DAT_0061952c)[temp_v0 * 8];
        temp_v6 = *(unsigned int *)(temp_v3 + 0x619534);
        (&DAT_0061952c)[temp_v0 * 8] = 0;
        (&DAT_00619528)[temp_v0 * 8] = temp_v5;
        (&DAT_00619520)[temp_v0 * 8] = temp_v6;
        temp_v4 = temp_v4 & 0xfffffeff;
        *(unsigned int *)(temp_v3 + 0x619534) = 0;
        (&DAT_00619538)[temp_v0 * 8] = temp_v4;
      }
LAB_0013ae00:
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
  }
  return;
}
