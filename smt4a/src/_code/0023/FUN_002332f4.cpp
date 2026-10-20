/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002332f4` (_code @ 0x2332f4, 0xa20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aea28(...);
int FUN_00245f70(int);
int FUN_002749c8(unsigned int);
int FUN_00274a30(void);
int FUN_002941c8(...);
int FUN_002d1f40(int, int, int);
int FUN_002d8a48(void);
int FUN_00303460(...);
int FUN_00319f64(int);
int FUN_00398078(unsigned int);
int VectorSignedToFloat(unsigned int, int);

int FUN_00162e8c(void);
int FUN_002b5cb4(void);
int FUN_002b5cd4(void);
int FUN_002b63d0(void);
int FUN_00313648(int);
int FUN_0032714c(void);
int FUN_00352bc4(void);
int FUN_00352e54(...);
int FUN_00367fac(void);
int FUN_00368374(int);
int FUN_00377418(...);
int FUN_00384830(void);
int FUN_003ae6cc(void);
int FUN_003d4ed8(...);
int FUN_003fd63c(int, int);
int countersAddSaturating(...);

typedef int romwright_code(...);
/* stack frame of void: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
} void_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_00581038; /* 0x581038 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f161c; /* 0x5f161c */
extern int DAT_005f1638; /* 0x5f1638 */
extern int DAT_005f16a0; /* 0x5f16a0 */
extern signed char DAT_005f17ac; /* 0x5f17ac */
extern int DAT_005f17b0; /* 0x5f17b0 */
extern short DAT_005f17c2; /* 0x5f17c2 */
extern unsigned int DAT_005f17fc; /* 0x5f17fc */
extern signed char DAT_005f19d4; /* 0x5f19d4 */
extern float DAT_005f19d8; /* 0x5f19d8 */
extern short DAT_005f19e8; /* 0x5f19e8 */
extern unsigned char DAT_005f19eb; /* 0x5f19eb */
extern unsigned int DAT_005f19fc; /* 0x5f19fc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00162e8c. */
/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_00245f70. */
/* Supplied declaration required: FUN_002749c8. */
/* Supplied declaration required: FUN_00274a30. */
/* Supplied declaration required: FUN_002941c8. */
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: FUN_002b63d0. */
/* Supplied declaration required: FUN_002d1f40. */
/* Supplied declaration required: FUN_002d8a48. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: FUN_00319f64. */
extern int FUN_00325340(void);
/* Supplied declaration required: FUN_0032714c. */
/* Supplied declaration required: FUN_00352bc4. */
extern int FUN_00352ca0(int);
/* Supplied declaration required: FUN_00352e54. */
extern int FUN_00367f98(void);
/* Supplied declaration required: FUN_00367fac. */
/* Supplied declaration required: FUN_00368374. */
extern int FUN_00376fcc(int);
/* Supplied declaration required: FUN_00377418. */
/* Supplied declaration required: FUN_00384830. */
/* Supplied declaration required: FUN_00398078. */
/* Supplied declaration required: FUN_003ae6cc. */
/* Supplied declaration required: FUN_003d4ed8. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: countersAddSaturating. */
extern int FUN_004813bc(unsigned int);


unsigned int FUN_002332f4(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 28 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  unsigned long long temp_v14;
  float temp_v15;
  int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int *temp_v24;
  unsigned int *temp_v25;
  unsigned int temp_v26;
  
  temp_v7 = 0;
  temp_v6 = 0;
  temp_v26 = 0;
  temp_v25 = &DAT_005f19fc;
  temp_v15 = 800.0f;
  temp_v13 = 0x43a0000043480000;
  temp_v14 = 0x42700000;
  temp_v24 = &DAT_005f17fc;
  do {
    temp_v5 = DAT_00581038 + temp_v6 * 0x54;
    if (*(char *)(temp_v5 + 0x5c) != '\0') {
      switch(*(unsigned int *)(temp_v5 + 0x60)) {
      case 1:
        temp_v4 = *(int *)(temp_v5 + 0x68);
        FUN_002b5cb4();
        if (((temp_v4 < 0x43fa0001) &&
            (temp_v4 = FUN_00352ca0((int)(short)*(unsigned int *)(temp_v5 + 0x80)), temp_v4 == 0)) &&
           (temp_v4 = FUN_00376fcc((int)(short)*(unsigned int *)(temp_v5 + 0x80)), temp_v4 == 0)) {
          FUN_00377418((int)(short)*(unsigned int *)(temp_v5 + 0x80),1);
          FUN_003ae6cc();
        }
        temp_v16 = 0;
        FUN_00162e8c();
        temp_v1 = 0;
        if (DAT_005f17ac != '\0') {
          temp_v1 = DAT_005f17c2;
        }
        if (((DAT_005f17ac != '\0' && temp_v1 != 0) &&
            (temp_v1 = *(short *)(temp_v5 + 0xac), temp_v1 != 1 && temp_v1 != 2)) &&
           (temp_v1 != 3 && temp_v1 != 6)) {
          FUN_00352bc4();
          temp_v3 = *(unsigned int *)(temp_v5 + 0x74);
          FUN_002b5cd4();
          if ((temp_v3 < 0xc2b40000) && ((int)temp_v3 < 0x42b40000)) {
            temp_v16 = 1;
          }
          temp_v4 = DAT_005f17b0;
          FUN_002b5cb4();
          if (((temp_v4 < 0x43960000) && (temp_v4 = DAT_005f17b0, FUN_00384830(), temp_v4 < 0x428c0000))
             && (temp_v16 != 0)) {
            *(unsigned int *)(temp_v5 + 0x78) = 1;
            FUN_003d4ed8(0x10002a6);
            if (*(int *)(temp_v5 + 0xa8) != 0) {
              *(short *)(temp_v24 + 0x22) = (short)*(int *)(temp_v5 + 0xa8);
              FUN_002b63d0();
            }
            FUN_00352e54((int)(short)*(unsigned int *)(temp_v5 + 0x80),1);
            FUN_00377418((int)(short)*(unsigned int *)(temp_v5 + 0x80),0);
            FUN_003ae6cc();
            countersAddSaturating(0x17,1);
            *(unsigned char *)(temp_v5 + 0x7c) = 1;
            *(unsigned int *)(temp_v5 + 0x60) = 2;
            *(unsigned int *)(temp_v5 + 100) = 0;
            break;
          }
        }
        temp_v12 = 600.0f;
        temp_v10 = 210.0f;
        temp_v16 = 0;
        temp_v17 = FUN_00162e8c();
        temp_v1 = *(short *)(temp_v5 + 0xac);
        if (temp_v1 == 2) {
          temp_v10 = (float)temp_v13;
        }
        if (((DAT_005f161c == '\0') && (DAT_005f19d4 != '\0')) &&
           ((DAT_005f19e8 != 0 && ((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 6)))) {
          FUN_00352bc4();
          temp_v3 = *(unsigned int *)(temp_v5 + 0x74);
          FUN_002b5cd4();
          temp_v1 = *(short *)(temp_v5 + 0xac);
          if (((temp_v1 != 1 && temp_v1 != 6) && temp_v1 != 2) ||
             ((temp_v3 < 0xc2b40000 && ((int)temp_v3 < 0x42b40000)))) {
            temp_v16 = 1;
          }
          temp_v9 = DAT_005f19d8;
          FUN_002b5cb4();
          temp_v11 = *(float *)(temp_v17 + 0x1528);
          temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11 < temp_v9) << 0x1f) |
                  ((unsigned int)(temp_v11 == temp_v9) << 0x1e);
          in_fpscr = temp_v3 | ((unsigned int)((temp_v11 != temp_v11) || (temp_v9 != temp_v9)) << 0x1c);
          temp_v0 = (unsigned char)(temp_v3 >> 0x18);
          if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
            temp_v11 = DAT_005f19d8;
            FUN_00384830();
            temp_v4 = FUN_00367f98();
            if (temp_v4 != 3) {
              temp_v4 = FUN_00367f98();
              if (((temp_v4 == 6) &&
                  (temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v15 < temp_v9) << 0x1f) |
                           ((unsigned int)(temp_v15 == temp_v9) << 0x1e),
                  in_fpscr = temp_v3 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v9 != temp_v9)) << 0x1c),
                  temp_v0 = (unsigned char)(temp_v3 >> 0x18),
                  !(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1))) &&
                 ((int)temp_v11 < 0x42a00000)) {
                FUN_00367fac();
                if (temp_v11 != 0.0f) {
                  FUN_0032714c();
                }
              }
            }
            else {
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 <= temp_v9) << 0x1d);
              if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && ((int)temp_v11 < 0x428c0000)) {
                FUN_00367fac();
                if (temp_v11 != 0.0f) {
                  FUN_0032714c();
                }
              }
            }
            temp_v12 = DAT_005f19d8;
            FUN_00384830();
            if (*(int *)(g_lmapScene + 0x1d0) == 10) {
              temp_v4 = FUN_00325340();
              if (temp_v4 != 0) {
                temp_v9 = *(float *)(g_lmapScene + 0x1c);
                FUN_002b5cb4();
                temp_v10 = DAT_005f19d8;
                FUN_002b5cb4();
                temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 < temp_v10) << 0x1f) |
                        ((unsigned int)(temp_v9 == temp_v10) << 0x1e);
                in_fpscr = temp_v3 | ((unsigned int)((temp_v9 != temp_v9) || (temp_v10 != temp_v10)) << 0x1c);
                temp_v0 = (unsigned char)(temp_v3 >> 0x18);
                if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v9 = temp_v10;
                }
              }
              temp_v10 = (float)((unsigned long long)temp_v13 >> 0x20);
            }
            temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < temp_v9) << 0x1f) |
                    ((unsigned int)(temp_v10 == temp_v9) << 0x1e);
            in_fpscr = temp_v3 | ((unsigned int)((temp_v10 != temp_v10) || (temp_v9 != temp_v9)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v3 >> 0x18);
            if (((!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) &&
                ((int)temp_v12 < 0x428c0000)) && (temp_v16 != 0)) {
              if (*(short *)(temp_v5 + 0xac) != 2) {
                FUN_003fd63c(0x48d,1);
              }
              temp_v4 = FUN_00367f98();
              if (temp_v4 != 10) {
                FUN_00368374(5);
                if ((*(short *)(temp_v5 + 0xac) == 2) &&
                   (DAT_005f1614 = 1, *(char *)(temp_v25 + 0x36) == '\0')) {
                  FUN_00313648(2);
                }
                *(unsigned int *)(temp_v5 + 0x60) = 6;
                *(unsigned short *)(temp_v5 + 0xae) = 0;
                break;
              }
              *(unsigned short *)(temp_v5 + 0xae) = 0;
              *(unsigned int *)(temp_v5 + 0x60) = 6;
            }
          }
        }
        FUN_00162e8c();
        if (*(short *)(temp_v5 + 0xac) == 3) {
          if (*(char *)((int)temp_v25 + 0x53) != '\0') {
            FUN_00352bc4();
            temp_v4 = DAT_005f17b0;
            FUN_002b5cb4();
            if ((temp_v4 < 0x43960000) && (temp_v4 = DAT_005f17b0, FUN_00384830(), temp_v4 < 0x428c0000))
            {
              *(unsigned int *)(temp_v5 + 0x78) = 1;
              FUN_003d4ed8(0x10002a6);
              FUN_00352e54((int)(short)*(unsigned int *)(temp_v5 + 0x80),1);
              FUN_00377418((int)(short)*(unsigned int *)(temp_v5 + 0x80),0);
              FUN_003ae6cc();
              countersAddSaturating(0x17,1);
              *(unsigned char *)(temp_v5 + 0x7c) = 1;
              *(unsigned int *)(temp_v5 + 0x60) = 2;
              *(unsigned int *)(temp_v5 + 100) = 0;
              FUN_00398078(*(unsigned int *)(temp_v5 + 0x80));
              FUN_002749c8(*(unsigned int *)(temp_v5 + 0x80));
              if (*(int *)(temp_v5 + 0xa8) != 0) {
                *(short *)(temp_v24 + 0x22) = (short)*(int *)(temp_v5 + 0xa8);
                FUN_002b63d0();
              }
            }
            else if (*(short *)(temp_v5 + 0xac) == 3) goto LAB_00233a04;
          }
          else {
LAB_00233a04:
            if (DAT_005f1638 == 0x35 || DAT_005f1638 == 0x4d) {
              if (*(int *)(DAT_00581038 + 0x18) != DAT_005f16a0) {
                FUN_002d8a48();
                *(int *)(DAT_00581038 + 0x18) = DAT_005f16a0;
              }
              else {
                FUN_00245f70(DAT_005f16a0);
              }
              temp_v7 = temp_v7 + 1;
            }
          }
        }
        break;
      case 2:
        temp_v4 = *(int *)(temp_v5 + 100) + 1;
        *(int *)(temp_v5 + 100) = temp_v4;
        if (temp_v4 == 2) {
          FUN_002d1f40(0xf,0x1e,1);
        }
        if (*(int *)(temp_v5 + 100) == 0xf) {
          FUN_00319f64((int)(short)*(unsigned int *)(temp_v5 + 0x94));
        }
        temp_v4 = (int)*(short *)(temp_v5 + 0xac);
        temp_v10 = (float)temp_v14;
        temp_v12 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v5 + 100),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        if ((temp_v4 == 1 || temp_v4 == 2) || temp_v4 == 6) {
          temp_v10 = 20.0f;
        }
        temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < temp_v10) << 0x1f);
        in_fpscr = temp_v3 | ((unsigned int)((temp_v12 != temp_v12) || (temp_v10 != temp_v10)) << 0x1c);
        if ((unsigned char)(temp_v3 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          if (*(char *)(temp_v5 + 0x84) != '\0') {
            if (*(int *)(temp_v5 + 0x88) != 0) {
              FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(temp_v5 + 0x88) + 4));
              temp_v2 = 4;
              *(unsigned char *)(temp_v5 + 0x8c) = 0;
              *(unsigned int *)(temp_v5 + 0x60) = temp_v2;
            }
          }
          else {
            temp_v4 = *(int *)(*(int *)(DAT_00581038 + *(int *)(temp_v5 + 0x90) * 0x20 + temp_v4 * 4 +
                                     0x20) + 4);
            *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) | 3;
            *(unsigned int *)(temp_v5 + 0x60) = 3;
          }
        }
        break;
      case 4:
        temp_v2 = 5;
        *(unsigned int *)(temp_v5 + 0x60) = temp_v2;
        break;
      case 5:
        if (*(int **)(temp_v5 + 0x88) != (int *)0x0) {
          (**(romwright_code **)(**(int **)(temp_v5 + 0x88) + 4))();
          *(unsigned int *)(temp_v5 + 0x88) = 0;
        }
        *(char *)(temp_v5 + 0x5c) = '\0';
        *(unsigned int *)(temp_v5 + 0x60) = 0;
        break;
      case 6:
        if (*(short *)(temp_v5 + 0xac) == 2) {
          *(unsigned char *)(g_lmapScene + 0x6c) = 0;
          DAT_005f1614 = 1;
          DAT_005f19eb = 1;
        }
        temp_v1 = *(short *)(temp_v5 + 0xae) + 1;
        temp_v3 = (unsigned int)temp_v1;
        temp_v8 = temp_v3 == 2;
        *(short *)(temp_v5 + 0xae) = temp_v1;
        if (temp_v8) {
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v5 + 0xac);
        }
        if (temp_v8 && temp_v3 == 2) {
          DAT_005f19eb = 1;
          FUN_00303460(0x1f);
        }
        if (*(short *)(temp_v5 + 0xae) >= 0x28) {
          *(unsigned int *)(temp_v5 + 0x78) = 1;
          FUN_003d4ed8(0x10002a8);
          FUN_00352e54((int)(short)*(unsigned int *)(temp_v5 + 0x80),1);
          FUN_00377418((int)(short)*(unsigned int *)(temp_v5 + 0x80),0);
          FUN_003ae6cc();
          countersAddSaturating(0x17,1);
          countersAddSaturating(0x18,1);
          *(unsigned char *)(temp_v5 + 0x7c) = 1;
          *(unsigned int *)(temp_v5 + 0x60) = 2;
          *(unsigned int *)(temp_v5 + 100) = 0;
          if (*(int *)(temp_v5 + 0xa8) != 0) {
            *(short *)(temp_v24 + 0x22) = (short)*(int *)(temp_v5 + 0xa8);
            FUN_002b63d0();
          }
          if (*(short *)(temp_v5 + 0xac) == 2) {
            temp_v18 = *(unsigned int *)(temp_v5 + 0x98);
            temp_v19 = *(unsigned int *)(temp_v5 + 0x9c);
            if ((*(int *)(temp_v5 + 0x98) == 0x7c6) && (*(int *)(temp_v5 + 0xa0) < 1)) {
              *(unsigned int *)(temp_v5 + 0xa0) = 1;
            }
            if ((*(int *)(temp_v5 + 0x9c) == 0x7c6) && (*(int *)(temp_v5 + 0xa4) < 1)) {
              *(unsigned int *)(temp_v5 + 0xa4) = 1;
            }
            temp_v20 = *(unsigned int *)(temp_v5 + 0xa0);
            temp_v21 = *(unsigned int *)(temp_v5 + 0xa4);
            temp_v4 = FUN_004813bc(*(unsigned int *)(temp_v5 + 0x98));
            temp_v22 = (unsigned int)(temp_v4 == 0);
            temp_v4 = FUN_004813bc(*(unsigned int *)(temp_v5 + 0x9c));
            if (temp_v4 != 0) {
              temp_v22 = 0;
            }
            temp_v16 = 3;
            if (temp_v4 == 0) {
              temp_v23 = 1;
            }
            DAT_005f1614 = 1;
            DAT_005f19eb = 1;
            FUN_002941c8(&temp_v16,0x84);
          }
          *(unsigned short *)(temp_v5 + 0xae) = 0;
        }
      }
    }
    temp_v6 = temp_v6 + 1;
    if (temp_v6 >= 0x10) {
      if (temp_v7 < 1) {
        FUN_00274a30();
      }
      return temp_v26;
    }
  } while( 1 );
}

} /* extern "C" */
