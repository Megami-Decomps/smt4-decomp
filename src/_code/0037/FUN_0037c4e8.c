/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c4e8` (_code @ 0x37c4e8, 0x31c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 21 slot(s), 54 byte(s) */
typedef struct {
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned char sp7F; /* 0x7f: local_7f */
    unsigned char sp80; /* 0x80: local_80 */
    unsigned short sp88; /* 0x88: local_88 */
    unsigned short sp8A; /* 0x8a: local_8a */
    unsigned short sp8C; /* 0x8c: local_8c */
    unsigned char sp8D; /* 0x8d: local_8d */
    unsigned char sp8E; /* 0x8e: local_8e */
    unsigned char sp8F; /* 0x8f: local_8f */
    unsigned char sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
} param_2_stack;

extern unsigned char DAT_004eb380; /* 0x4eb380 */

/* Supplied declaration required: FUN_002c5ff4. */
/* Supplied declaration required: FUN_002c6c10. */
extern unsigned char FUN_0037b370(unsigned char);
extern int FUN_0037bcc8(int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0037bf10. */
extern int FUN_003e68bc(void);
extern unsigned int FUN_003e7014(int);
extern int FUN_003e7038(int, unsigned char *);
extern unsigned int FUN_003e705c(int);
extern int FUN_003e7080(int, unsigned char *, unsigned int);
extern int FUN_003e70a4(int, unsigned char *, unsigned short *, unsigned int);


unsigned int FUN_0037c4e8(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned char *unaff_r9;
  unsigned int temp_v10 [2];
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned char temp_v18;
  char temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  int temp_v22;
  int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  unsigned char temp_v28 [32];
  unsigned short temp_v29;
  unsigned short temp_v30;
  unsigned short temp_v31;
  
  temp_v3 = FUN_0037bcc8(param_1,&DAT_004eb380,0x4000);
  temp_v6 = 0;
  if (temp_v3 != 0) {
    *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_1 + 0x10);
    *(unsigned short *)(param_2 + 0x80) = *(unsigned short *)(param_1 + 0x30);
    temp_v3 = FUN_003e7038(param_1,&temp_v18);
    temp_v6 = 0;
    if (temp_v3 != 0) {
      temp_v4 = FUN_003e705c(param_1);
      temp_v5 = FUN_003e7014(param_1);
      if (temp_v5 >= 5) {
        temp_v5 = 4;
      }
      *(unsigned int *)(param_2 + 0x40) = temp_v5;
      *(unsigned int *)(param_2 + 0x3c) = temp_v4;
      temp_v2 = FUN_0037b370(temp_v18);
      *(unsigned char *)(param_2 + 0x18) = temp_v2;
      temp_v9 = 0;
      *(unsigned int *)(param_2 + 0x1c) = temp_v20;
      *(unsigned char *)(param_2 + 0x20) = temp_v19 != '\0';
      if (temp_v5 != 0) {
        unaff_r9 = &temp_v11;
      }
      *(unsigned int *)(param_2 + 0x24) = temp_v21;
      *(int *)(param_2 + 0x28) = temp_v22;
      *(unsigned int *)(param_2 + 0x2c) = temp_v24;
      *(int *)(param_2 + 0x30) = temp_v23;
      *(unsigned int *)(param_2 + 0x34) = temp_v26;
      *(unsigned int *)(param_2 + 0x38) = temp_v25;
      if (temp_v5 != 0) {
        do {
          temp_v3 = FUN_003e7080(param_1,&temp_v11,temp_v9);
          if (temp_v3 == 0) {
            return 0;
          }
          temp_v7 = temp_v9 * 7 + param_2;
          *(unsigned char *)(temp_v7 + 0x44) = temp_v11;
          *(unsigned char *)(temp_v7 + 0x45) = temp_v12;
          *(unsigned char *)(temp_v7 + 0x46) = temp_v13;
          *(unsigned char *)(temp_v7 + 0x47) = temp_v14;
          *(unsigned char *)(temp_v7 + 0x48) = (unsigned char)temp_v15;
          temp_v3 = 0;
          if ((unsigned char)temp_v15 != 0) {
            do {
              temp_v8 = temp_v7 + temp_v3;
              temp_v1 = temp_v3 + 5;
              temp_v3 = temp_v3 + 1;
              *(unsigned char *)(temp_v8 + 0x49) = unaff_r9[temp_v1];
            } while (temp_v3 < (int)(unsigned int)(unsigned char)temp_v15);
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < temp_v5);
      }
      temp_v0 = *(char *)(param_2 + 0x18);
      *(char *)(param_1 + 0xa90) = temp_v0;
      if (temp_v0 != '\x03') {
        if (temp_v4 != 0) {
          temp_v5 = temp_v4 & 1;
          temp_v9 = (unsigned int)(temp_v5 == 1);
          if (temp_v5 == 1) {
            *(unsigned int *)(param_2 + 0x60) = 0;
          }
          for (; temp_v5 < temp_v4; temp_v5 = temp_v5 + 2) {
            temp_v3 = temp_v9 + 1;
            *(unsigned int *)(param_2 + temp_v9 * 4 + 0x60) = 0;
            temp_v9 = temp_v9 + 2;
            *(unsigned int *)(param_2 + temp_v3 * 4 + 0x60) = 0;
          }
        }
      }
      else {
        temp_v5 = 0;
        if (temp_v5 < temp_v4) {
          do {
            temp_v3 = FUN_003e70a4(param_1,temp_v28,&temp_v15,temp_v5);
            if (temp_v3 == 0) {
              return 0;
            }
            temp_v7 = param_1 + temp_v5 * 0x2c;
            FUN_002c5ff4(temp_v7 + 0xa92,temp_v28,0x20);
            temp_v3 = temp_v5 * 4;
            temp_v5 = temp_v5 + 1;
            *(unsigned short *)(temp_v7 + 0xab2) = temp_v29;
            *(unsigned short *)(temp_v7 + 0xab4) = temp_v30;
            *(unsigned short *)(temp_v7 + 0xab6) = temp_v31;
            *(unsigned short *)(temp_v7 + 0xab8) = temp_v15;
            *(unsigned short *)(temp_v7 + 0xaba) = temp_v16;
            *(unsigned short *)(temp_v7 + 0xabc) = temp_v17;
            *(int *)(param_2 + temp_v3 + 0x60) = temp_v7 + 0xa92;
          } while (temp_v5 < temp_v4);
        }
      }
      temp_v3 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        temp_v3 = FUN_003e68bc();
      }
      temp_v7 = temp_v3 + 8 + temp_v27;
      temp_v6 = FUN_002c6c10(temp_v22 - 1,temp_v24);
      temp_v3 = FUN_002c6c10(temp_v21,temp_v24);
      (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),temp_v7,0);
      *(int *)(param_1 + 0x3c) = temp_v3;
      *(unsigned int *)(param_1 + 0x38) = temp_v6;
      *(int *)(param_1 + 0x40) = temp_v7;
      *(unsigned int *)(param_1 + 0x44) = temp_v23 * temp_v4 * temp_v3 + temp_v7;
      *(unsigned int *)(param_1 + 0x48) = 0;
      if (*(romwright_code **)(param_1 + 0xc24) == (romwright_code *)0x0) {
        *(unsigned int *)(param_1 + 0x58) = 0;
      }
      else {
        temp_v10[0] = 0;
        temp_v3 = (**(romwright_code **)(param_1 + 0xc24))(temp_v10,*(unsigned int *)(param_1 + 0xc28));
        if (temp_v3 == 0) {
          return 0;
        }
        *(unsigned int *)(param_1 + 0x50) = temp_v10[0];
        temp_v22 = *(int *)(*(int *)(param_1 + 0x18) + 0x10);
        *(unsigned int *)(param_1 + 0x58) = 0;
      }
      *(int *)(param_1 + 0x5c) = temp_v22;
      *(unsigned int *)(param_1 + 0x54) = 0;
      FUN_0037bf10(param_1);
      temp_v6 = 1;
    }
  }
  return temp_v6;
}
