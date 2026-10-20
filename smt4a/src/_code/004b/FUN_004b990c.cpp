/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b990c` (_code @ 0x4b990c, 0x6c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int asdOperatorNew(void);
int FUN_00169ddc(...);
int FUN_001f4e20(...);
int FUN_0020401c(...);
int FUN_002a49e4(...);
int FUN_002e5924(...);
int FUN_0035c6ac(void);
int FUN_004072b0(...);
int FUN_00407360(...);
int FUN_00407424(...);
int FUN_0040792c(...);
int FUN_00407978(void);
int FUN_00407ab0(...);
int FUN_00407eb0(...);
int FUN_004080bc(...);
int FUN_004bb170(void);
int FUN_004bb184(...);

int asdMemFree(void);
int FUN_0019f548(unsigned int);
int FUN_001ad9b4(void);
int FUN_001f4908(int, int, int);
int FUN_00203d04(int);
int FUN_00214da4(void);
int FUN_00261a14(...);
int campGetState(void);
int FUN_00284f90(...);
int FUN_002c2160(int);
int FUN_002c3398(int);
int FUN_002e3328(int);
int FUN_002e342c(unsigned char *, unsigned int);
int FUN_0033099c(void);
int FUN_003491e8(void);
int FUN_00357ad8(void);
int FUN_0035b1c0(void);
int FUN_00363c58(int);
int FUN_00368390(void);
int FUN_003b5064(void);
int FUN_003b61ec(void);
int FUN_003c91e8(void);
int FUN_003d54f8(int, int);
int FUN_004b6bc4(int, int, unsigned int);
int FUN_004b75d0(void);
int FUN_004b7d88(int);
int FUN_004ba66c(int);
int FUN_004ba83c(int, int);
int FUN_004bad28(int);
int FUN_004bb020(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern unsigned char LAB_004b9fdc; /* 0x4b9fdc */
extern unsigned char LAB_004b9fe4; /* 0x4b9fe4 */
extern signed char DAT_005f1634; /* 0x5f1634 */
extern unsigned short DAT_005f1794; /* 0x5f1794 */
extern unsigned short DAT_005f1796; /* 0x5f1796 */
extern unsigned char DAT_005f1798; /* 0x5f1798 */
extern unsigned short DAT_005f17a8; /* 0x5f17a8 */
extern unsigned short DAT_005f17aa; /* 0x5f17aa */
extern int DAT_005f1c98; /* 0x5f1c98 */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_0014af84(void);
extern int FUN_0015a21c(int);
/* Supplied declaration required: asdOperatorNew. */
extern int FUN_00162858(void);
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_00169ddc. */
extern int FUN_0018719c(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019f548. */
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_001f4908. */
extern int FUN_001f4bb0(void);
/* Supplied declaration required: FUN_001f4e20. */
/* Supplied declaration required: FUN_00203d04. */
/* Supplied declaration required: FUN_0020401c. */
/* Supplied declaration required: FUN_00214da4. */
/* Supplied declaration required: FUN_00261a14. */
extern int FUN_002802c8(void);
/* Supplied declaration required: campGetState. */
/* Supplied declaration required: FUN_00284f90. */
/* Supplied declaration required: FUN_002a49e4. */
/* Supplied declaration required: FUN_002c2160. */
/* Supplied declaration required: FUN_002c3398. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: FUN_0033099c. */
/* Supplied declaration required: FUN_003491e8. */
/* Supplied declaration required: FUN_00357ad8. */
/* Supplied declaration required: FUN_0035b1c0. */
/* Supplied declaration required: FUN_0035c6ac. */
/* Supplied declaration required: FUN_00363c58. */
/* Supplied declaration required: FUN_00368390. */
/* Supplied declaration required: FUN_003b5064. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_003c91e8. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_004072b0. */
/* Supplied declaration required: FUN_00407360. */
/* Supplied declaration required: FUN_00407424. */
/* Supplied declaration required: FUN_0040792c. */
/* Supplied declaration required: FUN_00407978. */
/* Supplied declaration required: FUN_00407ab0. */
/* Supplied declaration required: FUN_00407eb0. */
/* Supplied declaration required: FUN_004080bc. */
/* Supplied declaration required: FUN_004b6bc4. */
/* Supplied declaration required: FUN_004b75d0. */
/* Supplied declaration required: FUN_004b7d88. */
/* Supplied declaration required: FUN_004ba66c. */
extern int FUN_004ba698(int);
extern int FUN_004ba790(int);
/* Supplied declaration required: FUN_004ba83c. */
/* Supplied declaration required: FUN_004bad28. */
/* Supplied declaration required: FUN_004bb020. */
/* Supplied declaration required: FUN_004bb170. */
/* Supplied declaration required: FUN_004bb184. */
extern unsigned short FUN_004cfe4c(int);


void FUN_004b990c(int param_1)

{
/* irregular: 48 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  char *pcVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char *puVar7;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int *piVar11;
  unsigned char *puVar12;
  unsigned char temp_v8;
  unsigned char temp_v9 [128];
  unsigned char temp_v10 [128];
  unsigned char temp_v11 [4];
  
  FUN_004b75d0();
  switch(*(unsigned int *)(param_1 + 0x2c)) {
  case 0:
    FUN_00284f90(0);
    FUN_00261a14(0);
    FUN_0033099c();
    FUN_002c2160(1);
    if ((*(unsigned int *)(param_1 + 0x20) & 0x40) != 0) {
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffbf;
      FUN_003491e8();
    }
    *(unsigned char *)(param_1 + 0x1168) = 0;
    temp_v6 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = temp_v6;
    break;
  case 1:
    FUN_00203d04(0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    *(unsigned int *)(param_1 + 0x30) = 0;
    FUN_0035b1c0();
    if (*(char *)(param_1 + 0x1214) != '\0') {
      FUN_0019f548(*(unsigned int *)(param_1 + 0x1218));
      if (*(int *)(param_1 + 0x1218) != 0) {
        FUN_002e3328(*(int *)(param_1 + 0x1218));
      }
      *(unsigned int *)(param_1 + 0x1218) = 0;
      temp_v6 = 0;
      do {
        temp_v4 = param_1 + temp_v6 * 4;
        if (*(int *)(temp_v4 + 0x121c) != 0) {
          asdMemFree();
          *(unsigned int *)(temp_v4 + 0x121c) = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 10);
    }
    FUN_00214da4();
    return;
  case 2:
    temp_v6 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = temp_v6;
    if (temp_v6 < 10) {
      return;
    }
    FUN_004ba66c(param_1 + 0x9c);
    FUN_002c3398(0);
    *(unsigned char *)(param_1 + 0xa88) = 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  case 3:
    temp_v6 = FUN_001f4bb0();
    if ((temp_v6 != 0) || (temp_v6 = FUN_00162858(), temp_v6 == 0)) {
      if (DAT_005f1634 == '\0') {
        FUN_001f4908(1,10,0xff);
      }
      temp_v6 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v6;
    }
    break;
  case 4:
    temp_v6 = FUN_00162858();
    if (temp_v6 != 0) {
      return;
    }
    temp_v6 = FUN_002802c8();
    if (temp_v6 != 0) {
      return;
    }
    pcVar4 = (char *)campGetState();
    if (pcVar4[4] != '\0') {
      if (pcVar4[1] != '\0') {
        temp_v3 = (unsigned int)*(unsigned short *)(pcVar4 + 8);
        FUN_001ad9b4();
        DAT_005f1796 = *(unsigned short *)(temp_v3 + 2);
        FUN_002e342c(&DAT_005f1798,temp_v3 + 0xc4);
        DAT_005f1794 = 1;
      }
      else if (pcVar4[3] != '\0') {
        DAT_005f17aa = 1;
      }
      temp_v6 = FUN_00162e8c();
      *(unsigned short *)(temp_v6 + 0x22) = 0;
      FUN_00368390();
      FUN_00357ad8();
      if (pcVar4[2] != '\0') {
        DAT_005f17a8 = 1;
      }
      if (*pcVar4 != '\0') {
        *(unsigned char *)(param_1 + 0x1168) = 1;
      }
      else {
        temp_v6 = FUN_00162e8c();
        *(unsigned short *)(temp_v6 + 0x1e) = *(unsigned short *)(pcVar4 + 6);
      }
    }
    if (DAT_005f1634 == '\0') {
      temp_v6 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v6;
      break;
    }
    FUN_003c91e8();
    FUN_00363c58(1);
    FUN_002c2160(0);
    temp_v6 = FUN_0014af84();
    if (*(unsigned char *)(temp_v6 + 2) >= 2) {
      if (*(unsigned char *)(temp_v6 + 2) == 2) {
        *(unsigned char *)(param_1 + 0x4b) = 1;
      }
    }
    else {
      FUN_003b5064();
      if (DAT_005f1c98 >= 200) {
        *(unsigned char *)(param_1 + 0x4a) = 1;
      }
      else if (DAT_005f1c98 >= 100) {
        *(unsigned char *)(param_1 + 0x48) = 1;
      }
      else {
        *(unsigned char *)(param_1 + 0x49) = 1;
      }
    }
    temp_v6 = 8;
    *(int *)(param_1 + 0x2c) = temp_v6;
    break;
  case 5:
    temp_v6 = campGetState();
    if (*(char *)(temp_v6 + 4) != '\0') {
      temp_v6 = FUN_004ba790(param_1 + 0x9c);
      temp_v0 = *(unsigned char *)(temp_v6 + 0x20);
      FUN_004b6bc4(param_1,(int)*(short *)(param_1 + 0x3c),*(unsigned int *)(param_1 + 0x1120));
      FUN_004ba83c(param_1 + 0x9c,temp_v0);
      temp_v2 = FUN_004cfe4c(param_1 + 0x9c);
      *(unsigned short *)(param_1 + 0x4c) = temp_v2;
    }
    FUN_002c2160(0);
    FUN_003b61ec();
    FUN_004bb020(param_1 + 0x9c);
    FUN_004bad28(param_1 + 0x9c);
    *(unsigned char *)(param_1 + 0xa88) = 0;
    FUN_004b7d88(param_1);
    temp_v6 = campGetState();
    temp_v1 = *(char *)(temp_v6 + 10);
    temp_v8 = temp_v1 == '\0';
    if (temp_v8) {
      temp_v1 = *(char *)(param_1 + 0x1168);
    }
    if (temp_v8 && temp_v1 == '\0') {
      FUN_003d54f8(1,10);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (*(char *)(param_1 + 0x1214) != '\0') {
      temp_v4 = 0x7a0;
      asdOperatorNew();
      temp_v6 = 0;
      if (temp_v4 != 0) {
        temp_v6 = FUN_0015a21c(temp_v4 + 0x4f0);
        temp_v6 = temp_v6 - 0x4f0;
      }
      *(int *)(param_1 + 0x1218) = temp_v6;
      FUN_00407978();
      FUN_00100388(temp_v9,&LAB_004b9fdc,"mikado/",*(int *)(param_1 + 0x1118) + 0x40);
      if (((*(short *)(*(int *)(param_1 + 0x1118) + 100) != 0) &&
          (temp_v6 = FUN_0018719c(), temp_v6 != 0)) ||
         ((*(short *)(*(int *)(param_1 + 0x1118) + 0x66) != 0 &&
          (temp_v6 = FUN_0018719c(), temp_v6 != 0)))) {
        FUN_00100388(temp_v10,&LAB_004b9fdc,"mikado/",*(int *)(param_1 + 0x1118) + 0x68);
        FUN_00407ab0(*(unsigned int *)(param_1 + 0x1218),temp_v9,temp_v10);
      }
      else {
        FUN_00407ab0(*(unsigned int *)(param_1 + 0x1218),temp_v9,0);
      }
      temp_v6 = FUN_004ba790(param_1 + 0x9c);
      FUN_004080bc(*(unsigned int *)(param_1 + 0x1218),0,0xffffffff);
      FUN_00407eb0(*(unsigned int *)(param_1 + 0x1218),(int)*(short *)(temp_v6 + 0x28),1);
      if (-1 < *(int *)(*(int *)(param_1 + 0x1118) + 0x60)) {
        puVar12 = temp_v11;
        FUN_004bb170();
        if (puVar12 != (unsigned char *)0x0) {
          temp_v4 = 0;
          puVar7 = temp_v11;
          FUN_004bb184(puVar7,*(unsigned int *)(*(int *)(param_1 + 0x1118) + 0x60));
          if (0 < (int)puVar7) {
            do {
              FUN_00100388(temp_v9,&LAB_004b9fe4,"mikado/",puVar12);
              FUN_004072b0(*(unsigned int *)(param_1 + 0x1218),temp_v9,temp_v4);
              puVar12 = puVar12 + 0x20;
              temp_v4 = temp_v4 + 1;
              puVar7 = temp_v11;
              FUN_004bb184(puVar7,*(unsigned int *)(*(int *)(param_1 + 0x1118) + 0x60));
            } while (temp_v4 < (int)puVar7);
          }
          FUN_0040792c(*(unsigned int *)(param_1 + 0x1218),(int)*(char *)(temp_v6 + 0x2b));
        }
      }
      if ((!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) ||
         (!(*(short *)(temp_v6 + 0x28) == 0 || *(short *)(temp_v6 + 0x28) == 6))) {
        FUN_00407424(*(unsigned int *)(param_1 + 0x1218),0);
        temp_v5 = *(unsigned int *)(param_1 + 0x1218);
        temp_v7 = 1;
      }
      else {
        FUN_00407424(*(unsigned int *)(param_1 + 0x1218),1);
        temp_v5 = *(unsigned int *)(param_1 + 0x1218);
        temp_v7 = 0;
      }
      FUN_00407360(temp_v5,temp_v7);
    }
    if (*(char *)(param_1 + 0x1168) == '\0') {
      FUN_001f4e20(0);
      FUN_002a49e4(*(unsigned int *)(param_1 + 0x113c),
                   *(unsigned char *)(*(int *)(param_1 + 0x1118) + 0x3f));
      FUN_0020401c(*(int *)(param_1 + 0x1118) + 2);
      FUN_00284f90(1);
      FUN_00261a14(1);
      return;
    }
    break;
  case 6:
    temp_v6 = FUN_004ba698(param_1 + 0x9c);
    if ((temp_v6 != 0) && (temp_v6 = FUN_002802c8(), temp_v6 == 0)) {
      if (*(char *)(param_1 + 0x1168) == '\0') {
        temp_v6 = 5;
        piVar11 = (int *)(param_1 + 0x28);
      }
      else {
        FUN_00169ddc(0x1000222);
        FUN_0035c6ac();
        piVar11 = (int *)(param_1 + 0x2c);
        temp_v6 = *piVar11 + 1;
      }
      *piVar11 = temp_v6;
      piVar11[1] = 0;
      return;
    }
    break;
  case 7:
    temp_v6 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = temp_v6;
    if (temp_v6 == 1) {
      FUN_002e5924(4);
    }
    if (*(int *)(param_1 + 0x30) >= 4) {
      *(unsigned int *)(param_1 + 0x28) = 0x11;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    break;
  case 8:
    *(unsigned int *)(param_1 + 0x28) = 0x11;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    return;
  }
  return;
}

} /* extern "C" */
