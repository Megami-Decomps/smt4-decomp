/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f8d04` (_code @ 0x1f8d04, 0x2f8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
} param_4_stack;

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00256a50. */
extern int FUN_0025b920(int);
/* Supplied declaration required: FUN_00295cbc. */
extern int FUN_002c0bcc(unsigned int);
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c583c. */
extern unsigned int FUN_002c615c(int, unsigned int);
/* Supplied declaration required: FUN_00389e54. */


unsigned int FUN_001f8d04(unsigned int param_1,int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int unaff_r10;
  short asStack_200 [202];
  int temp_v13;
  unsigned char *temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int iStack_30;
  int iStack_2c;
  unsigned int *puStack_28;
  
  temp_v5 = DAT_00433158;
  temp_v20 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  puStack_28 = param_4;
  FUN_00389e54(DAT_00433158,param_1);
  temp_v3 = temp_v20;
  if (temp_v5 != 0) {
    unaff_r10 = temp_v5;
  }
  temp_v13 = temp_v20 * 3;
  if (temp_v5 == 0) {
    temp_v4 = FUN_002c0ec4(0x21,0);
    temp_v5 = FUN_002c0e9c();
    temp_v12 = FUN_002c0e4c(temp_v4);
    if (temp_v12 <= temp_v3) {
      FUN_002c583c(0);
      return 0;
    }
    unaff_r10 = temp_v5 + temp_v13 * 8;
  }
  if (unaff_r10 != 0) {
    temp_v6 = (unsigned int)*(unsigned char *)(unaff_r10 + 4);
    temp_v11 = (unsigned int)*(unsigned char *)(unaff_r10 + 5);
    temp_v5 = 0;
    temp_v12 = temp_v11;
    temp_v3 = temp_v6;
    if (temp_v11 < temp_v6) {
      temp_v12 = temp_v6;
      temp_v3 = temp_v11;
    }
    if (temp_v11 == temp_v6) {
      temp_v18 = 0x32;
    }
    else {
      temp_v2 = FUN_002c0bcc((temp_v12 - temp_v3) & 0xffff);
      temp_v18 = FUN_002c615c(temp_v2 * 100,temp_v12 - temp_v3);
      temp_v12 = temp_v3 + temp_v2;
    }
    if (0 < (int)temp_v12) {
      temp_v2 = 0;
      temp_v3 = temp_v18;
      if (param_4 != (unsigned int *)0x0) {
        *param_4 = temp_v12;
      }
      do {
        temp_v10 = unaff_r10 + temp_v2 * 4;
        temp_v6 = (unsigned int)*(unsigned short *)(temp_v10 + 8);
        if (temp_v6 != 0) {
          temp_v3 = (unsigned int)*(unsigned char *)(temp_v10 + 0xb);
        }
        if ((temp_v6 != 0 && temp_v3 != 0) && (temp_v3 = (unsigned int)*(unsigned char *)(temp_v10 + 10), temp_v3 == 0)) {
          temp_v7 = FUN_002c0bcc(99);
          temp_v3 = (temp_v7 + 1U) & 0xffff;
          if (temp_v3 <= *(unsigned char *)(temp_v10 + 0xb)) {
            temp_v3 = FUN_00295cbc(temp_v6,1);
            if (param_2 != 0) {
              *(unsigned int *)(param_2 + temp_v5 * 4) = temp_v6;
            }
            temp_v5 = temp_v5 + 1;
            if ((int)temp_v12 <= temp_v5) {
              return temp_v18;
            }
          }
        }
        temp_v6 = temp_v20;
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
      temp_v2 = DAT_00433158;
      temp_v14 = (unsigned char *)asStack_200;
      FUN_00389e54(DAT_00433158,temp_v20);
      if (temp_v2 == 0) {
        temp_v4 = FUN_002c0ec4(0x21,0);
        temp_v2 = FUN_002c0e9c();
        temp_v3 = FUN_002c0e4c(temp_v4);
        if (temp_v6 >= temp_v3) {
          temp_v2 = 0;
        }
        else {
          temp_v2 = temp_v2 + temp_v13 * 8;
        }
      }
      temp_v19 = (unsigned int)*(unsigned char *)(temp_v2 + 0x14);
      temp_v0 = *(unsigned char *)(temp_v2 + 6);
      temp_v9 = *(unsigned char *)(temp_v2 + 7);
      temp_v15 = (unsigned int)*(unsigned char *)(temp_v2 + 0x15);
      temp_v16 = (unsigned int)*(unsigned char *)(temp_v2 + 0x16);
      temp_v17 = (unsigned int)*(unsigned char *)(temp_v2 + 0x17);
      temp_v8 = temp_v0;
      if (temp_v9 < temp_v0) {
        temp_v8 = temp_v9;
        temp_v9 = temp_v0;
      }
      temp_v3 = 0x3b7;
      temp_v2 = 0;
      do {
        temp_v6 = temp_v3;
        FUN_00256a50();
        if (((temp_v6 != 0) && (temp_v8 <= *(unsigned char *)(temp_v6 + 0x24))) &&
           (*(unsigned char *)(temp_v6 + 0x24) <= temp_v9)) {
          temp_v11 = (unsigned int)*(unsigned char *)(temp_v6 + 0x25);
          if (temp_v11 != temp_v19) {
            temp_v1 = temp_v19;
            if (temp_v11 != temp_v15) {
              temp_v1 = temp_v16;
            }
            if ((!(temp_v11 != temp_v15 && temp_v11 != temp_v1)) || (temp_v11 == temp_v17)) {
              temp_v10 = temp_v2 * 2;
              temp_v2 = temp_v2 + 1;
              *(unsigned short *)(temp_v14 + temp_v10) = *(unsigned short *)(temp_v6 + 0x20);
            }
          }
          else {
            temp_v10 = temp_v2 * 2;
            temp_v2 = temp_v2 + 1;
            *(unsigned short *)(temp_v14 + temp_v10) = *(unsigned short *)(temp_v6 + 0x20);
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x47f);
      if ((short)temp_v2 != 0) {
        if (temp_v5 < (int)temp_v12) {
          do {
            temp_v10 = FUN_002c0bcc(((int)(short)temp_v2 - 1U) & 0xffff);
            temp_v7 = (int)asStack_200[temp_v10];
            temp_v10 = FUN_0025b920(temp_v7);
            if (temp_v10 == 0) {
              *(unsigned char *)(param_3 + temp_v5) = 1;
            }
            else {
              *(unsigned char *)(param_3 + temp_v5) = 0;
            }
            FUN_00295cbc(temp_v7,1);
            if (param_2 != 0) {
              *(int *)(param_2 + temp_v5 * 4) = temp_v7;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < (int)temp_v12);
        }
        return temp_v18;
      }
    }
  }
  FUN_002c583c(0);
  return 0;
}
