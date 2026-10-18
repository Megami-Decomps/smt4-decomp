/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002178a0` (_code @ 0x2178a0, 0x884 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 12 slot(s), 42 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned short sp614; /* 0x614: local_614 */
    unsigned int sp618; /* 0x618: local_618 */
    unsigned int sp61C; /* 0x61c: local_61c */
    unsigned int sp620; /* 0x620: local_620 */
    unsigned int sp624; /* 0x624: local_624 */
    unsigned short sp62C; /* 0x62c: local_62c */
    unsigned short sp62E; /* 0x62e: local_62e */
    unsigned int sp650; /* 0x650: local_650 */
} param_1_stack;

/* Supplied declaration required: FUN_00198fcc. */
/* Supplied declaration required: FUN_001ce19c. */
/* Supplied declaration required: FUN_00258c58. */
extern int FUN_0025a0b4(void);
/* Supplied declaration required: FUN_0026aac0. */
/* Supplied declaration required: FUN_0026abc0. */
/* Supplied declaration required: FUN_0029af4c. */
/* Supplied declaration required: FUN_0029d924. */
/* Supplied declaration required: FUN_0029db94. */
/* Supplied declaration required: FUN_0029dcd4. */
extern int FUN_0029e2b0(void);
extern int FUN_0029e2cc(void);
extern int FUN_0029e398(void);
extern int FUN_0029ec6c(unsigned short);
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002b087c. */
extern unsigned short FUN_002b88c4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b9094(void);
extern int FUN_002b90a8(void);
extern int FUN_002b9220(int, unsigned int);
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf9f0. */
extern int FUN_002c1830(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002efe8c. */


void FUN_002178a0(int param_1)

{
/* irregular: 3 goto(s); 16 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  short *psVar6;
  unsigned short *puVar7;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar11;
  unsigned int *puVar12;
  int *piVar13;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9 [8];
  unsigned char *temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned short temp_v17;
  int temp_v18;
  unsigned char *temp_v19;
  unsigned int *temp_v20;
  unsigned int temp_v21;
  
  temp_v6 = 0;
  do {
    temp_v1 = FUN_002b90a8();
    if (temp_v1 == *(short *)(param_1 + temp_v6 * 2 + 0x5716)) goto LAB_002178e0;
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x20);
  temp_v6 = -1;
LAB_002178e0:
  puVar12 = (unsigned int *)(param_1 + 0x5918);
  temp_v20 = (unsigned int *)(param_1 + 0x5920);
  temp_v19 = (unsigned char *)(param_1 + 0x5924);
  temp_v18 = param_1 + 0x12b8;
  puVar11 = (unsigned int *)(param_1 + 0x5758);
  piVar13 = (int *)(param_1 + 0x591c);
  switch(*puVar12) {
  case 1:
    FUN_00198fcc(param_1);
    FUN_002bdac0(temp_v18,0);
    temp_v6 = FUN_002b9220(param_1 + 0x11a0,0);
    if (temp_v6 != 0) {
      *puVar12 = 2;
      *piVar13 = 0;
      temp_v0 = FUN_002b88c4(0x15,0x1b3);
      *(unsigned short *)(param_1 + 0x5738) = temp_v0;
      temp_v6 = 0;
      *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
      if (0 < (int)*puVar11) {
        do {
          temp_v1 = param_1 + temp_v6 * 0x2c;
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x5760);
          FUN_002b087c();
          if ((*(unsigned char *)(temp_v4 + 3) & 1) != 0) {
            if (*(char *)(param_1 + 0x575f) != '\0') {
              temp_v0 = FUN_002b88c4(0x15,0x1a0);
              *(unsigned short *)(param_1 + temp_v6 * 2 + 0x573a) = temp_v0;
            }
            else {
              temp_v4 = *(int *)(temp_v1 + 0x5780) - 0x14a;
              temp_v8 = temp_v4 >= 4;
              temp_v7 = temp_v4 == 4;
              if (temp_v4 >= 5) {
                temp_v4 = *(int *)(temp_v1 + 0x5780) - 0x165;
                temp_v8 = temp_v4 >= 3;
                temp_v7 = temp_v4 == 3;
              }
              if (!(temp_v8 && !temp_v7)) {
                temp_v0 = FUN_002b88c4(0x15,0x19f);
                *(unsigned short *)(param_1 + temp_v6 * 2 + 0x573a) = temp_v0;
              }
              else {
                temp_v0 = FUN_002b88c4(0x15,0x19e);
                *(unsigned short *)(param_1 + temp_v6 * 2 + 0x573a) = temp_v0;
              }
            }
          }
          else {
            temp_v0 = FUN_002b88c4(0x15,*(unsigned int *)(temp_v1 + 0x5780));
            *(unsigned short *)(param_1 + temp_v6 * 2 + 0x573a) = temp_v0;
          }
          temp_v6 = temp_v6 + 1;
          *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
        } while (temp_v6 < (int)*puVar11);
      }
    }
    break;
  case 2:
    if (*(short *)(param_1 + 0x1308) != 0xb) {
      if (*(short *)(param_1 + 0x1308) == 0xc) {
        temp_v1 = FUN_002b9220(temp_v18,0);
        goto joined_r0x00217ae8;
      }
    }
    else {
      temp_v1 = FUN_002b9220(temp_v18,1);
joined_r0x00217ae8:
      if (temp_v1 == 0) break;
    }
    FUN_002bdac0(temp_v18,0);
    temp_v1 = FUN_0029e398();
    if (temp_v1 == 0) break;
    psVar6 = (short *)FUN_0029af4c();
    temp_v1 = 0;
    if (0 < (int)*puVar11) {
      do {
        if (*(char *)(param_1 + temp_v1 * 0x2c + 0x5788) != '\0') {
          temp_v1 = param_1 + temp_v1 * 0x2c;
          if (((int)*psVar6 != (unsigned int)*(unsigned short *)(temp_v1 + 0x5760)) ||
             (psVar6[10] != *(short *)(temp_v1 + 0x5766))) {
            FUN_0026aac0(*(unsigned short *)(temp_v1 + 0x5760),temp_v9);
            puVar7 = (unsigned short *)FUN_0029af4c();
            temp_v4 = (unsigned int)*puVar7;
            FUN_002b087c();
            temp_v21 = temp_v4;
            psVar6 = (short *)FUN_0029af4c();
            if ((*psVar6 < 1) || ((temp_v21 == 0 || ((*(unsigned short *)(temp_v21 + 0x16) & 1) != 0)))) {
              temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x5760);
              FUN_002b087c();
              if ((temp_v4 != 0) && ((*(unsigned short *)(temp_v4 + 0x16) & 1) == 0)) {
                temp_v13 = 0;
                temp_v14 = 0;
                temp_v15 = 0;
                temp_v16 = 0;
              }
            }
            else {
              temp_v13 = 0;
              temp_v14 = 0;
              temp_v15 = 0;
              temp_v16 = 0;
            }
            temp_v11 = *(unsigned short *)(temp_v1 + 0x5762);
            temp_v12 = *(unsigned short *)(temp_v1 + 0x5764);
            temp_v17 = *(unsigned short *)(temp_v1 + 0x5766);
            FUN_0029db94(temp_v9,1,0);
            FUN_0026abc0(1);
            FUN_0029d924(1);
            *temp_v20 = 0;
            temp_v2 = FUN_0029ec6c(*(unsigned short *)(temp_v1 + 0x5760));
            if (temp_v2 != 0) {
              FUN_0029dcd4(0,1,*(unsigned short *)(temp_v1 + 0x5760),0);
            }
            else {
              FUN_0029dcd4(0,2,*(unsigned short *)(temp_v1 + 0x5760),0);
            }
          }
          break;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)*puVar11);
    }
    FUN_001ce19c(param_1);
    temp_v10 = (unsigned char *)(param_1 + 0x575d);
    *temp_v10 = 0;
    temp_v1 = FUN_0029e2cc();
    if (temp_v1 != 0) {
      FUN_002efe8c(1);
      *puVar12 = 3;
      *temp_v19 = 0;
      temp_v6 = FUN_0029e2b0();
      if (temp_v6 < 0) {
        FUN_002bdac0(temp_v18,10,0);
      }
      else {
        temp_v6 = FUN_0029e2b0();
        if (0 < temp_v6) {
          FUN_002bdac0(temp_v18,9,0);
        }
      }
      break;
    }
    if (*(char *)(param_1 + 0x307c) != '\0') break;
    if (temp_v6 >= 0) {
      temp_v1 = FUN_002b9094();
      if ((temp_v1 != 1) && (temp_v1 = FUN_002b9094(), temp_v1 != 2)) {
        temp_v1 = FUN_002b9094();
        if (temp_v1 != 6) goto LAB_00217d98;
        if (temp_v6 != 0x11) {
          *(unsigned char *)(param_1 + 0x3060) = 0;
        }
      }
      else if (temp_v6 != 0x11) {
        if (*(char *)(param_1 + 0x575c) == '\0') {
          temp_v4 = *puVar11;
          if (0 < (int)temp_v4) {
            temp_v3 = temp_v4 & 1;
            if (temp_v3 == 1) {
              *(unsigned char *)(param_1 + 0x5788) = 0;
            }
            temp_v5 = (unsigned int)(temp_v3 == 1);
            if ((int)temp_v3 < (int)temp_v4) {
              do {
                temp_v1 = temp_v5 + 1;
                *(unsigned char *)(param_1 + temp_v5 * 0x2c + 0x5788) = 0;
                temp_v5 = temp_v5 + 2;
                *(unsigned char *)(param_1 + temp_v1 * 0x2c + 0x5788) = 0;
                temp_v3 = temp_v3 + 2;
              } while ((int)temp_v3 < (int)*puVar11);
            }
          }
          param_1 = param_1 + temp_v6 * 0x2c;
          if (*(char *)(param_1 + 0x5460) != '\0') {
            *(unsigned char *)(param_1 + 0x5470) = 1;
            *temp_v10 = 1;
          }
        }
      }
      else {
        *(unsigned char *)(param_1 + 0x3060) = 1;
        *puVar12 = 4;
        FUN_002a0f68();
      }
      temp_v1 = FUN_002b9094();
      if (((temp_v1 == 1) && (temp_v1 = FUN_0025a0b4(), temp_v1 < 1)) && (temp_v6 != 0x11)) {
        FUN_002bc200(0x100016c);
      }
    }
    else {
LAB_00217d98:
      temp_v6 = FUN_002c1830(0,1);
      if (temp_v6 != 0) {
        *(unsigned char *)(param_1 + 0x3060) = 0;
      }
      else {
        temp_v6 = FUN_002c1830(1,1);
        if (temp_v6 != 0) {
          *(unsigned char *)(param_1 + 0x3060) = 1;
          *puVar12 = 4;
          FUN_002a0f68(1);
        }
      }
    }
    break;
  case 3:
    FUN_002bf9f0(temp_v18);
    FUN_001ce19c(param_1);
    temp_v6 = FUN_0029e2cc();
    if (temp_v6 != 0) {
      temp_v1 = 0;
      temp_v6 = 0;
      if (temp_v1 < (int)*puVar11) {
        do {
          temp_v6 = temp_v1;
          if (*(char *)(param_1 + temp_v1 * 0x2c + 0x5788) != '\0') break;
          temp_v1 = temp_v1 + 1;
          temp_v6 = 0;
        } while (temp_v1 < (int)*puVar11);
      }
      psVar6 = (short *)FUN_0029af4c();
      param_1 = param_1 + temp_v6 * 0x2c;
      if ((int)*psVar6 != (unsigned int)*(unsigned short *)(param_1 + 0x5760)) {
        FUN_0026aac0((unsigned int)*(unsigned short *)(param_1 + 0x5760),temp_v9);
        puVar7 = (unsigned short *)FUN_0029af4c();
        temp_v4 = (unsigned int)*puVar7;
        FUN_002b087c();
        if ((temp_v4 != 0) && ((*(unsigned short *)(temp_v4 + 0x16) & 1) == 0)) {
          temp_v13 = 0;
          temp_v14 = 0;
          temp_v15 = 0;
          temp_v16 = 0;
        }
        temp_v11 = *(unsigned short *)(param_1 + 0x5762);
        temp_v12 = *(unsigned short *)(param_1 + 0x5764);
        temp_v17 = *(unsigned short *)(param_1 + 0x5766);
        FUN_0029db94(temp_v9,1,0);
        FUN_00258c58(0);
        FUN_0029d924(1);
        *temp_v20 = 0;
        *temp_v19 = 0;
      }
    }
    else {
      FUN_002efe8c(0);
      *puVar12 = 2;
      temp_v6 = FUN_0029e2b0();
      if (temp_v6 < 0) {
        FUN_002bdac0(temp_v18,0xb,0);
      }
      else {
        temp_v6 = FUN_0029e2b0();
        if (0 < temp_v6) {
          FUN_002bdac0(temp_v18,0xc,0);
        }
      }
      FUN_002b8b78(0x33);
      puVar5 = (unsigned short *)FUN_0029af4c();
      temp_v6 = FUN_0029ec6c(*puVar5);
      if (temp_v6 != 0) {
        FUN_0029dcd4(0,1,*puVar5,0);
      }
      else {
        FUN_0029dcd4(0,2,*puVar5,0);
      }
    }
  }
  *piVar13 = *piVar13 + 1;
  return;
}
