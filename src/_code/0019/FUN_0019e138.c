/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019e138` (_code @ 0x19e138, 0x1290 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
} void_stack;

extern unsigned char DAT_00439c88; /* 0x439c88 */
extern int DAT_00439c8c; /* 0x439c8c */
extern unsigned int DAT_00439c90; /* 0x439c90 */
extern float DAT_00439c94; /* 0x439c94 */
extern float DAT_00439c98; /* 0x439c98 */
extern int iRam00439c9c; /* 0x439c9c */
extern int iRam00439ca0; /* 0x439ca0 */
extern int iRam00439ca4; /* 0x439ca4 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0017fbc4. */
/* Supplied declaration required: FUN_0019a4f4. */
/* Supplied declaration required: FUN_001ed64c. */
/* Supplied declaration required: FUN_001f4f14. */
/* Supplied declaration required: FUN_001f53d0. */
/* Supplied declaration required: FUN_001f5e9c. */
/* Supplied declaration required: FUN_002017f4. */
/* Supplied declaration required: FUN_00205cc8. */
/* Supplied declaration required: FUN_00206b80. */
/* Supplied declaration required: FUN_0021799c. */
/* Supplied declaration required: FUN_00222b5c. */
/* Supplied declaration required: FUN_002251d4. */
/* Supplied declaration required: FUN_00225200. */
extern int FUN_00225220(int);
extern int FUN_002254cc(void);
/* Supplied declaration required: FUN_00249974. */
/* Supplied declaration required: FUN_00287188. */
/* Supplied declaration required: FUN_00289f18. */
/* Supplied declaration required: FUN_00289fa8. */
/* Supplied declaration required: FUN_0028a0d0. */
/* Supplied declaration required: FUN_0028a22c. */
extern int FUN_0028a318(void);
/* Supplied declaration required: FUN_0028a368. */
/* Supplied declaration required: FUN_0028a924. */
/* Supplied declaration required: FUN_0028b7f8. */
/* Supplied declaration required: FUN_0028be40. */
/* Supplied declaration required: FUN_0028be50. */
/* Supplied declaration required: FUN_0028be84. */
extern int FUN_0028bebc(int);
/* Supplied declaration required: FUN_0028bed4. */
/* Supplied declaration required: FUN_0028bf2c. */
/* Supplied declaration required: FUN_0028bf9c. */
/* Supplied declaration required: FUN_0028bfac. */
/* Supplied declaration required: FUN_0028bfe4. */
/* Supplied declaration required: FUN_0028c028. */
/* Supplied declaration required: FUN_0028c040. */
extern int FUN_0028c5e8(int);
extern int FUN_0028c600(int);
/* Supplied declaration required: FUN_0028cb40. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_00292c0c. */
extern int FUN_00293230(void);
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_002954dc. */
/* Supplied declaration required: FUN_002954f4. */
extern int FUN_00295618(void);
/* Supplied declaration required: FUN_0029a128. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002a5ed0. */
extern int FUN_002a60b4(unsigned int, int);
extern int FUN_002a8740(int);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002af5c0. */
/* Supplied declaration required: FUN_002b06c4. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002b70cc. */
extern int FUN_002b8cec(unsigned int);
/* Supplied declaration required: FUN_002bc01c. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf818. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c09f4. */
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */
extern unsigned int FUN_002cdd74(void);
extern int FUN_002d0080(int);
extern int FUN_002d0298(int);
extern int FUN_002d8e40(void);
extern unsigned int FUN_002d8e58(void);
extern int FUN_002dc3ec(int);
/* Supplied declaration required: FUN_002dc55c. */
extern int FUN_002e4354(void);
extern int FUN_002f25c4(void);
extern int FUN_00313158(unsigned int);
/* Supplied declaration required: FUN_00318c5c. */
/* Supplied declaration required: FUN_00337a0c. */
/* Supplied declaration required: FUN_0033c6d4. */
/* Supplied declaration required: FUN_0033c6f8. */
/* Supplied declaration required: FUN_0033d0f0. */
/* Supplied declaration required: FUN_0033d2a8. */
/* Supplied declaration required: FUN_003aeb64. */


unsigned int FUN_0019e138(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 63 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned short *puVar7;
  unsigned int temp_v6;
  unsigned int temp_v7;
  short *psVar10;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int *puVar14;
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  
  temp_v4 = FUN_002c08f0();
  temp_v0 = DAT_00439ca8;
  if (DAT_00439ca8 == 0) {
    return 0;
  }
  temp_v11 = 0;
  temp_v12 = temp_v11;
  do {
    temp_v5 = FUN_002a60b4(0x14,temp_v11);
    if (temp_v5 != 0) {
      temp_v12 = temp_v12 + 1;
    }
    temp_v11 = temp_v11 + 1;
  } while (temp_v11 < 5);
  temp_v11 = 0;
  do {
    temp_v5 = FUN_002a60b4(0x15,temp_v11);
    if (temp_v5 != 0) {
      temp_v12 = temp_v12 + 1;
    }
    temp_v11 = temp_v11 + 1;
  } while (temp_v11 < 4);
  if (temp_v12 < 9) {
    return 0;
  }
  FUN_00206b80(temp_v0 + 0x2200);
  FUN_001f53d0(temp_v0 + 8);
  FUN_0019a4f4(temp_v0 + 0x2460);
  FUN_00205cc8(temp_v0);
  if ((*(char *)(temp_v0 + 0xc9d8) != '\0') &&
     (temp_v12 = *(int *)(temp_v0 + 0xc9e0) + 1, *(int *)(temp_v0 + 0xc9e0) = temp_v12,
     *(int *)(temp_v0 + 0xc9dc) < temp_v12)) {
    *(unsigned char *)(temp_v0 + 0xc9d8) = 0;
    FUN_0017fbc4();
  }
  temp_v16 = 0x3e20d97c;
  temp_v12 = 0;
  do {
    temp_v11 = temp_v0 + temp_v12 * 0x14c;
    temp_v2 = *(short *)(temp_v11 + 0xe1c4);
    if (temp_v2 != 0) {
      if (temp_v2 != 2) {
        if (temp_v2 != 3) {
          if (temp_v2 == 4) {
            temp_v1 = *(unsigned short *)(temp_v11 + 0xe1c6);
            if ((temp_v1 < 6) && (*(unsigned short *)(temp_v11 + 0xe1c6) = temp_v1 + 1, (unsigned short)(temp_v1 + 1) >= 4))
            {
              *(unsigned char *)(temp_v11 + 0xe1cc) = 1;
              **(unsigned int **)(temp_v11 + 0xe1f4) = **(unsigned int **)(temp_v11 + 0xe1f4) | 0x2000000;
            }
            temp_v5 = FUN_002bf818(temp_v11 + 0xe0ac);
            if (temp_v5 != 0) {
              *(unsigned short *)(temp_v11 + 0xe1c4) = 0;
            }
          }
        }
        else {
          *(float *)(temp_v11 + 0xe1c8) = *(float *)(temp_v11 + 0xe1c8) + (float)temp_v16;
          temp_v17 = temp_v11 + 0xe138;
          if (*(char *)(temp_v11 + 0xe1c2) != '\0') {
            temp_v1 = *(short *)(temp_v11 + 0xe1c6) + 1;
            *(unsigned short *)(temp_v11 + 0xe1c6) = temp_v1;
            if (temp_v1 >= 2) {
              *(unsigned short *)(temp_v11 + 0xe1c6) = 0;
              *(unsigned short *)(temp_v11 + 0xe1c4) = 4;
              FUN_002bee58(temp_v11 + 0xe0ac,0xd);
            }
          }
          else {
            FUN_002bf818(temp_v17);
          }
        }
      }
      else {
        temp_v5 = FUN_002bf818(temp_v11 + 0xe0ac);
        if (temp_v5 != 0) {
          *(unsigned short *)(temp_v11 + 0xe1c4) = 3;
        }
      }
    }
    temp_v12 = temp_v12 + 1;
  } while (temp_v12 < 0xc);
  FUN_0033d0f0(*(unsigned int *)(temp_v0 + 0x7e20));
  if (((*(char *)(temp_v0 + 0x7e4b) != '\0') && (temp_v12 = FUN_002bf818(), temp_v12 != 0)) &&
     (*(short *)(temp_v0 + 0x7f1c) == 0xe)) {
    *(unsigned char *)(temp_v0 + 0x7e4b) = 0;
  }
  switch(*(unsigned int *)(temp_v0 + 0x7e38)) {
  case 1:
    if (*(int *)(temp_v0 + 0x7e3c) != 0) {
      temp_v4 = FUN_0028c600(temp_v0 + 0x2460);
    }
    else {
      temp_v4 = FUN_0028c600(temp_v0 + 0x2460);
    }
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x7e38) = 0;
    }
    break;
  case 2:
    temp_v4 = temp_v0 + 0x2200;
    FUN_002dc55c();
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x7e38) = 0;
    }
    break;
  case 3:
    temp_v4 = FUN_00225220(temp_v0 + 8);
    if (temp_v4 == 0) break;
    temp_v4 = FUN_0028c600(temp_v0 + 0x2460);
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x7e38) = 0;
    }
    break;
  case 4:
    temp_v4 = FUN_002d0298(temp_v0 + 8);
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x7e38) = 2;
      FUN_001f5e9c(temp_v0 + 0x2200);
    }
    break;
  case 6:
    *(unsigned int *)(temp_v0 + 0x7e38) = 0;
    break;
  case 7:
    temp_v12 = temp_v0 + 0x2460;
    temp_v11 = FUN_002e4354();
    if (temp_v11 != 0) {
      temp_v8 = temp_v0;
      FUN_003aeb64(temp_v0,&temp_v17);
      FUN_0033d2a8(*(unsigned int *)(temp_v0 + 0x7e20),&temp_v17,temp_v8);
      FUN_0033c6d4(*(unsigned int *)(temp_v0 + 0x7e20));
      *(unsigned int *)(temp_v0 + 0x7e38) = 9;
      temp_v8 = DAT_00439ca8;
      temp_v12 = FUN_0028c5e8(DAT_00439ca8 + 8);
      if (temp_v12 != 0) {
        temp_v12 = temp_v8 + 0x2200;
        FUN_00249974();
        if (temp_v12 != 0) {
          FUN_0028bfac(temp_v8 + 8);
          FUN_0028bf9c(temp_v8 + 0x2200);
        }
      }
    }
    else {
      temp_v11 = FUN_002d0080(temp_v12);
      if (temp_v11 != 0) {
        FUN_0028c040();
        FUN_0029a128(4);
        *(unsigned int *)(temp_v0 + 0x7e38) = 10;
        temp_v8 = DAT_00439ca8;
        temp_v12 = FUN_0028c5e8(DAT_00439ca8 + 8);
        if (temp_v12 != 0) {
          temp_v12 = temp_v8 + 0x2200;
          FUN_00249974();
          if (temp_v12 != 0) {
            FUN_0028bfac(temp_v8 + 8);
            FUN_0028bf9c(temp_v8 + 0x2200);
          }
        }
      }
      else {
        temp_v11 = FUN_0028c028(temp_v12);
        if (temp_v11 != 0) {
          *(unsigned int *)(temp_v0 + 0x7e38) = 8;
          FUN_0028bfe4(temp_v12);
          temp_v8 = DAT_00439ca8;
          temp_v12 = FUN_0028c5e8(DAT_00439ca8 + 8);
          if (temp_v12 != 0) {
            temp_v12 = temp_v8 + 0x2200;
            FUN_00249974();
            if (temp_v12 != 0) {
              FUN_0028bfac(temp_v8 + 8);
              FUN_0028bf9c(temp_v8 + 0x2200);
            }
          }
        }
      }
    }
    temp_v12 = FUN_002939f4();
    if ((*(unsigned int *)(temp_v12 + 0x44a8) & 0x2000) != 0) {
      temp_v12 = FUN_00313158(*(unsigned int *)(temp_v4 + 0x2268));
      if (temp_v12 == 0) {
        puVar7 = (unsigned short *)0x0;
        FUN_002b06c4();
        temp_v8 = 0;
        do {
          if ((int)(short)puVar7[0x44] == *(int *)(temp_v4 + 0x2268)) break;
          temp_v8 = temp_v8 + 1;
          puVar7 = puVar7 + 0x54;
        } while ((int)temp_v8 < 0x4b1);
        if (temp_v8 >= 0x4b1) {
          DAT_00439c88 = 1;
        }
        else {
          DAT_00439c88 = 0;
          FUN_0028bf2c();
          FUN_002954f4(*puVar7,1);
          FUN_002954dc(1);
          temp_v12 = FUN_002939f4();
          if ((*(unsigned int *)(temp_v12 + 0x44a8) & 0x40000) != 0) {
            FUN_001ed64c(*(char *)((int)puVar7 + 0xa3) + '\x02',*(unsigned int *)(temp_v4 + 0x2230),1);
          }
        }
      }
    }
    else {
      temp_v4 = FUN_002254cc();
      if (temp_v4 != 0) {
        FUN_0028bed4();
        FUN_002017f4();
      }
    }
    break;
  case 8:
    temp_v4 = FUN_00318c5c();
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x7e38) = 0xc;
      temp_v18 = temp_v18 & 0xffff0000;
      temp_v17 = temp_v17 & 0xffff0000;
      FUN_0028cb40(temp_v0 + 0x2460,&temp_v18,&temp_v17);
      temp_v4 = FUN_0028c028(temp_v0 + 0x2460);
      if (temp_v4 != 0) {
        FUN_0028b7f8(1);
        FUN_0028a924(0xe,0,0xffffffff);
        FUN_0028a368(1);
      }
      else if ((short)temp_v18 != 8) {
        if (!((short)temp_v18 == 2 || (short)temp_v18 == 3)) {
          if ((short)temp_v18 != 9) {
            if ((short)temp_v18 == 0xd) {
              FUN_0028b7f8(1);
              FUN_0028a924(10,0,0xffffffff);
              FUN_0028a368(1);
            }
          }
          else {
            FUN_0028b7f8(1);
            if (*(int *)(temp_v0 + 0x54bc) != 0) {
              temp_v12 = FUN_002a8764();
              temp_v4 = *(int *)(temp_v0 + 0x54bc);
              temp_v12 = (int)*(char *)(temp_v4 + temp_v12 + 0x9107);
              temp_v7 = 3;
            }
            else {
              temp_v12 = -1;
              temp_v4 = 0;
              temp_v7 = 2;
            }
            FUN_0028a924(temp_v7,temp_v4,temp_v12);
            FUN_0028a368(1);
          }
        }
        else {
          if (*(int *)(temp_v0 + 0x54bc) == 0) {
            temp_v4 = -1;
          }
          else {
            temp_v4 = FUN_002a8764();
            temp_v4 = (int)*(char *)(*(int *)(temp_v0 + 0x54bc) + temp_v4 + 0x9107);
          }
          FUN_0028b7f8(1);
          FUN_0028a924(5,(int)(short)temp_v17,temp_v4);
          FUN_0028a368(1);
        }
      }
      else {
        if (*(int *)(temp_v0 + 0x54bc) == 0) {
          temp_v4 = -1;
        }
        else {
          temp_v4 = FUN_002a8764();
          temp_v4 = (int)*(char *)(*(int *)(temp_v0 + 0x54bc) + temp_v4 + 0x9107);
        }
        FUN_0028b7f8(1);
        FUN_0028a924(8,(int)(short)temp_v17,temp_v4);
        FUN_0028a368(1);
      }
    }
    break;
  case 9:
    temp_v4 = 1;
    FUN_002c1658();
    temp_v8 = DAT_00439ca8;
    if ((temp_v4 != 0) && (temp_v4 = FUN_0028bebc(DAT_00439ca8 + 8), temp_v4 != 0)) {
      temp_v4 = temp_v8 + 0x2200;
      FUN_0028be84();
      if (temp_v4 == 0) goto LAB_0019e7b8;
    }
    else {
LAB_0019e7b8:
      FUN_002939f4();
      temp_v4 = FUN_00293230();
      if (temp_v4 == 0) break;
    }
    FUN_0033c6f8(*(unsigned int *)(temp_v0 + 0x7e20));
    FUN_002251d4(temp_v0 + 0x2460);
    *(unsigned int *)(temp_v0 + 0x7e38) = 7;
    temp_v8 = DAT_00439ca8;
    temp_v4 = FUN_0028bebc(DAT_00439ca8 + 8);
    if (temp_v4 != 0) {
      temp_v4 = temp_v8 + 0x2200;
      FUN_0028be84();
      if (temp_v4 != 0) {
        FUN_0028be50(temp_v8 + 8);
        FUN_0028be40(temp_v8 + 0x2200);
      }
    }
    FUN_002bc01c(0x100016e);
    break;
  case 10:
    FUN_0021799c();
    temp_v4 = FUN_002dc3ec(temp_v0 + 0x2460);
    if ((temp_v4 == 0) || (*(int *)(temp_v0 + 0x7d78) == 4)) {
      temp_v7 = 1;
    }
    else {
      temp_v7 = 0;
    }
    FUN_002a0cc8(temp_v7);
    break;
  case 0xb:
    temp_v4 = FUN_00295618();
    if (temp_v4 != 0) {
      FUN_00292c0c();
      FUN_002a0cc8(0);
      *(unsigned int *)(temp_v0 + 0x7e38) = 7;
    }
    break;
  case 0xc:
    if (*(char *)(temp_v0 + 0x7e48) != '\0') {
      temp_v12 = temp_v0 + 0x2460;
      temp_v4 = FUN_002f25c4();
      if (temp_v4 != 0) {
        FUN_001f4f14(temp_v12,temp_v0 + 0x7e28,temp_v0 + 0x7e30);
        if (temp_v12 != 0) {
          *(unsigned char *)(temp_v0 + 0x7e49) = 1;
        }
        else {
          *(unsigned char *)(temp_v0 + 0x7e49) = 0;
        }
        *(unsigned int *)(temp_v0 + 0x7e38) = 7;
        *(unsigned char *)(temp_v0 + 0x7e48) = 0;
      }
    }
    else {
      temp_v12 = FUN_0028a318();
      if (temp_v12 != 0) {
        temp_v12 = temp_v0 + 0x7e28;
        FUN_00222b5c(temp_v12,temp_v0 + 0x7e30);
        if (temp_v12 == 0) {
          *(unsigned char *)(temp_v0 + 0x7e49) = 0;
        }
        else {
          *(unsigned char *)(temp_v0 + 0x7e49) = 1;
          temp_v12 = FUN_002d8e40();
          if (temp_v12 == 0xb) {
            temp_v7 = FUN_002d8e58();
            temp_v6 = FUN_002cdd74();
            FUN_00337a0c(temp_v4,temp_v6,temp_v7);
          }
        }
        FUN_0028a22c();
        *(unsigned int *)(temp_v0 + 0x7e38) = 7;
        temp_v4 = FUN_0028c028();
        if (temp_v4 != 0) {
          FUN_00225200(temp_v0 + 0x2460);
        }
        temp_v8 = DAT_00439ca8;
        temp_v4 = FUN_0028bebc(DAT_00439ca8 + 8);
        if (temp_v4 != 0) {
          temp_v4 = temp_v8 + 0x2200;
          FUN_0028be84();
          if (temp_v4 != 0) {
            FUN_0028be50(temp_v8 + 8);
            FUN_0028be40(temp_v8 + 0x2200);
          }
        }
      }
    }
    break;
  case 0xe:
    temp_v4 = FUN_002b8cec(5);
    if (temp_v4 != 0) {
      DAT_00439c8c = DAT_00439c8c - 1;
      if (DAT_00439c8c < 0) {
        DAT_00439c8c = 2;
      }
    }
    else {
      temp_v4 = FUN_002b8cec(6);
      if (temp_v4 != 0) {
        DAT_00439c8c = DAT_00439c8c + 1;
        if (DAT_00439c8c >= 3) {
          DAT_00439c8c = 0;
        }
      }
      else {
        temp_v4 = FUN_002b8cec(4);
        if (temp_v4 != 0) {
          if (DAT_00439c8c == 0) {
            FUN_002ae898(0xf,*(unsigned short *)(DAT_00439c90 * 2 + 0x439cc0));
            DAT_00439c90 = DAT_00439c90 - 1;
            if ((int)DAT_00439c90 < 0) {
              DAT_00439c90 = 0xd;
            }
            FUN_002a5ed0(0xf,*(unsigned short *)(DAT_00439c90 * 2 + 0x439cc0));
          }
          if (DAT_00439c8c != 1) {
            if (DAT_00439c8c == 2) {
              DAT_00439c98 = DAT_00439c98 - 0.01f;
            }
          }
          else {
            DAT_00439c94 = DAT_00439c94 - 0.01f;
          }
        }
        else {
          temp_v4 = FUN_002b8cec(3);
          if (temp_v4 != 0) {
            if (DAT_00439c8c == 0) {
              FUN_002ae898(0xf,*(unsigned short *)(DAT_00439c90 * 2 + 0x439cc0));
              DAT_00439c90 = DAT_00439c90 + 1;
              if (DAT_00439c90 >= 0xe) {
                DAT_00439c90 = 0;
              }
              FUN_002a5ed0(0xf,*(unsigned short *)(DAT_00439c90 * 2 + 0x439cc0));
            }
            if (DAT_00439c8c != 1) {
              if (DAT_00439c8c == 2) {
                DAT_00439c98 = DAT_00439c98 + 0.01f;
              }
            }
            else {
              DAT_00439c94 = DAT_00439c94 + 0.01f;
            }
          }
          else {
            temp_v4 = 10;
            FUN_002c1658(10,1);
            if (temp_v4 != 0) {
              FUN_002ae898(0xf,*(unsigned short *)(DAT_00439c90 * 2 + 0x439cc0));
              FUN_0028be50(temp_v0 + 8);
              FUN_0028be40(temp_v0 + 0x2200);
              *(unsigned int *)(temp_v0 + 0x7e38) = 7;
            }
          }
        }
      }
    }
    break;
  case 0xf:
    temp_v4 = FUN_002b8cec(0);
    if (temp_v4 != 0) {
      temp_v4 = 0;
      do {
        temp_v12 = FUN_002c09f4(0xf);
        temp_v17 = 1;
        temp_v18 = 1;
        FUN_0028a0d0(temp_v0,temp_v12 + 0x14,0);
        FUN_00289fa8(temp_v0,2,1);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
LAB_0019ef1c:
      if (iRam00439c9c < 1) break;
    }
    else {
      temp_v4 = FUN_002b8cec(10);
      if (temp_v4 == 0) {
        temp_v4 = FUN_002b8cec(1);
        if (temp_v4 != 0) {
          *(unsigned int *)(temp_v0 + 0x7e38) = 7;
          FUN_002af5c0(DAT_00439ca8 + 0x7ec0,0xe,0);
        }
        goto LAB_0019ef1c;
      }
      iRam00439c9c = 8;
      iRam00439ca0 = 0;
      iRam00439ca4 = 1;
    }
    temp_v8 = 0;
    if (0 < iRam00439c9c) {
      do {
        if (iRam00439ca0 == temp_v8 * 8) {
          temp_v2 = FUN_002c09f4(0x28);
          temp_v3 = FUN_002c09f4(0x28);
          temp_v9 = DAT_00439ca8;
          temp_v4 = iRam00439ca4;
          temp_v20 = 1;
          temp_v19 = 10;
          temp_v18 = 1;
          temp_v13 = (unsigned int)((temp_v8 & 1) == 0);
          temp_v17 = temp_v13;
          FUN_00289f18(DAT_00439ca8 + 0x2460,10,iRam00439ca4,0);
          temp_v7 = 0;
          if (temp_v4 == 0) {
            temp_v7 = 0x3fa;
          }
          else if (temp_v4 == 1) {
            temp_v7 = 0x403;
          }
          else if (temp_v4 == 2) {
            temp_v7 = 0x40c;
          }
          else if (temp_v4 == 3) {
            temp_v7 = 0x415;
          }
          else if (temp_v4 == 4) {
            temp_v7 = 0x41f;
          }
          temp_v4 = FUN_002bf4f8(0x15,temp_v7);
          temp_v12 = (short)(temp_v3 - 0x14) + 0x11;
          temp_v17 = temp_v20;
          temp_v18 = 0;
          temp_v21 = (short)(temp_v2 - 0x14) + 0x27;
          VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v21,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = temp_v12;
          FUN_0028a0d0(temp_v9,temp_v19,0,temp_v13);
          temp_v4 = iRam00439ca4;
          temp_v17 = 2;
          temp_v18 = DAT_00439ca8;
          temp_v7 = 0;
          if (iRam00439ca4 == 0) {
            temp_v7 = 0x3fa;
          }
          else if (iRam00439ca4 == 1) {
            temp_v7 = 0x403;
          }
          else if (iRam00439ca4 == 2) {
            temp_v7 = 0x40c;
          }
          else if (iRam00439ca4 == 3) {
            temp_v7 = 0x415;
          }
          else if (iRam00439ca4 == 4) {
            temp_v7 = 0x1cc;
          }
          temp_v12 = FUN_002bf4f8(0x15,temp_v7);
          if (temp_v4 != 4) {
            VectorSignedToFloat((int)*(short *)(temp_v12 + 10) + temp_v20,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v21 + *(short *)(temp_v12 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_00289fa8(temp_v18,temp_v17,0);
          }
          else {
            temp_v19 = (int)*(short *)(temp_v12 + 8);
            temp_v20 = (unsigned int)*(short *)(temp_v12 + 10);
            temp_v4 = FUN_002bf4f8(0x15,0x416);
            psVar10 = *(short **)(temp_v4 + 0xc);
            if (psVar10 != (short *)0x0) {
              temp_v12 = (int)*psVar10;
              temp_v10 = (unsigned int)*(short *)(temp_v4 + 8);
              temp_v9 = temp_v12 - (temp_v12 >> 0x1f);
              temp_v12 = temp_v10 + temp_v12 / 2;
              temp_v4 = (int)*(short *)(temp_v4 + 10) + (int)psVar10[1] / 2;
            }
            else {
              temp_v9 = *(unsigned short *)(temp_v4 + 4) & 0xffff7fff;
              temp_v10 = *(unsigned short *)(temp_v4 + 6) & 0xffff7fff;
              temp_v12 = (int)*(short *)(temp_v4 + 8) + (temp_v9 >> 1);
              temp_v4 = (int)*(short *)(temp_v4 + 10) + (temp_v10 >> 1);
            }
            temp_v11 = FUN_002bf4f8(0x15,0x71,temp_v9,temp_v10);
            VectorSignedToFloat((temp_v20 - temp_v4) +
                                (int)*(short *)(temp_v11 + 10) + (int)(short)(temp_v3 - 0x14),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v11 + 8) + (int)(short)(temp_v2 - 0x14) +
                                (temp_v19 - temp_v12),(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_00289fa8(temp_v18,temp_v17,0,temp_v19 - temp_v12);
          }
          if (temp_v8 == iRam00439c9c - 1U) {
            iRam00439c9c = 0;
          }
          temp_v4 = FUN_002a8740(iRam00439ca4 - 1);
          if (temp_v13 != 0) {
            temp_v2 = *(short *)(temp_v4 + 0x2c) - 10;
            *(short *)(temp_v4 + 0x2c) = temp_v2;
            if (temp_v2 < 1) {
              *(unsigned short *)(temp_v4 + 0x2c) = 0;
            }
          }
          else {
            temp_v2 = *(short *)(temp_v4 + 0x2a) - 10;
            *(short *)(temp_v4 + 0x2a) = temp_v2;
            if (temp_v2 < 1) {
              *(unsigned short *)(temp_v4 + 0x2a) = 0;
              *(unsigned short *)(temp_v4 + 0x44) = 2;
            }
          }
        }
        temp_v8 = temp_v8 + 1;
      } while ((int)temp_v8 < iRam00439c9c);
    }
    iRam00439ca0 = iRam00439ca0 + 1;
    break;
  case 0x10:
    temp_v12 = FUN_00318c5c(temp_v0 + 0x2460);
    if (temp_v12 != 0) {
      *(unsigned int *)(temp_v0 + 0x7e38) = 0x11;
      FUN_00291944();
      temp_v8 = DAT_00439ca8;
      FUN_00287188(DAT_00439ca8 + 0x2460);
      FUN_002b2368(*(unsigned int *)(temp_v8 + 0x7e20));
      *(unsigned int *)(temp_v8 + 0x7e20) = 0;
      if (DAT_00439ca8 != 0) {
        FUN_002c415c();
        DAT_00439ca8 = 0;
      }
      FUN_002c43b4(*(unsigned int *)(temp_v4 + 0x54),0);
    }
  }
  puVar14 = (unsigned int *)(temp_v0 + 0x5cf0);
  temp_v8 = *puVar14;
  if ((int)temp_v8 >= 1) {
    temp_v14 = *(float *)(temp_v0 + 0x5cec) * 0.4f;
    if ((temp_v8 & 1) != 0) {
      temp_v14 = -temp_v14;
    }
    *(int *)(temp_v0 + 0x5ce4) = (int)temp_v14;
    *(int *)(temp_v0 + 0x5ce8) = (int)temp_v14;
    temp_v15 = (float)VectorSignedToFloat(*(int *)(temp_v0 + 0x5cf8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = (float)VectorSignedToFloat(*(int *)(temp_v0 + 0x5cf8) - temp_v8,
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = ((temp_v14 * 1.5707964f) / temp_v15) * 40.743664f;
    FUN_002b70cc();
    *(float *)(temp_v0 + 0x5cec) = (1.0f - temp_v14) * *(float *)(temp_v0 + 0x5cf4);
    *puVar14 = *puVar14 - 1;
  }
  else {
    *(unsigned int *)(temp_v0 + 0x5ce4) = 0;
    *(unsigned int *)(temp_v0 + 0x5ce8) = 0;
  }
  return 0;
}
