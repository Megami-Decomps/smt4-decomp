/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024e31c` (_code @ 0x24e31c, 0x8c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00162790(...);
int FUN_001634b4(int);
int FUN_00164034(...);
int FUN_00164b5c(...);
int FUN_001677c0(void);
int FUN_00168770(void);
int FUN_00168e00(...);
int FUN_0016c410(...);
int FUN_0016c4b8(...);
int FUN_0016c560(...);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00184c40(int, int, int);
int FUN_001879d0(...);
int FUN_0019d880(void);
int FUN_002a6c3c(...);
int FUN_002fb5c4(int);
int FUN_003210bc(int, int);
int FUN_003217d0(int);
int FUN_003a9f7c(int);
int FUN_003f931c(unsigned int);
int FUN_004aaabc(...);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern unsigned char LAB_0024e7b4; /* 0x24e7b4 */
extern unsigned char LAB_0024e7e0; /* 0x24e7e0 */
extern signed char DAT_0057a9b8; /* 0x57a9b8 */
extern int DAT_0057a9c8; /* 0x57a9c8 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_00164034. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00168770. */
/* Supplied declaration required: FUN_00168e00. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_0018206c(unsigned int, int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00184c40. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_0019d880. */
/* Supplied declaration required: FUN_002a6c3c. */
/* Supplied declaration required: FUN_002fb5c4. */
/* Supplied declaration required: FUN_003210bc. */
/* Supplied declaration required: FUN_003217d0. */
/* Supplied declaration required: FUN_003a9f7c. */
/* Supplied declaration required: FUN_003f931c. */
/* Supplied declaration required: FUN_004aaabc. */


unsigned int FUN_0024e31c(void)

{
/* irregular: irregular input(s): in_fpscr; 23 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  unsigned long long temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  
  temp_v1 = DAT_0057a9c8;
  if (DAT_0057a9c8 != 0) {
    temp_v5 = 0;
    temp_v6 = temp_v5;
    do {
      temp_v2 = FUN_0018206c(0xc,temp_v5);
      if (temp_v2 != 0) {
        temp_v6 = temp_v6 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 6);
    temp_v5 = 0;
    do {
      temp_v2 = FUN_0018206c(0xd,temp_v5);
      if (temp_v2 != 0) {
        temp_v6 = temp_v6 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 5);
    if (temp_v6 >= 11) {
      FUN_00157558(DAT_0059dbb4);
      temp_v6 = DAT_0059dbb4;
      temp_v5 = FUN_001692ac(1,0);
      piVar6 = (int *)(temp_v6 + 0x1258);
      temp_v2 = *piVar6;
      temp_v3 = piVar6[temp_v2 + 2];
      *piVar6 = temp_v2 + 1;
      piVar6[temp_v2 + 3] = temp_v5;
      if (*(char *)(temp_v6 + 0x1270) != '\0' || temp_v3 != temp_v5) {
        (**(romwright_code **)(temp_v6 + 0x1274))();
        *(unsigned char *)(temp_v6 + 0x1270) = 0;
      }
      FUN_003210bc(temp_v1,1);
      temp_v7 = 0.8f;
      FUN_001879d0(DAT_0059dbb4);
      temp_v8 = (unsigned long long)(unsigned int)(int)temp_v7;
      temp_v6 = 0;
      do {
        temp_v5 = temp_v1 + temp_v6 * 0x14c;
        if (*(short *)(temp_v5 + 0x11a2c) != 0) {
          FUN_00184c40(temp_v5 + 0x11914,(int)(short)(int)*(float *)(temp_v5 + 0x11a38),
                       (int)(short)(int)*(float *)(temp_v5 + 0x11a3c));
          VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001634b4(temp_v5 + 0x11914);
          temp_v2 = DAT_0059dbb4;
          if (*(char *)(temp_v5 + 0x11a25) != '\0') {
            temp_v3 = FUN_00169294(6,1,0);
            piVar6 = (int *)(temp_v2 + 0x12b8);
            temp_v4 = piVar6[*piVar6 + 2];
            piVar6[*piVar6 + 2] = temp_v3;
            if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
              (**(romwright_code **)(temp_v2 + 0x12d4))();
              *(unsigned char *)(temp_v2 + 0x12d0) = 0;
            }
            temp_v2 = temp_v5 + 0x119a0;
            FUN_00184c40(temp_v2,(int)(short)(int)*(float *)(temp_v5 + 0x11a38),
                         (int)(short)(int)*(float *)(temp_v5 + 0x11a3c));
            *(unsigned int *)(temp_v5 + 0x119d0) = *(unsigned int *)(temp_v5 + 0x11a30);
            VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001634b4(temp_v2);
            VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001634b4(temp_v2);
            temp_v5 = DAT_0059dbb4;
            temp_v2 = FUN_00169294(6,7,0);
            piVar6 = (int *)(temp_v5 + 0x12b8);
            temp_v3 = piVar6[*piVar6 + 2];
            piVar6[*piVar6 + 2] = temp_v2;
            if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
              (**(romwright_code **)(temp_v5 + 0x12d4))(temp_v2);
              *(unsigned char *)(temp_v5 + 0x12d0) = 0;
            }
          }
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0xc);
      FUN_003a9f7c(temp_v1 + 8);
      FUN_003217d0(temp_v1 + 0x24bc);
      FUN_002fb5c4(temp_v1 + 8);
      FUN_003f931c(*(unsigned int *)(temp_v1 + 0x7488));
      if (*(char *)(temp_v1 + 0x74b3) != '\0') {
        FUN_001677c0();
        FUN_001835b4(2,8,0x106,0,0,0x65);
        FUN_001677c0();
      }
      temp_v9 = 0;
      if (DAT_0057a9b8 != '\0') {
        FUN_00162790(3,0xffffffff,&LAB_0024e7b4);
        FUN_00162790(3,0xffffffff,&LAB_0024e7e0);
      }
      if (*(int *)(temp_v1 + 0x74a0) != 6) {
        if ((*(int *)(temp_v1 + 0x74a0) == 0x13) &&
           (*(int *)(temp_v1 + 0x12fd0) != 0 && *(int *)(temp_v1 + 0x12fd0) != 8)) {
          FUN_0016c4b8(DAT_0059dbb4,0);
          temp_v13 = *(unsigned int *)(temp_v1 + 0x13014);
          temp_v10 = temp_v9;
          temp_v11 = temp_v9;
          temp_v12 = temp_v9;
          FUN_00164034(&temp_v10);
          temp_v6 = DAT_0059dbb4;
          temp_v0 = 0;
          if (*(int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1318) * 4 + 0x1320) == 3) {
            temp_v5 = DAT_0059dbb4 + 0x1318 + *(int *)(DAT_0059dbb4 + 0x1318) * 4;
            temp_v2 = *(int *)(temp_v5 + 8);
            *(unsigned int *)(temp_v5 + 8) = 0;
            if (*(char *)(temp_v6 + 0x1330) != '\0' || temp_v2 != 0) {
              (**(romwright_code **)(temp_v6 + 0x1334))();
              *(unsigned char *)(temp_v6 + 0x1330) = 0;
            }
            temp_v0 = 1;
          }
          FUN_0019d880();
          temp_v7 = 0.29f;
          FUN_001879d0(DAT_0059dbb4);
          temp_v4 = (int)temp_v7;
          temp_v6 = FUN_001834a4(0xd,0xbd0);
          FUN_00164b5c(2,0xd,0x10,temp_v4,*(unsigned int *)(temp_v1 + 0x12fdc),0x15);
          temp_v5 = *(int *)(temp_v1 + 0x12fec);
          temp_v3 = *(int *)(temp_v1 + 0x12fd8);
          temp_v2 = *(int *)(temp_v1 + 0x12ff0) + *(int *)(temp_v1 + 0x12fdc);
          FUN_00168e00(*(short *)(temp_v6 + 8) + temp_v4,(int)*(short *)(temp_v6 + 10),
                       *(unsigned short *)(temp_v6 + 4) & 0x7fff,*(unsigned short *)(temp_v6 + 6) & 0x7fff);
          FUN_002a6c3c(0xffffffff,temp_v3 + temp_v5 + temp_v4,temp_v2,0x18,1);
          FUN_00168770();
          temp_v9 = *(unsigned int *)(temp_v1 + 0x12fdc);
          FUN_001677c0();
          temp_v6 = DAT_0059dbb4;
          temp_v5 = FUN_00169294(6,1,0);
          piVar6 = (int *)(temp_v6 + 0x12b8);
          temp_v2 = piVar6[*piVar6 + 2];
          piVar6[*piVar6 + 2] = temp_v5;
          if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v2 != temp_v5) {
            (**(romwright_code **)(temp_v6 + 0x12d4))();
            *(unsigned char *)(temp_v6 + 0x12d0) = 0;
          }
          FUN_00164b5c(2,0xd,0x11,temp_v4,temp_v9,0x1a);
          temp_v6 = DAT_0059dbb4;
          temp_v5 = FUN_00169294(6,7,0);
          piVar6 = (int *)(temp_v6 + 0x12b8);
          temp_v2 = piVar6[*piVar6 + 2];
          piVar6[*piVar6 + 2] = temp_v5;
          if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v2 != temp_v5) {
            (**(romwright_code **)(temp_v6 + 0x12d4))();
            *(unsigned char *)(temp_v6 + 0x12d0) = 0;
          }
          FUN_001677c0();
          temp_v6 = FUN_001834a4(0xd,0xbe2);
          FUN_00164b5c(2,0xd,0x12,temp_v4,*(unsigned int *)(temp_v1 + 0x12ff8),0x15);
          temp_v5 = *(int *)(temp_v1 + 0x13008) + *(int *)(temp_v1 + 0x12ff4) + temp_v4;
          temp_v14 = *(int *)(temp_v1 + 0x1300c) + *(int *)(temp_v1 + 0x12ff8);
          FUN_00168e00(*(short *)(temp_v6 + 8) + temp_v4,(int)*(short *)(temp_v6 + 10),
                       *(unsigned short *)(temp_v6 + 4) & 0x7fff,*(unsigned short *)(temp_v6 + 6) & 0x7fff);
          FUN_002a6c3c(0x29d,temp_v5,temp_v14,0x18,1);
          FUN_00168770();
          temp_v9 = *(unsigned int *)(temp_v1 + 0x12ff8);
          FUN_001677c0();
          temp_v1 = DAT_0059dbb4;
          temp_v6 = FUN_00169294(6,1,0);
          piVar6 = (int *)(temp_v1 + 0x12b8);
          temp_v5 = piVar6[*piVar6 + 2];
          piVar6[*piVar6 + 2] = temp_v6;
          if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
            (**(romwright_code **)(temp_v1 + 0x12d4))();
            *(unsigned char *)(temp_v1 + 0x12d0) = 0;
          }
          FUN_00164b5c(2,0xd,0x13,temp_v4,temp_v9,0x1a);
          temp_v1 = DAT_0059dbb4;
          temp_v6 = FUN_00169294(6,7,0);
          piVar6 = (int *)(temp_v1 + 0x12b8);
          temp_v5 = piVar6[*piVar6 + 2];
          piVar6[*piVar6 + 2] = temp_v6;
          if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
            (**(romwright_code **)(temp_v1 + 0x12d4))();
            *(unsigned char *)(temp_v1 + 0x12d0) = 0;
          }
          FUN_001677c0();
          temp_v1 = DAT_0059dbb4;
          if (temp_v0) {
            piVar6 = (int *)(DAT_0059dbb4 + 0x1318);
            temp_v6 = piVar6[*piVar6 + 2];
            piVar6[*piVar6 + 2] = 3;
            if (*(char *)(temp_v1 + 0x1330) != '\0' || temp_v6 != 3) {
              (**(romwright_code **)(temp_v1 + 0x1334))();
              *(unsigned char *)(temp_v1 + 0x1330) = 0;
            }
          }
          FUN_001677c0();
        }
      }
      else {
        temp_v6 = 0;
        temp_v5 = *(int *)(temp_v1 + 0x128a8);
        if (0 < temp_v5) {
          do {
            FUN_004aaabc(temp_v1,temp_v6,temp_v1 + temp_v6 * 0xc + 0x12f3c,temp_v5);
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < temp_v5);
        }
      }
      temp_v1 = DAT_0059dbb4;
      piVar6 = (int *)(DAT_0059dbb4 + 0x1258);
      temp_v6 = *piVar6;
      temp_v5 = piVar6[temp_v6 + 2];
      *piVar6 = temp_v6 - 1;
      if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v5 != piVar6[temp_v6 + 1]) {
        (**(romwright_code **)(temp_v1 + 0x1274))();
        *(unsigned char *)(temp_v1 + 0x1270) = 0;
      }
      temp_v1 = DAT_0059dbb4;
      temp_v6 = FUN_00169294(6,7,0);
      piVar6 = (int *)(temp_v1 + 0x12b8);
      temp_v5 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = temp_v6;
      if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
      FUN_0016c560(DAT_0059dbb4);
      FUN_0016c410(DAT_0059dbb4);
      return 0;
    }
  }
  return 0;
}

} /* extern "C" */
