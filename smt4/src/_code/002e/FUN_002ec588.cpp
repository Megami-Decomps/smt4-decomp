/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec588` (_code @ 0x2ec588, 0x888 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026a348(void);
int FUN_00296d6c(int, int);
int FUN_00297060(void);
int FUN_00297468(...);
int FUN_0029cc44(void);
int FUN_002b8838(...);
int FUN_002be624(...);

int FUN_001db56c(void);
int FUN_00220ffc(void);
int runWinClose(void);
int FUN_00254600(int);
int FUN_00259294(int);
int FUN_0025981c(void);
int FUN_00262f68(unsigned int, int);
int FUN_00262f78(void);
int FUN_00262f94(void);
int FUN_0026b584(int);
int FUN_0026b9bc(void);
int FUN_00295660(int, unsigned int [60]);
int FUN_00296f4c(unsigned int, unsigned int);
int FUN_002a8740(...);
int FUN_002b9024(void);
int FUN_002bd420(void);
int FUN_002bf694(unsigned int [60], int);
int FUN_002c424c(unsigned int [60], int, unsigned int);
int FUN_002c5728(int);
int FUN_002c5758(int);
int FUN_002cd680(void);
int FUN_002cef34(int);
int FUN_002e1b20(void);
int FUN_002ecfe4(void);
int FUN_002f5004(int);
int SBORROW4(int, int);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp11C; /* 0x11c: local_11c */
} param_1_stack;

extern unsigned char LAB_002ece28; /* 0x2ece28 */
extern unsigned char LAB_002ece48; /* 0x2ece48 */
extern unsigned char DAT_00402854; /* 0x402854 */
extern int DAT_0043daa8; /* 0x43daa8 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001db56c. */
/* Supplied declaration required: FUN_00220ffc. */
/* Supplied declaration required: runWinClose. */
extern int FUN_00248a9c(void);
extern int FUN_0024ea50(unsigned short);
/* Supplied declaration required: FUN_00254600. */
/* Supplied declaration required: FUN_00259294. */
extern int gameDataBlockTestFlag(unsigned int);
extern int FUN_002597e0(void);
/* Supplied declaration required: FUN_0025981c. */
/* Supplied declaration required: FUN_00262f68. */
/* Supplied declaration required: FUN_00262f78. */
/* Supplied declaration required: FUN_00262f94. */
/* Supplied declaration required: FUN_0026a348. */
/* Supplied declaration required: FUN_0026b584. */
/* Supplied declaration required: FUN_0026b9bc. */
extern int FUN_0028fb40(unsigned short);
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_00296d6c. */
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_0029cc44. */
extern int flagWordTestBit(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a8740. */
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002b8dc0(unsigned short);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd420. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002c424c. */
/* Supplied declaration required: FUN_002c5728. */
/* Supplied declaration required: FUN_002c5758. */
extern int FUN_002cd648(int);
/* Supplied declaration required: FUN_002cd680. */
extern int FUN_002cdecc(int);
/* Supplied declaration required: FUN_002cef34. */
/* Supplied declaration required: FUN_002e1b20. */
/* Supplied declaration required: FUN_002ecfe4. */
/* Supplied declaration required: FUN_002f5004. */


unsigned int FUN_002ec588(int param_1)

{
/* irregular: 3 unstructured edge(s); 33 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char *puVar6;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned short *puVar13;
  unsigned short *puVar14;
  unsigned char temp_v11;
  unsigned int temp_v12 [60];
  int temp_v13;
  unsigned int temp_v14;
  unsigned int *temp_v15;
  int temp_v16;
  
  temp_v13 = param_1 + 0x48;
  temp_v14 = 2;
  temp_v16 = param_1 + 0xcfc;
  temp_v15 = (unsigned int *)(param_1 + 0xd58);
  temp_v8 = *(int *)(param_1 + 0x98);
  temp_v2 = param_1 + 0xd00;
  switch(temp_v8) {
  case 0:
    if ((*(char *)(param_1 + 0xd60) == '\0') || (temp_v8 = gameDataBlockTestFlag(0x20), temp_v8 == 0)) {
      temp_v11 = 0;
      temp_v8 = FUN_002a8764();
      temp_v2 = 0;
      do {
        if (-1 < *(char *)(temp_v8 + temp_v2 + 0x90f0)) {
          temp_v9 = FUN_002a8740();
          temp_v3 = flagWordTestBit(temp_v9,2);
          if (temp_v3 != 0) {
            temp_v9 = FUN_002a8740((int)*(char *)(temp_v8 + temp_v2 + 0x90f0));
            FUN_00262f68(temp_v9,4);
            temp_v11 = 1;
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x18);
      if (!temp_v11) {
        *(unsigned int *)(param_1 + 0xd2c) = 6;
      }
      else {
        FUN_00254600(0);
        FUN_0026b9bc();
        *(unsigned int *)(param_1 + 0xd2c) = 0xc;
      }
      runWinClose();
      return 2;
    }
    FUN_002e1b20();
    break;
  case 1:
    FUN_0026b584(2);
    FUN_00259294(2);
    FUN_001db56c();
    temp_v8 = FUN_00248a9c();
    *(int *)(temp_v13 + 0x4c) = temp_v8;
    if (temp_v8 < 1) {
      FUN_002ecfe4();
      FUN_002c5758(2);
      FUN_002c5728(2);
      runWinClose();
      *(unsigned int *)(param_1 + 0xd2c) = 6;
      return temp_v14;
    }
    break;
  case 2:
    FUN_002cd680();
    if (temp_v2 != 0) {
      FUN_002ecfe4();
      FUN_00220ffc();
      FUN_002c5758(2);
      FUN_002c5728(2);
      break;
    }
    return temp_v14;
  case 3:
    temp_v9 = FUN_0025981c();
    *(unsigned int *)(param_1 + 0xd54) = temp_v9;
    temp_v8 = 0;
    if (0 < *(int *)(temp_v13 + 0x4c)) {
      do {
        temp_v2 = FUN_002cd648(temp_v8);
        if (*(short *)(temp_v2 + 0x48) != 0) {
          FUN_002cef34(temp_v2);
          FUN_002f5004(1);
        }
        temp_v10 = temp_v8 + 1;
        temp_v3 = *(int *)(temp_v13 + 0x4c);
        temp_v11 = SBORROW4(temp_v10,temp_v3);
        temp_v2 = temp_v10 - temp_v3;
        if (temp_v10 < temp_v3) {
          temp_v11 = SBORROW4(temp_v10,0xc);
          temp_v2 = temp_v8 - 0xb;
        }
        temp_v8 = temp_v10;
      } while (temp_v2 < 0 != temp_v11);
    }
    temp_v8 = FUN_002c09d0(0x551);
    if (temp_v8 == 0) {
      temp_v8 = 0;
      do {
        temp_v2 = FUN_002cd648(temp_v8);
        if ((*(unsigned char *)(temp_v2 + 0x20) & 0xc) != 0) {
          FUN_002bf694(temp_v12,temp_v2 + 0xe);
          FUN_00295660(0,temp_v12);
          if ((*(unsigned char *)(temp_v2 + 0x20) & 4) == 0) {
            temp_v9 = 0x14;
          }
          else {
            temp_v9 = 0x13;
          }
          FUN_00296f4c(*(unsigned int *)(param_1 + 0xd04),temp_v9);
          *temp_v15 = *(unsigned int *)(param_1 + 0xd58) | 8;
          break;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0xc);
    }
    temp_v8 = FUN_00262f78();
    if (temp_v8 != 0) {
      temp_v8 = FUN_002597e0();
      if (temp_v8 == 0) {
        temp_v8 = FUN_0025981c();
        *(unsigned int *)(param_1 + 0xd48) = 0;
        temp_v8 = temp_v8 - *(int *)(param_1 + 0xd54);
        *(unsigned int *)(param_1 + 0xd4c) = 0;
        if (0 < temp_v8) {
          *(int *)(param_1 + 0xd4c) = temp_v8 / 6;
          if (0 < temp_v8 % 6) {
            *(int *)(param_1 + 0xd48) = temp_v8 % 6;
          }
        }
      }
      temp_v8 = FUN_002597e0();
      if (temp_v8 == 1) {
        FUN_00262f94();
        FUN_002bd420();
        temp_v2 = FUN_002a8764();
        temp_v8 = temp_v2;
        FUN_00262f94();
        if (temp_v8 != 0) {
          temp_v8 = 0;
          *(unsigned int *)(param_1 + 0xce8) = 0;
          FUN_002c424c(temp_v12,0xf0,0xffffffff);
          temp_v7 = 0;
          puVar14 = (unsigned short *)(*(int *)(DAT_0043daa8 + 0xcf0) + temp_v7 * 0xc);
          while( 1 ) {
            temp_v4 = FUN_0025981c();
            if ((((unsigned int)(int)(short)puVar14[1] <= temp_v4) &&
                ((int)(short)*puVar14 != (unsigned int)*(unsigned short *)(param_1 + 0x126))) &&
               (temp_v3 = FUN_0024ea50(*puVar14), temp_v3 == 0)) {
              temp_v4 = (unsigned int)*puVar14;
              FUN_002b9024();
              if ((unsigned int)*(unsigned char *)(temp_v4 + 3) <= *(unsigned char *)(temp_v2 + 0x7a) + 5) {
                temp_v12[temp_v8] = temp_v7;
                temp_v8 = temp_v8 + 1;
              }
            }
            temp_v7 = temp_v7 + 1;
            if ((int)temp_v7 >= 0x3c) break;
            puVar14 = (unsigned short *)0x0;
            if (temp_v7 < 0x3c) {
              puVar14 = (unsigned short *)(*(int *)(DAT_0043daa8 + 0xcf0) + temp_v7 * 0xc);
            }
          }
          temp_v2 = 0;
          if (temp_v8 != 0) {
            do {
              do {
                if (temp_v8 >= 2) {
                  temp_v2 = FUN_00296d6c(0,temp_v8 - 1);
                }
                temp_v7 = temp_v12[temp_v2];
              } while (temp_v7 == 0xffffffff);
              puVar13 = (unsigned short *)0x0;
              if (temp_v7 < 0x3c) {
                puVar13 = (unsigned short *)(*(int *)(DAT_0043daa8 + 0xcf0) + temp_v7 * 0xc);
              }
              temp_v3 = FUN_0024ea50(*puVar13);
            } while (temp_v3 != 0);
            *(unsigned short **)(param_1 + 0xce8) = puVar13;
          }
          *temp_v15 = *(unsigned int *)(param_1 + 0xd58) | 1;
        }
      }
      temp_v8 = FUN_0025981c();
      temp_v2 = *(int *)(param_1 + 0xd54);
      if (temp_v2 < temp_v8) {
        do {
          temp_v9 = FUN_00296d6c(0,4);
          switch(temp_v9) {
          case 0:
            *(short *)(param_1 + 0xd4) = *(short *)(param_1 + 0xd4) + 1;
            break;
          case 1:
            *(short *)(param_1 + 0xd6) = *(short *)(param_1 + 0xd6) + 1;
            break;
          case 2:
            *(short *)(param_1 + 0xd8) = *(short *)(param_1 + 0xd8) + 1;
            break;
          case 3:
            *(short *)(param_1 + 0xda) = *(short *)(param_1 + 0xda) + 1;
            break;
          case 4:
            *(short *)(param_1 + 0xdc) = *(short *)(param_1 + 0xdc) + 1;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < temp_v8);
        *temp_v15 = *(unsigned int *)(param_1 + 0xd58) | 4;
      }
      *(unsigned int *)(param_1 + 0xd0c) = 0;
      *(unsigned int *)(param_1 + 0xd10) = 0;
      *(unsigned int *)(param_1 + 0xd14) = 0;
      *(unsigned int *)(param_1 + 0xd18) = 0;
      *(unsigned int *)(param_1 + 0xd1c) = 0;
      *(unsigned int *)(param_1 + 0xd20) = 0;
      *(unsigned int *)(param_1 + 0xd3c) = 0;
      temp_v8 = FUN_0025981c();
      temp_v12[3] = temp_v8 - *(unsigned int *)(param_1 + 0xd54);
      if (0 < (int)temp_v12[3]) {
        temp_v8 = 0;
        temp_v7 = *(unsigned int *)(param_1 + 0xd54) % 10;
        do {
          puVar6 = &DAT_00402854;
          if ((int)temp_v7 >= 10) {
            temp_v7 = 0;
          }
          temp_v4 = *(unsigned int *)(&DAT_00402854 + temp_v7 * 4);
          if (((temp_v4 == 8) && (FUN_00262f94(), puVar6 != (unsigned char *)0x0)) &&
             (temp_v0 = puVar6[0x48], temp_v0 >= 0x15)) {
            if (temp_v0 < 0x29) {
              temp_v4 = 9;
            }
            else if (temp_v0 < 0x3d) {
              temp_v4 = 10;
            }
            else if (temp_v0 < 0x51) {
              temp_v4 = 0xb;
            }
            else {
              temp_v4 = 0xc;
            }
          }
          temp_v2 = *(int *)(DAT_0043daa8 + 0xcec);
          if ((temp_v2 != 0) && (temp_v4 < 0xd)) {
            temp_v10 = 0;
            temp_v3 = 0;
            do {
              puVar13 = (unsigned short *)(temp_v2 + temp_v4 * 10 + temp_v3 * 2);
              temp_v5 = FUN_002b8dc0(*puVar13);
              temp_v6 = FUN_0028fb40(*puVar13);
              if (temp_v6 < temp_v5) {
                temp_v5 = temp_v10 * 2;
                temp_v10 = temp_v10 + 1;
                *(unsigned short *)((int)temp_v12 + temp_v5) = *puVar13;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 5);
            if (temp_v10 != 0) {
              temp_v3 = FUN_00296d6c(0,temp_v10 - 1);
              temp_v2 = DAT_0043daa8;
              temp_v1 = *(short *)((int)temp_v12 + temp_v3 * 2);
              if (temp_v1 != 0) {
                *(short *)(DAT_0043daa8 + *(int *)(DAT_0043daa8 + 0xd3c) * 2 + 0xd0c) = temp_v1;
                *(int *)(temp_v2 + 0xd3c) = *(int *)(temp_v2 + 0xd3c) + 1;
              }
            }
          }
          temp_v8 = temp_v8 + 1;
          temp_v7 = temp_v7 + 1;
        } while (temp_v8 < (int)temp_v12[3]);
        if (0 < *(int *)(param_1 + 0xd3c)) {
          *temp_v15 = *(unsigned int *)(param_1 + 0xd58) | 2;
        }
      }
      *(unsigned char *)(param_1 + 0xd64) = 0;
    }
    temp_v7 = *(unsigned int *)(param_1 + 0xd58);
    if (temp_v7 != 0) {
      if ((temp_v7 & 7) != 0) {
        FUN_00297468(&LAB_002ece28,temp_v16,0);
        temp_v7 = FUN_00262f78();
        puVar14 = *(unsigned short **)(param_1 + 0xd58);
        temp_v7 = temp_v7 & 0xffff;
        temp_v11 = ((unsigned int)puVar14 & 1) != 0;
        if (temp_v11) {
          puVar14 = *(unsigned short **)(param_1 + 0xce8);
        }
        if (temp_v11 && puVar14 != (unsigned short *)0x0) {
          temp_v7 = (unsigned int)*puVar14;
        }
        FUN_002b9024();
        temp_v8 = FUN_002cdecc((int)*(char *)(temp_v7 + 0x30));
        FUN_002be624(temp_v12,&LAB_002ece48,temp_v8 + 1);
        FUN_00297468(temp_v12,param_1 + 0xd00,0);
        *(unsigned char *)(param_1 + 0xd63) = 1;
        FUN_0029cc44();
        FUN_0026a348();
        FUN_002b8838(0x3c);
        *(int *)(temp_v13 + 0x50) = *(int *)(temp_v13 + 0x50) + 1;
      }
      else {
        temp_v9 = 6;
        if ((temp_v7 & 8) != 0) {
          temp_v9 = 2;
        }
        else if ((temp_v7 & 1) != 0) {
          temp_v9 = 3;
        }
        else if ((temp_v7 & 4) != 0) {
          temp_v9 = 4;
        }
        else if ((temp_v7 & 2) != 0) {
          temp_v9 = 5;
        }
        *(unsigned int *)(param_1 + 0xd2c) = temp_v9;
        temp_v14 = 2;
      }
    }
    else {
      *(unsigned int *)(param_1 + 0xd2c) = 6;
      temp_v14 = 2;
    }
    runWinClose();
    return temp_v14;
  case 4:
    temp_v2 = *(int *)(param_1 + 0xcfc);
    if (temp_v2 != 0) {
      temp_v8 = *(int *)(param_1 + 0xd00);
    }
    if (temp_v2 != 0 && temp_v8 != 0) {
      FUN_00297060();
      *(int *)(param_1 + 0xd08) = temp_v2;
      *(unsigned int *)(temp_v2 + 0x108) = 2;
      temp_v7 = *(unsigned int *)(param_1 + 0xd58);
      temp_v9 = 6;
      if ((temp_v7 & 8) != 0) {
        temp_v9 = 2;
      }
      else if ((temp_v7 & 1) != 0) {
        temp_v9 = 3;
      }
      else if ((temp_v7 & 4) != 0) {
        temp_v9 = 4;
      }
      else if ((temp_v7 & 2) != 0) {
        temp_v9 = 5;
      }
      *(unsigned int *)(param_1 + 0xd2c) = temp_v9;
    }
  default:
    return temp_v14;
  }
  *(int *)(temp_v13 + 0x50) = *(int *)(temp_v13 + 0x50) + 1;
  return temp_v14;
}

} /* extern "C" */
