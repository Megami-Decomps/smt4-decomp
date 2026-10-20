/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa7a8` (_code @ 0x2fa7a8, 0x7a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_00192550(...);
int FUN_001aba54(void);
int FUN_0020ad6c(int, int, int);
int FUN_0028c620(...);
int FUN_002c7bb0(...);
int FUN_002ccde8(...);
int FUN_0031d1b4(...);
int FUN_004000a8(...);
int FUN_00400164(...);
int FUN_0047fbf0(...);

/* stack frame of param_1: 11 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned short sp40; /* 0x40: local_40 */
    unsigned short sp48; /* 0x48: local_48 */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned short sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned short sp58; /* 0x58: local_58 */
    unsigned short sp5C; /* 0x5c: local_5c */
    unsigned short sp60; /* 0x60: local_60 */
    unsigned short sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00192550. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_0020ad6c. */
/* Supplied declaration required: FUN_0028c620. */
extern int FUN_002a4878(int);
/* Supplied declaration required: FUN_002c7bb0. */
/* Supplied declaration required: FUN_002ccde8. */
/* Supplied declaration required: FUN_0031d1b4. */
extern int FUN_003e0044(unsigned int);
/* Supplied declaration required: FUN_004000a8. */
/* Supplied declaration required: FUN_00400164. */
/* Supplied declaration required: FUN_0047fbf0. */


void FUN_002fa7a8(int param_1)

{
/* irregular: 11 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned char temp_v7;
  short temp_v8 [2];
  short temp_v9 [2];
  short temp_v10 [2];
  short temp_v11 [2];
  int temp_v12;
  short temp_v13 [2];
  short temp_v14 [2];
  unsigned short temp_v15 [4];
  unsigned short temp_v16 [8];
  int temp_v17;
  
  temp_v12 = param_1 + 0x3bdc;
  FUN_0031d1b4(temp_v12,0);
  *(unsigned int *)(param_1 + 0x3898) = 0xffffffff;
  FUN_0020ad6c(param_1,0x22,1);
  sysPlaySe(0x3a);
  temp_v14[0] = 0;
  temp_v8[0] = 0;
  FUN_002ccde8(param_1,temp_v14,temp_v8);
  puVar9 = (unsigned int *)(param_1 + 0x3c84);
  *puVar9 = 0x1010101;
  temp_v17 = param_1 + 0x3c00;
  *(unsigned int *)(param_1 + 0x3c88) = 0;
  *(unsigned int *)(param_1 + 0x3c8c) = 0;
  *(unsigned int *)(param_1 + 0x3c90) = 0;
  *(unsigned int *)(param_1 + 0x3c94) = 0;
  temp_v5 = param_1 + 0x3c88;
  puVar10 = (unsigned int *)(param_1 + 0x387c);
  puVar8 = (unsigned int *)(param_1 + 0x3890);
  if (temp_v14[0] == 2 || temp_v14[0] == 3) {
    temp_v2 = (int)temp_v8[0];
    FUN_001aba54();
    if ((*(unsigned int *)(temp_v2 + 0x28) & 0x1ff) >> 5 == 3) {
      *puVar10 = 0x23;
      temp_v16[0] = 0;
      temp_v9[0] = 0;
      FUN_002ccde8(param_1,temp_v16,temp_v9);
      FUN_002c7bb0(*puVar8 - 1,0xffffffff,(int)temp_v9[0],temp_v5);
      temp_v6 = 1;
      do {
        temp_v3 = FUN_001ab888();
        FUN_002c7bb0(*puVar8 - 1,(int)*(char *)(temp_v3 + temp_v6 + 0x1c9f),(int)temp_v9[0],
                     param_1 + temp_v6 * 4 + 0x3c88);
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      temp_v6 = (int)temp_v9[0];
      FUN_001aba54();
      if ((((*(unsigned int *)(temp_v6 + 0x3c) & 0x600) != 0) && (*puVar8 < 4)) &&
         (*(int *)(param_1 + 0x3dac) < 0)) {
        *(int *)(param_1 + *puVar8 * 4 + 0x3c88) = *(int *)(param_1 + 0x3dac);
      }
    }
    else {
      FUN_0028c620(param_1);
    }
    if ((*(unsigned int *)(temp_v2 + 0x28) & 0x1ff) >> 5 == 4) {
      *puVar10 = 0x24;
      FUN_0031d1b4(temp_v12,*puVar8);
    }
    temp_v6 = FUN_00400164(0xffffffff,(int)temp_v8[0]);
    temp_v3 = 0;
    if (temp_v6 != 0) {
      *(unsigned char *)puVar9 = 0;
    }
    do {
      temp_v6 = FUN_001ab888();
      if ((*(char *)(temp_v6 + temp_v3 + 0x1ca0) < '\0') ||
         (temp_v6 = FUN_00400164(temp_v3,(int)temp_v8[0]), temp_v6 != 0)) {
        *(unsigned char *)(param_1 + temp_v3 + 0x3c85) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    if ((*(unsigned int *)(temp_v2 + 0x3c) & 0x200) != 0) {
      *(unsigned char *)(*puVar8 + (int)puVar9) = 0;
    }
    if (((*(char *)(temp_v2 + 0x23) == '\x03') && ((*(unsigned int *)(temp_v2 + 0x28) & 0x1ff) >> 5 == 2)) &&
       (((*(unsigned short *)(temp_v2 + 0x3a) & 0xfff) != 0 &&
        (((*(unsigned int *)(temp_v2 + 0x3c) & 0x7f) != 1 && (temp_v2 = FUN_003e0044(1), temp_v2 != 0)))))) {
      temp_v2 = 0;
      do {
        if (*(char *)(param_1 + temp_v2 + 0x3c85) != '\0') {
          FUN_0031d1b4(temp_v12,temp_v2 + 1);
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
    }
  }
  if (temp_v14[0] == 8) {
    *(unsigned int *)(temp_v17 + 0x98) = 0;
    *(unsigned int *)(temp_v17 + 0x9c) = 0;
    *(unsigned int *)(temp_v17 + 0xa0) = 0;
    *(unsigned int *)(temp_v17 + 0xa4) = 0;
    temp_v2 = (int)temp_v8[0];
    FUN_00192550();
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + 0x32);
    if (temp_v4 != 0) {
      FUN_001aba54();
      if ((*(unsigned int *)(temp_v4 + 0x28) & 0x1ff) >> 5 == 3) {
        *puVar10 = 0x23;
        temp_v16[0] = 0;
        temp_v10[0] = 0;
        FUN_002ccde8(param_1,temp_v16,temp_v10);
        FUN_002c7bb0(*puVar8 - 1,0xffffffff,(int)temp_v10[0],temp_v5);
        temp_v5 = 1;
        do {
          temp_v2 = FUN_001ab888();
          FUN_002c7bb0(*puVar8 - 1,(int)*(char *)(temp_v2 + temp_v5 + 0x1c9f),(int)temp_v10[0],
                       param_1 + temp_v5 * 4 + 0x3c88);
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 4);
        temp_v5 = (int)temp_v10[0];
        FUN_001aba54();
        if ((((*(unsigned int *)(temp_v5 + 0x3c) & 0x600) != 0) && (*puVar8 < 4)) &&
           (*(int *)(param_1 + 0x3dac) < 0)) {
          *(int *)(param_1 + *puVar8 * 4 + 0x3c88) = *(int *)(param_1 + 0x3dac);
        }
      }
      else {
        FUN_0028c620(param_1);
      }
      if ((*(unsigned int *)(temp_v4 + 0x28) & 0x1ff) >> 5 == 4) {
        *puVar10 = 0x24;
        FUN_0031d1b4(temp_v12,*puVar8);
      }
      temp_v5 = -1;
      FUN_004000a8(0xffffffff,(int)temp_v8[0]);
      temp_v2 = 0;
      if (temp_v5 != 0) {
        *(unsigned char *)puVar9 = 0;
      }
      do {
        temp_v5 = FUN_001ab888();
        if ((*(char *)(temp_v5 + temp_v2 + 0x1ca0) < '\0') ||
           (temp_v5 = temp_v2, FUN_004000a8(temp_v2,(int)temp_v8[0]), temp_v5 != 0)) {
          *(unsigned char *)(param_1 + temp_v2 + 0x3c85) = 0;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
      if ((*(unsigned int *)(temp_v4 + 0x3c) & 0x200) != 0) {
        *(unsigned char *)(*puVar8 + (int)puVar9) = 0;
      }
      if (((*(char *)(temp_v4 + 0x23) == '\x03') && ((*(unsigned int *)(temp_v4 + 0x28) & 0x1ff) >> 5 == 2)) &&
         (((*(unsigned short *)(temp_v4 + 0x3a) & 0xfff) != 0 &&
          (((*(unsigned int *)(temp_v4 + 0x3c) & 0x7f) != 1 && (temp_v5 = FUN_003e0044(1), temp_v5 != 0)))))) {
        temp_v5 = 0;
        do {
          if (*(char *)(param_1 + temp_v5 + 0x3c85) != '\0') {
            FUN_0031d1b4(temp_v12,temp_v5 + 1);
            return;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 3);
      }
    }
    else {
      temp_v2 = (int)temp_v8[0];
      FUN_00192550();
      temp_v6 = param_1 + 0x3c98;
      if ((*(unsigned char *)(temp_v2 + 0x3a) & 0x80) != 0) {
        *puVar10 = 0x23;
        temp_v15[0] = 0;
        temp_v13[0] = 0;
        FUN_002ccde8(param_1,temp_v15,temp_v13);
        FUN_0047fbf0(0xffffffff,(int)temp_v13[0],temp_v5,temp_v6);
        temp_v5 = 1;
        do {
          temp_v6 = FUN_001ab888();
          temp_v3 = param_1 + temp_v5 * 4;
          FUN_0047fbf0((int)*(char *)(temp_v6 + temp_v5 + 0x1c9f),(int)temp_v13[0],temp_v3 + 0x3c88,
                       temp_v3 + 0x3c98);
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 4);
      }
      else if ((*(unsigned int *)(temp_v2 + 0x68) & 0x10) != 0) {
        *puVar10 = 0x23;
        temp_v10[0] = 0;
        temp_v11[0] = 0;
        FUN_002ccde8(param_1,temp_v10,temp_v11);
        FUN_0047fbf0(0xffffffff,(int)temp_v11[0],temp_v5,temp_v6);
        temp_v5 = 1;
        do {
          temp_v6 = FUN_001ab888();
          temp_v3 = param_1 + temp_v5 * 4;
          FUN_0047fbf0((int)*(char *)(temp_v6 + temp_v5 + 0x1c9f),(int)temp_v11[0],temp_v3 + 0x3c88,
                       temp_v3 + 0x3c98);
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 4);
      }
      else {
        temp_v15[0] = 0;
        temp_v10[0] = 0;
        FUN_002ccde8(param_1,temp_v15,temp_v10);
        temp_v3 = FUN_002a4878(temp_v12);
        if (temp_v3 != 0) {
          temp_v5 = FUN_001ab888();
          temp_v6 = param_1 + temp_v3 * 4;
          FUN_0047fbf0((int)*(char *)(temp_v5 + temp_v3 + 0x1c9f),(int)temp_v10[0],temp_v6 + 0x3c88,
                       temp_v6 + 0x3c98);
          temp_v5 = FUN_001ab888();
          if (*(char *)(temp_v5 + temp_v3 + 0x1c9f) < '\0') {
            FUN_00192550((int)temp_v10[0]);
          }
        }
        else {
          FUN_0047fbf0(0xffffffff,(int)temp_v10[0],temp_v5,temp_v6);
        }
      }
      temp_v5 = -1;
      FUN_004000a8(0xffffffff,(int)temp_v8[0]);
      temp_v6 = 0;
      if (temp_v5 != 0) {
        *(unsigned char *)puVar9 = 0;
      }
      do {
        temp_v5 = FUN_001ab888();
        if ((*(char *)(temp_v5 + temp_v6 + 0x1ca0) < '\0') ||
           (temp_v5 = temp_v6, FUN_004000a8(temp_v6,(int)temp_v8[0]), temp_v5 != 0)) {
          *(unsigned char *)(param_1 + temp_v6 + 0x3c85) = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 3);
      if (((*(unsigned char *)(temp_v2 + 0x3a) & 0x7f) != 1) && ((*(unsigned char *)(temp_v2 + 0x3a) & 0x80) == 0)) {
        temp_v1 = *(short *)(temp_v2 + 0x34);
        temp_v7 = temp_v1 == 0;
        if (temp_v7) {
          temp_v1 = *(short *)(temp_v2 + 0x36);
        }
        if (temp_v7 && temp_v1 == 0) {
          temp_v0 = *(char *)(temp_v2 + 0x38);
          temp_v7 = temp_v0 == '\0';
          if (temp_v7) {
            temp_v0 = *(char *)(temp_v2 + 0x39);
          }
          if (temp_v7 && temp_v0 == '\0') {
            return;
          }
        }
        temp_v5 = FUN_003e0044(1);
        if (temp_v5 != 0) {
          temp_v5 = 0;
          while (*(char *)(param_1 + temp_v5 + 0x3c85) == '\0') {
            temp_v5 = temp_v5 + 1;
            if (temp_v5 >= 3) {
              return;
            }
          }
          FUN_0031d1b4(temp_v12,temp_v5 + 1);
          return;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
