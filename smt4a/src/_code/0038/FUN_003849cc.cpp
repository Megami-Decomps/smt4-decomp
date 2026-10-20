/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003849cc` (_code @ 0x3849cc, 0x2b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00244bb4(int, int);
int dataTableEntryNameById(int, int);
int libc_strcpy(...);
int FUN_0032725c(int, unsigned int, unsigned int);

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spE8; /* 0xe8: local_e8 */
} param_5_stack;

extern unsigned char LAB_00384c80; /* 0x384c80 */
extern unsigned char LAB_00384c88; /* 0x384c88 */
extern unsigned char LAB_00384c8c; /* 0x384c8c */
extern unsigned char LAB_00384c98; /* 0x384c98 */
extern unsigned char DAT_0055e4e1; /* 0x55e4e1 */
extern unsigned char DAT_00560d27; /* 0x560d27 */
extern unsigned char DAT_00560d40; /* 0x560d40 */
extern unsigned char DAT_00560d59; /* 0x560d59 */
extern unsigned char DAT_00560d72; /* 0x560d72 */
extern unsigned char DAT_00560d8d; /* 0x560d8d */
extern unsigned char DAT_00560dbe; /* 0x560dbe */
extern unsigned char DAT_00560deb; /* 0x560deb */
extern unsigned char DAT_00560e0c; /* 0x560e0c */
extern unsigned char DAT_00560e39; /* 0x560e39 */
extern unsigned char DAT_00560e7b; /* 0x560e7b */
extern unsigned char DAT_00560ea2; /* 0x560ea2 */
extern unsigned char DAT_00560ebf; /* 0x560ebf */
extern unsigned char DAT_00560ef6; /* 0x560ef6 */
extern unsigned char DAT_00560f11; /* 0x560f11 */
extern unsigned char DAT_00560f31; /* 0x560f31 */
extern unsigned char DAT_00560f76; /* 0x560f76 */
extern unsigned char DAT_00560fc4; /* 0x560fc4 */
extern unsigned char DAT_00560fe3; /* 0x560fe3 */
extern unsigned char DAT_00561547; /* 0x561547 */

/* Supplied declaration required: FUN_00100388. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_00244bb4. */
/* Supplied declaration required: dataTableEntryNameById. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_0032725c. */


void FUN_003849cc(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6 [984];
  unsigned char temp_v7 [64];
  unsigned char *temp_v8 [4];
  unsigned char *puStack_d8;
  unsigned char *puStack_d4;
  unsigned char *puStack_d0;
  unsigned char *puStack_cc;
  unsigned char *temp_v9;
  unsigned char *puStack_c4;
  unsigned char *puStack_c0;
  unsigned char *puStack_bc;
  unsigned char *puStack_b8;
  unsigned char *puStack_b4;
  unsigned char *temp_v10 [5];
  unsigned char *puStack_9c;
  unsigned char *puStack_98;
  unsigned char *puStack_94;
  unsigned char *temp_v11;
  unsigned char *puStack_8c;
  unsigned char *puStack_88;
  unsigned char *puStack_84;
  unsigned char temp_v12 [76];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  unsigned int temp_v13;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  temp_v13 = param_4;
  temp_v0 = gameFlagsGetBlock();
  temp_v10[0] = &DAT_00561547;
  temp_v10[1] = &DAT_00560ef6;
  temp_v10[2] = &DAT_0055e4e1;
  temp_v10[3] = &DAT_00561547;
  temp_v10[4] = &DAT_00560deb;
  puStack_9c = &DAT_00560d27;
  puStack_98 = &DAT_00560ea2;
  puStack_94 = &DAT_00560ea2;
  temp_v11 = &DAT_00560ebf;
  puStack_8c = &DAT_00560ebf;
  puStack_88 = &DAT_00560ebf;
  puStack_84 = &DAT_00561547;
  temp_v8[0] = &DAT_00561547;
  temp_v8[1] = &DAT_00560d40;
  temp_v8[2] = &DAT_00560d8d;
  temp_v8[3] = &DAT_00560e0c;
  puStack_d8 = &DAT_00560dbe;
  puStack_d4 = &DAT_00560fc4;
  puStack_d0 = &DAT_00560f76;
  puStack_cc = &DAT_00560fe3;
  temp_v9 = &DAT_00560f11;
  puStack_c4 = &DAT_00560f31;
  puStack_c0 = &DAT_00560e39;
  puStack_bc = &DAT_00560d59;
  puStack_b8 = &DAT_00560e7b;
  puStack_b4 = &DAT_00560d72;
  if (param_3 != 2) {
    temp_v1 = gameFlagsGetBlock();
    temp_v2 = gameFlagsGetBlock();
    temp_v5 = 0;
    if (*(char *)(temp_v2 + 3) != '\x01') {
      if (param_1 == 0x18) {
        temp_v5 = 2;
      }
    }
    else if (*(char *)(temp_v1 + 0xe71) != '\x03') {
      temp_v5 = 1;
    }
    if (param_3 == 0) {
      temp_v1 = gameFlagsGetBlock();
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 3);
      if (temp_v3 >= 100) {
        FUN_0032725c(param_2 - 100,temp_v13,0xffffffff);
        return;
      }
      if (temp_v3 != 0) {
        FUN_00100388(temp_v13,temp_v10[temp_v3]);
        return;
      }
    }
    if (temp_v5 == 2) {
      if (*(char *)(temp_v0 + 0x7c6) == 0) {
        FUN_00100388(temp_v13,&LAB_00384c98);
        return;
      }
      if (param_2 < 100) {
        FUN_00100388(temp_v13,temp_v8[*(char *)(temp_v0 + 0x7c6)]);
        return;
      }
      FUN_0032725c(param_2 - 100,temp_v13,0xffffffff);
      return;
    }
  }
  else {
    if (param_1 == 1000) {
      FUN_00100388(temp_v13,&LAB_00384c80);
      return;
    }
    if (param_1 >= 1001) {
      if (param_2 < 100) {
        FUN_00100388(temp_v13,temp_v6[param_1]);
        return;
      }
      FUN_0032725c(param_2 - 100,temp_v13,param_5);
      return;
    }
    if (param_1 == 0x18) {
      if (param_2 < 100) {
        FUN_00100388(temp_v13,temp_v10[param_2]);
        return;
      }
      FUN_0032725c(param_2 - 100,temp_v13,param_5);
      return;
    }
    if (param_1 == 0x65) {
      temp_v4 = dataTableEntryNameById(0x65,param_2);
      libc_strcpy(temp_v7,temp_v4);
      FUN_00100388(temp_v13,&LAB_00384c88,temp_v7);
      FUN_00244bb4(0x65,param_2);
      libc_strcpy(temp_v12,param_1);
      FUN_00100388(temp_v13,&LAB_00384c8c,temp_v7,temp_v12);
      return;
    }
  }
  if ((param_1 != 0xcb) && ((param_1 == 0x65 || (param_1 < 0x66)))) {
    temp_v4 = dataTableEntryNameById(param_1,param_2);
    libc_strcpy(temp_v7,temp_v4);
    FUN_00244bb4(param_1,param_2);
    libc_strcpy(temp_v12,param_1);
    FUN_00100388(temp_v13,&LAB_00384c8c,temp_v7,temp_v12);
    return;
  }
  temp_v4 = dataTableEntryNameById(param_1,param_2);
  libc_strcpy(temp_v7,temp_v4);
  FUN_00100388(temp_v13,&LAB_00384c88,temp_v7);
  return;
}

} /* extern "C" */
