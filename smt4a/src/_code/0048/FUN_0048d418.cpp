/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048d418` (_code @ 0x48d418, 0x260 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable2BType1Count(void);

/* stack frame of param_2: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern int DAT_005f1600; /* 0x5f1600 */
extern int DAT_005f1c5c; /* 0x5f1c5c */

extern int FUN_0018719c(void);
extern int FUN_004083a8(char, char);
extern char *dataTable2BType1GetEntry(unsigned char *, int);
/* Supplied declaration required: dataTable2BType1Count. */


void FUN_0048d418(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  unsigned char *puVar4;
  char *pcVar5;
  int temp_v3;
  short *psVar7;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  short *psVar11;
  short temp_v7 [32];
  unsigned char temp_v8 [4];
  
  temp_v7[0] = 0;
  temp_v7[1] = 0;
  temp_v7[2] = 0;
  temp_v7[3] = 0;
  temp_v7[4] = 0;
  temp_v7[5] = 0;
  temp_v7[6] = 0;
  temp_v7[7] = 0;
  temp_v7[8] = 0;
  temp_v7[9] = 0;
  temp_v7[10] = 0;
  temp_v7[0xb] = 0;
  temp_v7[0xc] = 0;
  temp_v7[0xd] = 0;
  temp_v7[0xe] = 0;
  temp_v7[0xf] = 0;
  temp_v7[0x10] = 0;
  temp_v7[0x11] = 0;
  temp_v7[0x12] = 0;
  temp_v7[0x13] = 0;
  temp_v7[0x14] = 0;
  temp_v7[0x15] = 0;
  temp_v6 = 0;
  temp_v5 = 0;
  temp_v7[0x16] = 0;
  temp_v7[0x17] = 0;
  temp_v7[0x18] = 0;
  temp_v7[0x19] = 0;
  temp_v7[0x1a] = 0;
  temp_v7[0x1b] = 0;
  temp_v7[0x1c] = 0;
  temp_v7[0x1d] = 0;
  temp_v7[0x1e] = 0;
  temp_v7[0x1f] = 0;
  puVar4 = temp_v8;
  dataTable2BType1Count();
  if (0 < (int)puVar4) {
    do {
      pcVar5 = (char *)dataTable2BType1GetEntry(temp_v8,temp_v5);
      if ((*pcVar5 == param_2) &&
         (((temp_v2 = 0, param_2 != 0x17 ||
           ((((DAT_005f1600 != 1 && DAT_005f1600 != 2 && (DAT_005f1600 != 3 && DAT_005f1600 != 6))
             || (temp_v0 = pcVar5[1], (temp_v0 != -0x50 && temp_v0 != '\x7f') && temp_v0 != -0x80)) &&
            ((DAT_005f1600 != 4 && DAT_005f1600 != 5 ||
             ((temp_v0 = pcVar5[1], temp_v0 != 'y' && temp_v0 != 'z' && (temp_v0 != '}' && temp_v0 != '~')))))
            ))) && ((DAT_005f1c5c != 0 ||
                    ((((*(short *)(pcVar5 + 4) == 0 || (temp_v3 = FUN_0018719c(), temp_v3 != 0)) &&
                      ((*(short *)(pcVar5 + 6) == 0 || (temp_v3 = FUN_0018719c(), temp_v3 == 0)))) &&
                     (temp_v3 = FUN_004083a8(pcVar5[1],pcVar5[2]), temp_v3 != 0)))))))) {
        if (0 < temp_v6) {
          psVar7 = temp_v7;
          temp_v3 = temp_v6;
          do {
            if ((int)*psVar7 == (int)pcVar5[3]) {
              temp_v2 = 1;
            }
            temp_v3 = temp_v3 - 1;
            psVar7 = psVar7 + 1;
          } while (temp_v3 != 0);
          if (!temp_v2) {
            psVar7 = temp_v7 + temp_v6;
            temp_v6 = temp_v6 + 1;
            *psVar7 = (short)pcVar5[3];
          }
        }
        else {
          psVar7 = temp_v7 + temp_v6;
          temp_v6 = temp_v6 + 1;
          *psVar7 = (short)pcVar5[3];
        }
      }
      temp_v5 = temp_v5 + 1;
      puVar4 = temp_v8;
      dataTable2BType1Count();
    } while (temp_v5 < (int)puVar4);
    temp_v5 = 0;
    if (temp_v5 < temp_v6 - 1) {
      do {
        temp_v3 = (temp_v6 - temp_v5) - 1;
        if (0 < temp_v3) {
          psVar11 = temp_v7 + temp_v5;
          psVar7 = psVar11;
          do {
            psVar7 = psVar7 + 1;
            temp_v1 = *psVar11;
            if (temp_v1 < *psVar7) {
              *psVar11 = *psVar7;
              *psVar7 = temp_v1;
            }
            temp_v3 = temp_v3 - 1;
          } while (temp_v3 != 0);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v6 - 1);
    }
    if (0 < temp_v6) {
      temp_v3 = 0;
      psVar7 = temp_v7;
      temp_v5 = temp_v6;
      do {
        temp_v4 = param_1 + temp_v3 * 4;
        temp_v5 = temp_v5 - 1;
        *(unsigned short *)(temp_v4 + 0x20528) = 1;
        temp_v3 = temp_v3 + 1;
        *(short *)(temp_v4 + 0x2052a) = *psVar7;
        psVar7 = psVar7 + 1;
      } while (temp_v5 != 0);
    }
  }
  *(int *)(param_1 + 0x205a8) = temp_v6;
  return;
}

} /* extern "C" */
