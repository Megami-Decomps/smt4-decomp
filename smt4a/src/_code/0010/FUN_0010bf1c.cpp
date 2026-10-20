/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010bf1c` (_code @ 0x10bf1c, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineBufferReset(unsigned int);
int strAssign(int, unsigned int, unsigned int, unsigned int);
int FUN_002e7908(unsigned char [8], unsigned int *);
int FUN_002eac34(...);
int FUN_002eea8a(...);

typedef int romwright_code(...);
/* stack frame of param_4: 7 slot(s), 26 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned short sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
extern int FUN_00121206(int, unsigned char);
/* Supplied declaration required: onlineBufferReset. */
/* Supplied declaration required: strAssign. */
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002eac34. */
extern int streamReadBytes(int, int, unsigned int);
/* Supplied declaration required: FUN_002eea8a. */
extern int FUN_002ef9e0(unsigned char *, unsigned short);
extern int streamReadByte(int, int);
extern int FUN_002f5c4c(int, unsigned int);


unsigned int FUN_0010bf1c(unsigned int param_1,int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [8];
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned short temp_v8 [2];
  unsigned int temp_v9;
  unsigned char temp_v10 [8];
  unsigned int temp_v11;
  unsigned int uStack_24;
  int iStack_20;
  int iStack_1c;
  unsigned int *temp_v12;
  
  temp_v9 = 0;
  if (*(int *)(*(int *)(param_2 + 8) + 0x10) == 0) {
    return 0;
  }
  uStack_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  temp_v12 = param_4;
  temp_v0 = streamReadByte(param_2,param_3 + 0x25);
  if ((temp_v0 == 0) || (temp_v0 = streamReadByte(param_2,param_3 + 0x26), temp_v0 == 0)) {
    return 0;
  }
  temp_v0 = FUN_002eea8a(param_2,param_3 + 0x3c);
  if (temp_v0 == 0) {
    return 0;
  }
  if (-1 < (int)((unsigned int)*(unsigned short *)(param_3 + 0x3c) << 0x13)) {
    temp_v0 = streamReadByte(param_2,param_3 + 0x65);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = streamReadBytes(param_2,param_3 + 0x28,4);
    if (temp_v0 == 0) {
      return 0;
    }
    *(unsigned int *)(param_3 + 0x38) = 4;
    temp_v8[0] = 0;
    temp_v0 = FUN_002eea8a(param_2,temp_v8);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = FUN_002ef9e0(temp_v10,temp_v8[0]);
    *(unsigned short *)(param_3 + 0x44) = *(unsigned short *)(temp_v0 + 4);
    if (((*(unsigned short *)(param_3 + 0x3c) & 0xf) == 0) || ((*(unsigned short *)(param_3 + 0x3c) & 0xf) == 1)) {
      temp_v0 = streamReadBytes(param_2,param_3 + 0x50,4);
      if (temp_v0 == 0) {
        return 0;
      }
      *(unsigned int *)(param_3 + 0x60) = 4;
    }
    if (((*(unsigned short *)(param_3 + 0x3c) & 0xf) == 2) &&
       (temp_v0 = streamReadByte(param_2,param_3 + 100), temp_v0 == 0)) {
      return 0;
    }
    temp_v0 = *(int *)(param_2 + 8);
    temp_v3 = *(unsigned int *)(temp_v0 + 0x10);
    temp_v5 = temp_v3;
    if ((int)((unsigned int)*(unsigned short *)(param_3 + 0x3c) << 0x18) < 0) {
      temp_v6 = temp_v6 & 0xffff0000;
      temp_v1 = FUN_002eea8a(param_2,&temp_v6);
      if (temp_v1 == 0) {
        return 0;
      }
      temp_v3 = *(int *)(param_2 + 0xc) + (temp_v6 & 0xffff) + 1;
      if (temp_v5 < temp_v3) {
        return 0;
      }
    }
    temp_v7 = param_3 + 0x20;
    *(unsigned int *)(temp_v0 + 0x10) = temp_v3;
    temp_v6 = romwright_piece_3_1((((unsigned int)(temp_v6) >> 8) & 0xffffffU),*(unsigned char *)(param_3 + 0x25));
    temp_v11 = (unsigned int)(*(unsigned char *)(param_3 + 0x25) >> 4);
    if (temp_v11 < 0xc) {
      temp_v1 = FUN_002eac34();
      temp_v1 = FUN_00121206(temp_v0,*(unsigned char *)(temp_v1 + 8));
      if (temp_v1 != 0) {
        *(int *)(temp_v0 + 0x10) = *(int *)(temp_v0 + 0x10) - 1;
        onlineBufferReset(*(unsigned int *)(param_3 + 0xd8));
        temp_v2 = *(unsigned int *)(param_2 + 0xc);
        if (*(unsigned int *)(temp_v0 + 0x10) < temp_v2) {
          return 0;
        }
        temp_v1 = *(int *)(param_3 + 0xd8);
        strAssign(temp_v1,*(int *)(temp_v0 + 0xc) + *(int *)(temp_v0 + 0x18) + temp_v2,
                     *(unsigned int *)(temp_v0 + 0x10) - temp_v2,0xffffffff);
        if ((temp_v1 != 0) && (temp_v9 = 1, *(int *)(*(int *)(param_3 + 0xd8) + 0x10) != 0)) {
          temp_v1 = FUN_002eac34(temp_v11);
          piVar3 = *(int **)(temp_v1 + 0x14);
          if (piVar3 != (int *)0x0) {
            (**(romwright_code **)(*piVar3 + 0x14))(piVar3,*(unsigned int *)(param_3 + 0xd8));
          }
          temp_v1 = FUN_002eac34(temp_v11);
          if ((*(int *)(temp_v1 + 0x10) != 0) &&
             (temp_v1 = FUN_002f5c4c(*(int *)(temp_v1 + 0x10),*(unsigned int *)(param_3 + 0xd8)),
             temp_v1 != 0)) {
            temp_v6 = 0x8005000c;
            FUN_002e7908(temp_v4,&temp_v6);
            return 0;
          }
        }
      }
      *(unsigned char *)(temp_v7 + 4) = 0;
      *(unsigned int *)(temp_v0 + 0x10) = temp_v5;
      if (temp_v12 != (unsigned int *)0x0) {
        *temp_v12 = temp_v3;
        return temp_v9;
      }
      return temp_v9;
    }
  }
  return 0;
}

} /* extern "C" */
