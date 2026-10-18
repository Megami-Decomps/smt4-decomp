/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00329da4` (_code @ 0x329da4, 0xce0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

extern unsigned char LAB_0032a288; /* 0x32a288 */
extern unsigned char LAB_0032a2a8; /* 0x32a2a8 */
extern unsigned char LAB_0032a2cc; /* 0x32a2cc */
extern unsigned char LAB_0032a2e8; /* 0x32a2e8 */
extern unsigned char LAB_0032a308; /* 0x32a308 */
extern unsigned char LAB_0032a324; /* 0x32a324 */
extern unsigned char LAB_0032a344; /* 0x32a344 */
extern unsigned char LAB_0032a360; /* 0x32a360 */
extern unsigned char LAB_0032aa20; /* 0x32aa20 */
extern unsigned char LAB_0032aa2c; /* 0x32aa2c */
extern unsigned char LAB_0032aa38; /* 0x32aa38 */
extern int DAT_0043dd90; /* 0x43dd90 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00152af8. */
extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_00210030. */
/* Supplied declaration required: FUN_00241e88. */
/* Supplied declaration required: FUN_002583a4. */
/* Supplied declaration required: FUN_0025863c. */
/* Supplied declaration required: FUN_0025884c. */
/* Supplied declaration required: FUN_002637b4. */
extern int FUN_00263910(unsigned int);
extern unsigned int FUN_00263e48(unsigned char *);
/* Supplied declaration required: FUN_00282e6c. */
/* Supplied declaration required: FUN_00288948. */
/* Supplied declaration required: FUN_0028c194. */
/* Supplied declaration required: FUN_00293ca8. */
/* Supplied declaration required: FUN_002950bc. */
/* Supplied declaration required: FUN_00295208. */
/* Supplied declaration required: FUN_00295780. */
/* Supplied declaration required: FUN_00295798. */
extern int FUN_002958bc(void);
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_00295b9c. */
/* Supplied declaration required: FUN_00295fcc. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_0029c56c. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_002a0640. */
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a06dc. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002b2d40. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b8ce4(unsigned int);
/* Supplied declaration required: FUN_002b9220. */
extern unsigned int FUN_002bd020(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd25c. */
/* Supplied declaration required: FUN_002bf030. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002bf9e8. */
/* Supplied declaration required: FUN_002bf9f0. */
extern int FUN_002c1830(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c615c. */


unsigned int FUN_00329da4(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 42 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned char *puVar7;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned short *puVar11;
  int temp_v9;
  int temp_v10;
  char *pcVar14;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  int temp_v14 [35];
  
  temp_v2 = DAT_0043dd90;
  FUN_002bf9f0(DAT_0043dd90 + 0x8cc);
  *(int *)(temp_v2 + 0x7c) = *(int *)(temp_v2 + 0x7c) + 2;
  FUN_00293ca8(*(unsigned int *)(temp_v2 + 0x80),0);
  temp_v11 = (float)(int)in_s0;
  FUN_002c615c(*(unsigned int *)(temp_v2 + 0x7c),temp_v11);
  *(unsigned int *)(temp_v2 + 0x7c) = temp_v8;
  switch(*(unsigned int *)(temp_v2 + 4)) {
  case 1:
    temp_v7 = FUN_002958bc();
    if (temp_v7 == 0) break;
    FUN_002a0678(0,10);
    FUN_002a0678(1,10);
    FUN_002a0640(0x100006b,10,0x3c);
    temp_v0 = *(short *)(temp_v2 + 0x1e);
    *(unsigned int *)(temp_v2 + 0x24) = 0xffffffff;
    if (temp_v0 != 2) {
      if (temp_v0 == 3) {
        temp_v6 = 0x10000ab;
      }
      else {
        if (temp_v0 != 4) {
          temp_v7 = DAT_0043dd90;
          *(unsigned int *)(DAT_0043dd90 + 4) = 2;
          *(unsigned int *)(temp_v7 + 8) = 0;
          break;
        }
        temp_v6 = 0x10000ac;
      }
      FUN_002bf9e8(temp_v6);
    }
    else {
      FUN_002bf9e8(0x10000aa);
    }
    temp_v7 = DAT_0043dd90;
    *(unsigned int *)(DAT_0043dd90 + 4) = 2;
    *(unsigned int *)(temp_v7 + 8) = 0;
    break;
  case 2:
    temp_v7 = 0;
    do {
      if (temp_v7 <= *(int *)(temp_v2 + 8) - 1) {
        FUN_002b9220(temp_v2 + temp_v7 * 0x8c + 0x2c8,0);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 5);
    FUN_002bf9f0(temp_v2 + 0x840);
    temp_v7 = FUN_002b8ce4(0);
    if (((temp_v7 != 0) && (temp_v7 = FUN_002b8ce4(1), temp_v7 != 0)) &&
       (*(char *)(temp_v2 + 0x582) != '\0')) {
      FUN_002a06c8(*(unsigned int *)(temp_v2 + 0x84),1);
      FUN_002a06dc(*(unsigned int *)(temp_v2 + 0x8c),0);
      temp_v7 = DAT_0043dd90;
      *(unsigned int *)(DAT_0043dd90 + 4) = 3;
      *(unsigned int *)(temp_v7 + 8) = 0;
    }
    break;
  case 3:
    *(int *)(temp_v2 + 0x78) = *(int *)(temp_v2 + 0x78) + 1;
    temp_v7 = DAT_0043dd90;
    temp_v10 = FUN_002bf6d0(0x24,0x20b);
    temp_v14[0] = FUN_002bf6d0(0x24,0x20e);
    temp_v0 = *(short *)(temp_v7 + 0x1e);
    pcVar14 = (char *)0x0;
    if (temp_v0 == 2) {
      pcVar14 = (char *)0x403404;
    }
    else if (temp_v0 == 3) {
      pcVar14 = (char *)0x403414;
    }
    else if (temp_v0 == 4) {
      pcVar14 = "A\xa0ÍĘĬŨŲƮŀ";
    }
    temp_v9 = 0;
    if (temp_v0 != 0) {
      do {
        puVar11 = (unsigned short *)(pcVar14 + temp_v9 * 4);
        temp_v3 = *(int *)(temp_v7 + 8);
        temp_v5 = (unsigned int)*puVar11;
        if ((int)(temp_v5 - 5) <= temp_v3) {
          if (temp_v3 < (int)temp_v5) {
            *(unsigned int *)(temp_v7 + temp_v9 * 4 + 0x58) =
                 ((int)**(short **)(temp_v10 + 0xc) / 5) * ((temp_v3 - temp_v5) + 5);
          }
          else {
            temp_v5 = (unsigned int)puVar11[1];
            if (temp_v3 < (int)temp_v5) {
              temp_v3 = temp_v7 + temp_v9 * 4;
              *(int *)(temp_v3 + 0x58) = (int)**(short **)(temp_v10 + 0xc);
              temp_v12 = (float)VectorSignedToFloat((unsigned int)puVar11[1] - (unsigned int)*puVar11,
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v13 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v14[0] + 0xc) + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = (float)VectorSignedToFloat(*(int *)(temp_v7 + 8) - (unsigned int)*puVar11,
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = (float)(int)-((temp_v13 / temp_v12) * temp_v11);
              *(float *)(temp_v3 + 0x68) = temp_v11;
            }
            else if (temp_v3 < (int)(temp_v5 + 5)) {
              temp_v4 = temp_v7 + temp_v9 * 4;
              *(unsigned int *)(temp_v4 + 0x58) =
                   ((int)**(short **)(temp_v10 + 0xc) / 5) * (5 - (temp_v3 - temp_v5));
              *(int *)(temp_v4 + 0x68) = -(int)*(short *)(*(int *)(temp_v14[0] + 0xc) + 2);
            }
            else {
              *(unsigned int *)(temp_v7 + temp_v9 * 4 + 0x58) = 0;
              FUN_002bf9f0(temp_v7 + temp_v9 * 0x8c + 0x610);
            }
          }
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < (int)(unsigned int)*(unsigned short *)(temp_v7 + 0x1e));
    }
    temp_v7 = FUN_00263910(*(unsigned int *)(temp_v2 + 0x84));
    puVar6 = *(unsigned int **)(temp_v2 + 0x84);
    if (temp_v7 != 0) {
      *puVar6 = *puVar6 | 2;
      *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 0;
      if (*(short *)(temp_v2 + 0x1e) == 2) {
        if (*(char *)(temp_v2 + 0x20) != '\0') {
          puVar7 = &LAB_0032a288;
          FUN_0029bddc(&LAB_0032a288,7);
          *(unsigned char **)(temp_v2 + 0x88) = puVar7;
          temp_v6 = FUN_00263e48(&LAB_0032a2a8);
          *(unsigned int *)(temp_v2 + 0x90) = temp_v6;
        }
        else {
          puVar7 = &LAB_0032a2cc;
          FUN_0029bddc(&LAB_0032a2cc,7);
          *(unsigned char **)(temp_v2 + 0x88) = puVar7;
          temp_v6 = FUN_00263e48(&LAB_0032a2e8);
          *(unsigned int *)(temp_v2 + 0x90) = temp_v6;
        }
      }
      if (*(short *)(temp_v2 + 0x1e) == 3) {
        puVar7 = &LAB_0032a308;
        FUN_0029bddc(&LAB_0032a308,7);
        *(unsigned char **)(temp_v2 + 0x88) = puVar7;
        temp_v6 = FUN_00263e48(&LAB_0032a324);
        *(unsigned int *)(temp_v2 + 0x90) = temp_v6;
      }
      if (*(short *)(temp_v2 + 0x1e) == 4) {
        puVar7 = &LAB_0032a344;
        FUN_0029bddc(&LAB_0032a344,7);
        *(unsigned char **)(temp_v2 + 0x88) = puVar7;
        temp_v6 = FUN_00263e48(&LAB_0032a360);
        *(unsigned int *)(temp_v2 + 0x90) = temp_v6;
      }
      FUN_0029c56c(*(unsigned int *)(temp_v2 + 0x8c),0);
      FUN_002637b4(*(unsigned int *)(temp_v2 + 0x8c));
      *(unsigned int *)(temp_v2 + 0x8c) = 0;
      FUN_002a06c8(*(unsigned int *)(temp_v2 + 0x88),1);
      FUN_002a06dc(*(unsigned int *)(temp_v2 + 0x90),0);
      FUN_00152af8(*(unsigned int *)(temp_v2 + 0x84));
      FUN_002a7aa0(*(unsigned int *)(temp_v2 + 0x84));
      *(unsigned int *)(temp_v2 + 0x84) = 0;
      temp_v7 = DAT_0043dd90;
      if (*(char *)(temp_v2 + 0x20) != '\0') {
        FUN_002971e4(*(unsigned int *)(temp_v2 + 0x2a0),0x11);
        FUN_002b8b78(0x58);
        temp_v7 = DAT_0043dd90;
        *(unsigned int *)(DAT_0043dd90 + 4) = 4;
        *(unsigned int *)(temp_v7 + 8) = 0;
      }
      else {
        *(unsigned int *)(DAT_0043dd90 + 4) = 5;
        *(unsigned int *)(temp_v7 + 8) = 0;
      }
    }
    else {
      FUN_002b2d40();
      temp_v10 = FUN_002c1830(9,1);
      temp_v7 = 0x28e;
      temp_v9 = 0x311;
      if ((temp_v10 != 0) || (temp_v10 = FUN_002c1830(6,1), temp_v10 != 0)) {
        temp_v0 = *(short *)(temp_v2 + 0x1e);
        temp_v10 = temp_v7;
        if (*(char *)(temp_v2 + 0x20) != '\0') {
          if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
            temp_v10 = temp_v9;
          }
          temp_v12 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11 < temp_v12) << 0x1f) |
                  ((unsigned int)(temp_v11 == temp_v12) << 0x1e);
          in_fpscr = temp_v5 | ((unsigned int)(NAN(temp_v11) || NAN(temp_v12)) << 0x1c);
          temp_v1 = (unsigned char)(temp_v5 >> 0x18);
          if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
            if (temp_v0 == 2) {
              temp_v10 = 800;
            }
            else if (temp_v0 == 3 || temp_v0 == 4) {
              temp_v10 = 0x375;
            }
            if (*(int *)(temp_v2 + 0x24) != -1) {
              FUN_00295fcc();
              *(unsigned int *)(temp_v2 + 0x24) = 0xffffffff;
              FUN_002bf9e8(0x10000ad);
            }
          }
        }
        else if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
          temp_v10 = temp_v9;
        }
        temp_v12 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 <= temp_v11) << 0x1d);
        if (!romwright_subpiece_4_1_0(temp_v5 >> 0x1d,0)) {
          VectorSignedToFloat(temp_v10,(unsigned char)(temp_v5 >> 0x16) & 3);
          FUN_00210030(*(unsigned int *)(temp_v2 + 0x84));
          temp_v3 = *(int *)(*(int *)(temp_v2 + 0x8c) + 4);
          VectorSignedToFloat(temp_v10,(unsigned char)(temp_v5 >> 0x16) & 3);
          temp_v6 = *(unsigned int *)(temp_v3 + 0x44);
          (**(romwright_code **)(temp_v3 + 0x4c))(*(unsigned int *)(temp_v3 + 0x50));
          *(unsigned int *)(temp_v3 + 0x3c) = *(unsigned int *)(temp_v3 + 0x38);
          *(unsigned int *)(temp_v3 + 0x38) = temp_v6;
          *(unsigned char *)(temp_v3 + 0x58) = 1;
          temp_v3 = 6;
          *(int *)(temp_v2 + 8) = temp_v10;
          do {
            FUN_002bf030(temp_v2 + temp_v3 * 0x8c + 0x2c8,1);
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 10);
        }
      }
      if (*(char *)(temp_v2 + 0x20) != '\0') {
        temp_v0 = *(short *)(temp_v2 + 0x1e);
        temp_v10 = temp_v7;
        if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
          temp_v10 = temp_v9;
        }
        temp_v3 = 0;
        do {
          if (*(int *)(temp_v2 + 8) == temp_v10 + temp_v3 * 4) {
            FUN_002bf030(temp_v2 + temp_v3 * 0x8c + 0x610,0);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 4);
      }
      temp_v0 = *(short *)(temp_v2 + 0x1e);
      if (*(char *)(temp_v2 + 0x20) != '\0') {
        if (temp_v0 == 2) {
          temp_v10 = 800;
        }
        else {
          temp_v10 = 0;
          if (temp_v0 == 3 || temp_v0 == 4) {
            temp_v10 = 0x375;
          }
        }
      }
      else {
        temp_v10 = temp_v7;
        if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
          temp_v10 = temp_v9;
        }
      }
      if (*(int *)(temp_v2 + 8) == temp_v10) {
        FUN_00282e6c(0,0xffffffff);
      }
      if (*(int *)(temp_v2 + 8) == temp_v10 + 5) {
        FUN_002a0678(0,0x1e);
      }
      if (*(char *)(temp_v2 + 0x20) != '\0') {
        temp_v0 = *(short *)(DAT_0043dd90 + 0x1e);
        if (temp_v0 == 2) {
          temp_v7 = 0x28f;
        }
        else {
          temp_v7 = 0;
          if (temp_v0 == 3 || temp_v0 == 4) {
            temp_v7 = temp_v9;
          }
        }
        if (*(int *)(temp_v2 + 8) == temp_v7) {
          temp_v6 = FUN_002bf9e8(0x10000ae);
          *(unsigned int *)(temp_v2 + 0x24) = temp_v6;
        }
      }
      else {
        temp_v0 = *(short *)(temp_v2 + 0x1e);
        if ((temp_v0 != 2) && (temp_v7 = 0, temp_v0 == 3 || temp_v0 == 4)) {
          temp_v7 = temp_v9;
        }
        if (*(int *)(temp_v2 + 8) == temp_v7) {
          FUN_002bf9e8(0x10000ad);
        }
      }
      if (*(short *)(temp_v2 + 0x1e) == 2) {
        if (*(int *)(temp_v2 + 8) != 0xa0) break;
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
        FUN_0025884c(temp_v2 + 0x38);
        FUN_0025863c(&LAB_0032aa20);
        FUN_002583a4(temp_v2 + 0x38);
      }
      if (*(short *)(temp_v2 + 0x1e) == 3) {
        if (*(int *)(temp_v2 + 8) == 0xa0) {
          *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
          FUN_0025884c(temp_v2 + 0x38);
          FUN_0025863c(&LAB_0032aa20);
          FUN_002583a4(temp_v2 + 0x38);
        }
        if (*(int *)(temp_v2 + 8) == 0x11d) {
          *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x30);
          FUN_0025884c(temp_v2 + 0x38);
          FUN_0025863c(&LAB_0032aa2c);
          FUN_002583a4(temp_v2 + 0x38);
        }
      }
      if (*(short *)(temp_v2 + 0x1e) == 4) {
        if (*(int *)(temp_v2 + 8) == 0xa0) {
          *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
          FUN_0025884c(temp_v2 + 0x38);
          FUN_0025863c(&LAB_0032aa20);
          FUN_002583a4(temp_v2 + 0x38);
        }
        if (*(int *)(temp_v2 + 8) == 0x118) {
          *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x30);
          FUN_0025884c(temp_v2 + 0x38);
          FUN_0025863c(&LAB_0032aa2c);
          FUN_002583a4(temp_v2 + 0x38);
        }
        if (*(int *)(temp_v2 + 8) == 0x168) {
          *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x34);
          FUN_0025884c(temp_v2 + 0x38);
          FUN_0025863c(&LAB_0032aa38);
          FUN_002583a4(temp_v2 + 0x38);
        }
      }
    }
    break;
  case 4:
    FUN_002bf9f0();
    temp_v7 = FUN_0019dfbc(*(unsigned int *)(temp_v2 + 0x2a0));
    if ((temp_v7 != 2) || (*(char *)(temp_v2 + 0x60e) == '\0')) break;
  case 5:
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v2 + 0xc);
    FUN_002bd25c(temp_v5);
    FUN_002bf86c(temp_v14,temp_v5);
    FUN_00295904(8,temp_v14);
    temp_v6 = FUN_002bd020(*(unsigned short *)(temp_v2 + 0xc),1);
    FUN_002bf86c(temp_v14,temp_v6);
    FUN_00295904(0x10,temp_v14);
    FUN_002971e4(*(unsigned int *)(temp_v2 + 0x2a0),0x10);
    FUN_002b8b78(0x58);
    FUN_00295798(*(unsigned short *)(temp_v2 + 0xc),1);
    FUN_00295780(1);
    temp_v7 = DAT_0043dd90;
    *(unsigned int *)(DAT_0043dd90 + 4) = 6;
    *(unsigned int *)(temp_v7 + 8) = 0;
    break;
  case 6:
    FUN_002bf9f0();
    temp_v7 = FUN_0019dfbc(*(unsigned int *)(temp_v2 + 0x2a0));
    if ((temp_v7 == 2) && (*(char *)(temp_v2 + 0x60e) != '\0')) {
      FUN_0029c660(0,10,0xff);
      FUN_0029c660(1,10,0xff);
      FUN_0029c650(10);
      temp_v7 = DAT_0043dd90;
      *(unsigned int *)(DAT_0043dd90 + 4) = 7;
      *(unsigned int *)(temp_v7 + 8) = 0;
    }
    break;
  case 7:
    temp_v7 = FUN_002b8ce4(0);
    if ((temp_v7 != 0) && (temp_v7 = FUN_002b8ce4(1), temp_v7 != 0)) {
      FUN_002a755c(*(unsigned int *)(temp_v2 + 0x2a0));
      FUN_002c4360(*(unsigned int *)(temp_v2 + 0x2a4));
      FUN_002c4360(*(unsigned int *)(temp_v2 + 0x29c));
      temp_v7 = 0;
      if (*(short *)(temp_v2 + 0x1e) != 0) {
        do {
          FUN_00295b9c((int)*(short *)(temp_v2 + temp_v7 * 2 + 0xe),1);
          temp_v10 = temp_v2 + temp_v7 * 4;
          FUN_00295208(*(unsigned int *)(temp_v10 + 0x28));
          *(unsigned int *)(temp_v10 + 0x28) = 0;
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < (int)(unsigned int)*(unsigned short *)(temp_v2 + 0x1e));
      }
      FUN_00241e88(temp_v2 + 0x38);
      FUN_00295208(*(unsigned int *)(temp_v2 + 0x80));
      *(unsigned int *)(temp_v2 + 0x80) = 0;
      FUN_0028c194();
      FUN_00152af8(*(unsigned int *)(temp_v2 + 0x88));
      FUN_002a7aa0(*(unsigned int *)(temp_v2 + 0x88));
      *(unsigned int *)(temp_v2 + 0x88) = 0;
      FUN_0029c56c(*(unsigned int *)(temp_v2 + 0x90),0);
      FUN_002637b4(*(unsigned int *)(temp_v2 + 0x90));
      *(unsigned int *)(temp_v2 + 0x90) = 0;
      FUN_00288948();
      FUN_002950bc(1);
      temp_v7 = DAT_0043dd90;
      *(unsigned int *)(DAT_0043dd90 + 4) = 8;
      *(unsigned int *)(temp_v7 + 8) = 0;
    }
  }
  *(int *)(temp_v2 + 8) = *(int *)(temp_v2 + 8) + 1;
  return 0;
}
