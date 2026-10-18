/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00382a88` (_code @ 0x382a88, 0x450 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_1_stack;

extern unsigned char LAB_00382ee0; /* 0x382ee0 */

extern int FUN_002355ac(unsigned char);
extern int FUN_00235758(int, unsigned char, unsigned int);
/* Supplied declaration required: FUN_00287790. */
extern int FUN_00287958(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028796c. */
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_00296de0. */
/* Supplied declaration required: FUN_002b67e0. */
extern unsigned int FUN_002bd13c(void);
/* Supplied declaration required: FUN_002bd1b0. */
extern unsigned int FUN_002bd3ec(void);
/* Supplied declaration required: FUN_002c0ba8. */
/* Supplied declaration required: FUN_003816a0. */
/* Supplied declaration required: FUN_00381b68. */
extern int FUN_00381bc8(void);
/* Supplied declaration required: FUN_00381cd0. */
extern int FUN_003ea4f8(int, unsigned char, unsigned int);


void FUN_00382a88(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8;
  int temp_v9;
  unsigned char *temp_v10;
  unsigned char temp_v11 [72];
  unsigned char temp_v12 [36];
  
  temp_v1 = FUN_002355ac(*(unsigned char *)(param_1 + 0x18));
  if (temp_v1 != 0) {
    temp_v10 = (unsigned char *)0xffffffff;
    FUN_00287790(&temp_v10);
    if (*(unsigned char **)(param_1 + 0x1c) != temp_v10) {
      *(unsigned char **)(param_1 + 0x1c) = temp_v10;
      FUN_0028796c(*(unsigned char *)(param_1 + 0x18));
      FUN_00381cd0();
    }
    temp_v2 = FUN_0028796c(*(unsigned char *)(param_1 + 0x18));
    temp_v1 = FUN_00287958(temp_v2,4);
    if (temp_v1 == 0) {
      temp_v8 = 0;
      if (*(char *)(param_1 + 0x18) == '\0') {
        temp_v7 = 0;
        do {
          temp_v1 = FUN_002c0ba8(*(unsigned short *)(temp_v7 * 4 + 0x44db62));
          if (temp_v1 != 0) {
            temp_v8 = *(unsigned short *)(temp_v7 * 4 + 0x44db64);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 4);
      }
      else if (*(char *)(param_1 + 0x18) == '\x01') {
        temp_v7 = 0;
        do {
          temp_v1 = FUN_002c0ba8(*(unsigned short *)(temp_v7 * 4 + 0x44db72));
          if (temp_v1 != 0) {
            temp_v8 = *(unsigned short *)(temp_v7 * 4 + 0x44db74);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 4);
      }
      temp_v2 = FUN_0028796c(*(unsigned char *)(param_1 + 0x18));
      FUN_00381b68(temp_v2,param_1 + 0x20,*(unsigned int *)(param_1 + 0x1c),temp_v8);
      if (*(int *)(param_1 + 0x1c) == 0) {
        FUN_002899c4(0x424,1);
      }
    }
  }
  else {
    FUN_0028796c(*(unsigned char *)(param_1 + 0x18));
    temp_v1 = FUN_00381bc8();
    if (temp_v1 != 5) {
      temp_v2 = 0;
      if (*(char *)(param_1 + 0x18) != '\0') {
        if (*(char *)(param_1 + 0x18) == '\x01') {
          temp_v2 = 0x14;
          temp_v3 = FUN_002c0ba8(0x6c);
          if (temp_v3 != 0) {
            temp_v3 = FUN_002c0ba8(0x7c);
            temp_v2 = 5;
            if (temp_v3 != 0) {
              temp_v2 = 0;
            }
          }
        }
      }
      else {
        temp_v2 = 0x14;
        temp_v3 = FUN_002c0ba8(0x25);
        if (temp_v3 != 0) {
          temp_v3 = FUN_002c0ba8(0x55);
          temp_v2 = 5;
          if (temp_v3 != 0) {
            temp_v2 = 0;
          }
        }
      }
      temp_v3 = FUN_0028796c(*(unsigned char *)(param_1 + 0x18));
      *(unsigned short *)(temp_v3 + 0xc) = 0;
      if ((*(char *)(param_1 + 0x18) == '\0') && (temp_v3 = FUN_002c0ba8(0x55), temp_v3 == 0)) {
        temp_v3 = FUN_0028796c(*(unsigned char *)(param_1 + 0x18));
        *(unsigned short *)(temp_v3 + 0xc) = 8;
      }
      temp_v8 = 0;
      if (*(char *)(param_1 + 0x18) == '\0') {
        temp_v7 = 0;
        do {
          temp_v3 = FUN_002c0ba8(*(unsigned short *)(temp_v7 * 4 + 0x44db62));
          if (temp_v3 != 0) {
            temp_v8 = *(unsigned short *)(temp_v7 * 4 + 0x44db64);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 4);
      }
      else if (*(char *)(param_1 + 0x18) == '\x01') {
        temp_v7 = 0;
        do {
          temp_v3 = FUN_002c0ba8(*(unsigned short *)(temp_v7 * 4 + 0x44db72));
          if (temp_v3 != 0) {
            temp_v8 = *(unsigned short *)(temp_v7 * 4 + 0x44db74);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 4);
      }
      temp_v6 = FUN_0028796c(*(unsigned char *)(param_1 + 0x18));
      temp_v10 = (unsigned char *)0x14;
      FUN_003816a0(temp_v6,temp_v1,param_1 + 0x20,temp_v8,temp_v2);
    }
  }
  temp_v1 = FUN_0028796c(*(unsigned char *)(param_1 + 0x18));
  temp_v3 = FUN_003ea4f8(param_1 + 0x20,*(unsigned char *)(param_1 + 0x18),0);
  temp_v4 = FUN_00235758(param_1 + 0x20,*(unsigned char *)(param_1 + 0x18),0);
  temp_v9 = temp_v3 + (unsigned int)*(unsigned char *)(temp_v1 + 10) * 0x20;
  temp_v5 = FUN_002355ac(*(unsigned char *)(param_1 + 0x18));
  if ((temp_v5 != 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    temp_v9 = temp_v3 + (unsigned int)*(unsigned char *)(temp_v1 + 10) * 0x20 + 0x20;
  }
  temp_v10 = (unsigned char *)FUN_002bd1b0(temp_v9,0);
  FUN_00296de0(*(unsigned int *)(param_1 + 0x28c),3,0xffffffff,0,0);
  temp_v0 = *(unsigned char *)(temp_v1 + 10);
  temp_v3 = 0;
  do {
    temp_v12[0] = 0;
    temp_v5 = *(int *)(temp_v1 + (unsigned int)temp_v0 * 0x50 + 0x10 + temp_v3 * 4);
    if (temp_v5 != -2) {
      if (temp_v5 != -1) {
        if (*(short *)(temp_v4 + temp_v5 * 0x20 + 0x16) != 0) {
          temp_v2 = FUN_002bd13c();
          FUN_002b67e0(temp_v12,temp_v2);
        }
        else {
          FUN_002b67e0(temp_v12);
        }
      }
      else {
        temp_v2 = FUN_002bd3ec();
        FUN_002b67e0(temp_v12,temp_v2);
      }
    }
    else {
      FUN_002b67e0(temp_v12,&LAB_00382ee0);
    }
    FUN_002bd1b0(temp_v12,temp_v11);
    if (temp_v3 != 0) {
      if (temp_v3 != 1) {
        if (temp_v3 == 2) {
          temp_v10 = temp_v11;
          FUN_00296de0(*(unsigned int *)(param_1 + 0x298),2,0xffffffff,0,0);
          return;
        }
      }
      else {
        temp_v2 = *(unsigned int *)(param_1 + 0x294);
        temp_v6 = 3;
        temp_v10 = temp_v11;
        FUN_00296de0(temp_v2,temp_v6,0xffffffff,0,0);
      }
    }
    else {
      temp_v2 = *(unsigned int *)(param_1 + 0x290);
      temp_v6 = 4;
      temp_v10 = temp_v11;
      FUN_00296de0(temp_v2,temp_v6,0xffffffff,0,0);
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 3) {
      return;
    }
  } while( 1 );
}
