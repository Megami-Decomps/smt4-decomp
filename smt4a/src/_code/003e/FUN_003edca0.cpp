/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003edca0` (_code @ 0x3edca0, 0x320 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_005739b0; /* 0x5739b0 */
extern unsigned int DAT_005739b4; /* 0x5739b4 */
extern unsigned int DAT_005739c0; /* 0x5739c0 */
extern unsigned int DAT_005739c4; /* 0x5739c4 */
extern unsigned int DAT_00573a50; /* 0x573a50 */
extern unsigned int DAT_00573a54; /* 0x573a54 */
extern unsigned int DAT_00573b40; /* 0x573b40 */
extern unsigned int DAT_00573b44; /* 0x573b44 */

extern int FUN_0014af84(void);
extern int lcgRandomRange(unsigned int);
extern int FUN_001801a4(void);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019cac4. */
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);
extern int playerHasFlagBit(unsigned int);
extern int FUN_003e46f4(unsigned int);
extern int __aeabi_idivmod(int, unsigned int);


unsigned int FUN_003edca0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int temp_v6;
  
  temp_v1 = playerHasFlagBit(1);
  if ((temp_v1 == 0) &&
     ((*(unsigned int *)(param_1 + 0x45a0) & DAT_00573a50) == 0 &&
      (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a54) == 0)) {
    temp_v1 = FUN_0014af84();
    puVar8 = (unsigned int *)(param_1 + 0x45a8);
    if (((*(unsigned char *)(temp_v1 + 0x27e3e) >= 6) ||
        ((*(unsigned int *)(param_1 + 0x45ac) & DAT_00573b44) != 0 || (DAT_00573b40 & *puVar8) != 0)) &&
       ((((temp_v1 = FUN_0018719c(0x416), temp_v1 == 0 ||
          ((*(unsigned int *)(param_1 + 0x45ac) & DAT_00573b44) != 0 || (DAT_00573b40 & *puVar8) != 0)) &&
         (*(short *)(param_1 + 0x2002) < 2)) && (*(short *)(param_1 + 0x2002) != 0)))) {
      temp_v1 = 4;
      do {
        puVar7 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v1 * 0x408);
        temp_v5 = *puVar7;
        temp_v2 = puVar7[1];
        if ((((temp_v2 & DAT_0057397c) != 0 || (temp_v5 & DAT_00573978) != 0) &&
            ((DAT_005739a0 & temp_v5) == 0 && (DAT_005739a4 & temp_v2) == 0)) &&
           ((temp_v2 & DAT_00573994) != 0 || (temp_v5 & DAT_00573990) != 0)) {
          if (puVar7 == (unsigned int *)0x0) {
            return 0;
          }
          temp_v2 = (unsigned int)*(unsigned short *)((int)puVar7 + 0x166);
          FUN_0019cac4();
          if ((*(unsigned short *)(temp_v2 + 0x16) & 2) != 0) {
            return 0;
          }
          temp_v5 = *puVar7;
          temp_v4 = puVar7[1];
          if ((DAT_005739b0 & temp_v5) != 0 || (DAT_005739b4 & temp_v4) != 0) {
            return 0;
          }
          if ((temp_v5 & DAT_005739c0) != 0 || (temp_v4 & DAT_005739c4) != 0) {
            return 0;
          }
          if ((puVar7[0x9d] & 0x80) != 0) {
            return 0;
          }
          if (!((*(unsigned int *)(param_1 + 0x45ac) & DAT_00573b44) != 0 || (*puVar8 & DAT_00573b40) != 0))
          {
            temp_v1 = __aeabi_idivmod(puVar7[0x96] * 100,puVar7[0x97]);
            temp_v6 = 0xf;
            temp_v3 = FUN_003e46f4(0x3e);
            if (temp_v3 != 0) {
              temp_v6 = 0x19;
            }
            if (temp_v6 <= temp_v1) {
              return 0;
            }
            temp_v5 = puVar7[1] | DAT_005739c4;
            *puVar7 = *puVar7 | DAT_005739c0;
            puVar7[1] = temp_v5;
            temp_v1 = FUN_001ab888();
            temp_v0 = *(unsigned char *)(temp_v1 + 0x1ca3);
            temp_v1 = FUN_001b347c();
            if (temp_v1 >= 4) {
              if (temp_v1 == 4) {
                temp_v1 = 0x19;
              }
              else if (temp_v1 == 5) {
                temp_v1 = 0x14;
              }
              else if (temp_v1 != 6) {
                if ((int)((unsigned int)temp_v0 - temp_v1) >= 3) {
                  temp_v1 = FUN_001801a4();
                  temp_v1 = (int)((unsigned int)*(unsigned short *)(temp_v1 + 0x62) -
                               (*(unsigned short *)(temp_v2 + 2) & 0xffff7fff)) / 2 + 5;
                  if (temp_v1 >= 0) {
                    if (temp_v1 >= 0x10) {
                      temp_v1 = 0xf;
                    }
                  }
                  else {
                    temp_v1 = 0;
                  }
                }
                else {
                  temp_v1 = FUN_001801a4();
                  temp_v1 = (int)((unsigned int)*(unsigned short *)(temp_v1 + 0x62) -
                               (*(unsigned short *)(temp_v2 + 2) & 0xffff7fff)) / 2 + 5;
                  if (temp_v1 < 0) {
                    temp_v1 = 0;
                  }
                  else if (temp_v1 >= 11) {
                    temp_v1 = 10;
                  }
                }
              }
              else {
                temp_v1 = 0xf;
              }
            }
            else {
              temp_v1 = 0xf;
            }
            temp_v3 = FUN_003e46f4(0x3e);
            if (temp_v3 != 0) {
              temp_v1 = temp_v1 + 0x14;
            }
            temp_v3 = lcgRandomRange(99);
            if (temp_v1 < temp_v3) {
              return 0;
            }
          }
          else {
            temp_v4 = temp_v4 | DAT_005739c4;
            *puVar7 = temp_v5 | DAT_005739c0;
            puVar7[1] = temp_v4;
          }
          temp_v2 = DAT_005739b0 | *puVar7;
          puVar7[1] = DAT_005739b4 | puVar7[1];
          *puVar7 = temp_v2;
          return 1;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x36);
    }
  }
  return 0;
}

} /* extern "C" */
