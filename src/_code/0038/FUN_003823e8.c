/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003823e8` (_code @ 0x3823e8, 0x694 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
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
} param_1_stack;

extern unsigned char LAB_00382870; /* 0x382870 */
extern unsigned char LAB_00382884; /* 0x382884 */
extern unsigned char LAB_00382894; /* 0x382894 */
extern unsigned char LAB_003828a4; /* 0x3828a4 */
extern char s_e022_02_0044db24[8]; /* 0x44db24 */

extern int FUN_0019dfbc(unsigned int);
extern unsigned int FUN_00223bb0(void);
/* Supplied declaration required: FUN_00235614. */
/* Supplied declaration required: FUN_002356ec. */
extern int FUN_00241ac0(void);
/* Supplied declaration required: FUN_00250fc4. */
extern int FUN_00251100(unsigned int);
/* Supplied declaration required: FUN_0026a02c. */
/* Supplied declaration required: FUN_0026a96c. */
extern int FUN_0026b7cc(void);
extern int FUN_00282d98(void);
/* Supplied declaration required: FUN_00287790. */
extern int FUN_00287afc(unsigned short);
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_0028f15c. */
/* Supplied declaration required: FUN_00296bd8. */
extern int FUN_00299084(unsigned int);
extern int FUN_002990bc(unsigned int);
extern int FUN_0029923c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0029b310. */
/* Supplied declaration required: FUN_0029bc38. */
/* Supplied declaration required: FUN_0029be68. */
/* Supplied declaration required: FUN_0029bf90. */
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002b6700. */
extern int FUN_002b89a0(void);
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002c0128. */
extern int FUN_002c0ba8(void);
/* Supplied declaration required: FUN_002cde7c. */
extern int FUN_002e313c(void);
/* Supplied declaration required: FUN_00333da8. */
/* Supplied declaration required: FUN_00348ae4. */


void FUN_003823e8(unsigned int *param_1)

{
/* irregular: 6 goto(s); 21 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned short *puVar5;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  
  switch(param_1[2]) {
  case 0:
  case 0xb:
    temp_v4 = 0;
    do {
      temp_v1 = temp_v4;
      FUN_002b6700();
      if (((temp_v1 != 0) && (*(char *)(temp_v1 + 6) == '\0')) &&
         (temp_v2 = FUN_0029923c(temp_v4,1), temp_v2 != 0)) {
        temp_v0 = *(unsigned short *)(temp_v1 + 0x19c);
        temp_v2 = FUN_00299084(temp_v4);
        if (temp_v2 == 0) {
          switch(temp_v0) {
          case 1:
            if ((char)param_1[6] == '\0') goto LAB_0038250c;
            break;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            if ((char)param_1[6] == '\x01') goto LAB_0038250c;
            break;
          case 9:
            if ((char)param_1[6] == '\x02') goto LAB_0038250c;
            break;
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
            if ((char)param_1[6] == '\x03') goto LAB_0038250c;
          }
        }
        else {
LAB_0038250c:
          temp_v2 = FUN_00251100(temp_v4);
          if (temp_v2 != 0) {
            if (param_1[2] != 0xb) {
              FUN_002b8b78(0xa3);
              FUN_0029f10c(0,0x323232ff);
              FUN_002356ec(param_1,&LAB_00382870);
              temp_v4 = param_1[2] + 1;
            }
            else {
              FUN_0026a02c();
              FUN_00235614((int)(char)param_1[4]);
              temp_v4 = 3;
            }
            param_1[2] = temp_v4;
            return;
          }
        }
      }
      temp_v4 = (temp_v4 + 1) & 0xffff;
    } while (temp_v4 < 400);
    if (param_1[2] == 0xb) {
      param_1[1] = 5;
      param_1[2] = 0;
      return;
    }
    FUN_002b8b78(0xa3);
    FUN_002356ec(param_1,&LAB_00382884);
    temp_v4 = 10;
    break;
  case 1:
    temp_v2 = FUN_0019dfbc(*(unsigned int *)param_1[0x171]);
    if (temp_v2 != 2) {
      return;
    }
    param_1[2] = param_1[2] + 1;
  case 2:
    FUN_0026a02c();
    FUN_00235614((int)(char)param_1[4]);
    temp_v4 = param_1[2] + 1;
    break;
  case 3:
    temp_v2 = FUN_002e313c();
    if (temp_v2 != 0) {
      temp_v4 = FUN_00223bb0();
      param_1[0x343] = temp_v4;
      param_1[2] = 4;
      FUN_00235614((int)(char)param_1[4]);
      FUN_002b8b78(0xa3);
    }
    temp_v2 = FUN_00241ac0();
    if (temp_v2 == 0) {
      return;
    }
    FUN_00296bd8();
    temp_v4 = 5;
    break;
  case 4:
    temp_v2 = FUN_00241ac0();
    if (temp_v2 == 0) {
      return;
    }
    FUN_00296bd8();
    *param_1 = *param_1 & 0xffffffdf;
    FUN_002356ec(param_1,&LAB_00382894);
    temp_v4 = 6;
    break;
  case 5:
    *param_1 = *param_1 & 0xffffffdf;
    param_1[1] = 5;
    param_1[2] = 0;
    return;
  case 6:
    temp_v2 = FUN_0019dfbc(*(unsigned int *)param_1[0x171]);
    if (temp_v2 != 2) {
      return;
    }
    if ((*param_1 & 0x10000) == 0) {
      temp_v4 = 0xb;
      break;
    }
    puVar4 = (unsigned short *)(param_1[0x343] & 0xffff);
    FUN_002b6700();
    temp_v4 = (unsigned int)*puVar4;
    FUN_002b6700();
    temp_v2 = 0;
    do {
      temp_v3 = temp_v4 + temp_v2 * 8;
      if (*(short *)(temp_v3 + 0x16c) != 1) {
        if (*(short *)(temp_v3 + 0x16c) == 2) {
          FUN_0029bf90(*(unsigned short *)(temp_v3 + 0x16e));
          FUN_0029be68();
        }
      }
      else {
        FUN_00250fc4(*(unsigned short *)(temp_v3 + 0x16e),*(unsigned int *)(temp_v3 + 0x170));
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
    FUN_0029bc38(1);
    temp_v17 = 0;
    temp_v18 = 0;
    temp_v5 = 0;
    temp_v6 = 0;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v14 = 0;
    temp_v15 = 0;
    temp_v16 = 0;
    puVar5 = (unsigned short *)(param_1[0x343] & 0xffff);
    FUN_002b6700();
    FUN_00333da8(&temp_v5,*puVar5);
    FUN_002cde7c(&temp_v5);
    puVar5 = (unsigned short *)(param_1[0x343] & 0xffff);
    FUN_002b6700();
    temp_v2 = FUN_00287afc(*puVar5);
    if (temp_v2 == 0) {
      puVar5 = (unsigned short *)(param_1[0x343] & 0xffff);
      FUN_002b6700();
      FUN_0028f15c(*puVar5);
    }
    temp_v4 = 7;
    break;
  case 7:
    temp_v2 = FUN_002b89a0();
    if (temp_v2 == 0) {
      return;
    }
    FUN_0029b310();
    FUN_002c0128();
    puVar5 = (unsigned short *)(param_1[0x343] & 0xffff);
    FUN_002b6700();
    FUN_00348ae4(*puVar5);
    FUN_002b8b78(0xa3);
    FUN_002356ec(param_1,&LAB_003828a4);
    temp_v4 = 8;
    break;
  case 8:
    temp_v2 = FUN_0019dfbc(*(unsigned int *)param_1[0x171]);
    if (temp_v2 != 2) {
      return;
    }
    temp_v2 = FUN_002990bc(0x6f);
    if (((temp_v2 != 0) && (temp_v2 = FUN_002990bc(0xd4), temp_v2 != 0)) &&
       (temp_v2 = FUN_002990bc(0xd5), temp_v2 != 0)) {
      FUN_002899c4(0x669,1);
    }
    FUN_00287790(0);
    temp_v4 = 0;
    do {
      temp_v2 = temp_v4 * 0x1a;
      if ((unsigned short)(unsigned char)param_1[6] == *(unsigned short *)(temp_v2 + 0x44db3a)) {
        if (*(short *)(temp_v2 + 0x44db36) != 0) {
          if (*(short *)(temp_v2 + 0x44db36) == -1) {
            temp_v3 = FUN_002990bc(0x65);
            if ((temp_v3 == 0) || (temp_v3 = FUN_002990bc(0x66), temp_v3 == 0)) goto LAB_003829cc;
            temp_v3 = FUN_002990bc(0x67);
          }
          else {
            temp_v3 = FUN_002c0ba8();
          }
          if (temp_v3 == 0) goto LAB_003829cc;
        }
        if ((*(short *)(temp_v2 + 0x44db38) == 0) || (temp_v3 = FUN_002c0ba8(), temp_v3 == 0)) {
          *param_1 = *param_1 | 0x20000;
          param_1[5] = (unsigned int)(s_e022_02_0044db24 + temp_v2);
          FUN_0029c660(0,10,0xff);
          FUN_0029c660(1,10,0xff);
          FUN_0026a96c();
          temp_v4 = 9;
          param_1[2] = temp_v4;
          return;
        }
      }
LAB_003829cc:
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 2);
    temp_v4 = 0xb;
    break;
  case 9:
    temp_v2 = FUN_00282d98();
    if (temp_v2 != 0) {
      return;
    }
    temp_v2 = FUN_0026b7cc();
    if (temp_v2 == 0) {
      return;
    }
    param_1[1] = 0x10;
    param_1[2] = 0;
    return;
  case 10:
    temp_v2 = FUN_0019dfbc(*(unsigned int *)param_1[0x171]);
    if (temp_v2 != 2) {
      return;
    }
    temp_v4 = 5;
    break;
  default:
    return;
  }
  param_1[2] = temp_v4;
  return;
}
