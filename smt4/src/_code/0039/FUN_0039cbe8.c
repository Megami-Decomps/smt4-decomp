/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039cbe8` (_code @ 0x39cbe8, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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

extern int DAT_0049fcfc; /* 0x49fcfc */

extern char *FUN_00231494(unsigned char *, int);
/* Supplied declaration required: FUN_002314d0. */
extern int FUN_0024c2ec(char, char);
extern int FUN_002c09d0(void);


void FUN_0039cbe8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned char *puVar3;
  char *pcVar4;
  int temp_v2;
  short *psVar6;
  short *psVar7;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  short temp_v6 [32];
  unsigned char temp_v7 [4];
  
  temp_v5 = 0;
  temp_v6[0] = 0;
  temp_v6[1] = 0;
  temp_v6[2] = 0;
  temp_v6[3] = 0;
  temp_v6[4] = 0;
  temp_v6[5] = 0;
  temp_v6[6] = 0;
  temp_v6[7] = 0;
  temp_v6[8] = 0;
  temp_v6[9] = 0;
  temp_v6[10] = 0;
  temp_v6[0xb] = 0;
  temp_v6[0xc] = 0;
  temp_v6[0xd] = 0;
  temp_v6[0xe] = 0;
  temp_v6[0xf] = 0;
  temp_v6[0x10] = 0;
  temp_v6[0x11] = 0;
  temp_v6[0x12] = 0;
  temp_v6[0x13] = 0;
  temp_v6[0x14] = 0;
  temp_v6[0x15] = 0;
  temp_v4 = 0;
  temp_v6[0x16] = 0;
  temp_v6[0x17] = 0;
  temp_v6[0x18] = 0;
  temp_v6[0x19] = 0;
  temp_v6[0x1a] = 0;
  temp_v6[0x1b] = 0;
  temp_v6[0x1c] = 0;
  temp_v6[0x1d] = 0;
  temp_v6[0x1e] = 0;
  temp_v6[0x1f] = 0;
  puVar3 = temp_v7;
  FUN_002314d0();
  if (0 < (int)puVar3) {
    do {
      pcVar4 = (char *)FUN_00231494(temp_v7,temp_v4);
      if ((*pcVar4 == param_2) &&
         ((temp_v1 = 0, DAT_0049fcfc != 0 ||
          ((((*(short *)(pcVar4 + 4) == 0 || (temp_v2 = FUN_002c09d0(), temp_v2 != 0)) &&
            ((*(short *)(pcVar4 + 6) == 0 || (temp_v2 = FUN_002c09d0(), temp_v2 == 0)))) &&
           (temp_v2 = FUN_0024c2ec(pcVar4[1],pcVar4[2]), temp_v2 != 0)))))) {
        if (0 < temp_v5) {
          psVar6 = temp_v6;
          temp_v2 = temp_v5;
          do {
            if ((int)*psVar6 == (int)pcVar4[3]) {
              temp_v1 = 1;
            }
            temp_v2 = temp_v2 - 1;
            psVar6 = psVar6 + 1;
          } while (temp_v2 != 0);
          if (!temp_v1) {
            psVar6 = temp_v6 + temp_v5;
            temp_v5 = temp_v5 + 1;
            *psVar6 = (short)pcVar4[3];
          }
        }
        else {
          psVar6 = temp_v6 + temp_v5;
          temp_v5 = temp_v5 + 1;
          *psVar6 = (short)pcVar4[3];
        }
      }
      temp_v4 = temp_v4 + 1;
      puVar3 = temp_v7;
      FUN_002314d0();
    } while (temp_v4 < (int)puVar3);
    temp_v4 = 0;
    if (temp_v4 < temp_v5 - 1) {
      do {
        temp_v2 = (temp_v5 - temp_v4) - 1;
        if (0 < temp_v2) {
          psVar7 = temp_v6 + temp_v4;
          psVar6 = psVar7;
          do {
            psVar6 = psVar6 + 1;
            temp_v0 = *psVar7;
            if (temp_v0 < *psVar6) {
              *psVar7 = *psVar6;
              *psVar6 = temp_v0;
            }
            temp_v2 = temp_v2 - 1;
          } while (temp_v2 != 0);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v5 - 1);
    }
    if (0 < temp_v5) {
      temp_v2 = 0;
      psVar6 = temp_v6;
      temp_v4 = temp_v5;
      do {
        temp_v3 = param_1 + temp_v2 * 4;
        temp_v4 = temp_v4 - 1;
        *(unsigned short *)(temp_v3 + 0x121e4) = 1;
        temp_v2 = temp_v2 + 1;
        *(short *)(temp_v3 + 0x121e6) = *psVar6;
        psVar6 = psVar6 + 1;
      } while (temp_v4 != 0);
    }
  }
  *(int *)(param_1 + 0x12264) = temp_v5;
  return;
}
