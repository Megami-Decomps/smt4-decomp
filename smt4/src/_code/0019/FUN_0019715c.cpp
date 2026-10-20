/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019715c` (_code @ 0x19715c, 0x748 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00194b14(void);

int FUN_0018b49c(...);
int FUN_001ae538(...);
int FUN_001aed18(int, int, int);
int FUN_001f3958(int, int, int);
int FUN_0028f694(...);
int FUN_0028f870(...);
int FUN_0028fc60(void);
int FUN_002bdf94(...);
int FUN_002be370(...);
int FUN_002be5a4(...);
int FUN_002be624(...);
int FUN_002be650(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int VectorSignedToFloat(...);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

extern unsigned char LAB_001976e8; /* 0x1976e8 */
extern unsigned char LAB_001976f0; /* 0x1976f0 */
extern int DAT_0043da90; /* 0x43da90 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0018b49c. */
/* Supplied declaration required: FUN_00194b14. */
/* Supplied declaration required: FUN_001ae538. */
/* Supplied declaration required: FUN_001aed18. */
/* Supplied declaration required: FUN_001f3958. */
/* Supplied declaration required: FUN_0028f694. */
/* Supplied declaration required: FUN_0028f870. */
extern unsigned int FUN_0028fb40(unsigned int);
/* Supplied declaration required: FUN_0028fc60. */
extern int FUN_0029ee54(int);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be370. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002be650. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(void);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */


void FUN_0019715c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 17 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  int temp_v12;
  unsigned char temp_v13 [32];
  int temp_v14;
  int temp_v15;
  
  temp_v1 = DAT_0043da90 + 0x6d4;
  temp_v2 = FUN_002beda4();
  temp_v3 = FUN_002bed98(temp_v1);
  temp_v8 = DAT_0043da90;
  temp_v1 = temp_v2;
  if (temp_v2 < 0) {
    temp_v1 = -temp_v2;
  }
  if (temp_v1 >= 0x140) {
    return;
  }
  if (param_1 != 0x13) {
    if (param_1 < 0x14) {
      switch(param_1) {
      case 9:
        FUN_001aed18(temp_v2,temp_v3,param_2);
        return;
      case 10:
        FUN_001f3958(temp_v2,temp_v3,param_2);
        return;
      case 0xb:
      case 0xc:
      case 0xd:
        temp_v14 = param_1;
        temp_v15 = param_2;
        if (param_1 != 0xb) {
          if (param_1 != 0xc) {
            if (param_1 != 0xd) {
              return;
            }
            temp_v12 = DAT_0043da90 + 0x178;
            temp_v1 = DAT_0043da90 + 0x1cc4;
            FUN_002bf380(2,0x1d,0,temp_v2,temp_v3,0x65);
            FUN_002bf288(2,0x1d,0x46b,temp_v2,temp_v3,0x6a);
          }
          else {
            temp_v12 = DAT_0043da90 + 0x114;
            temp_v1 = DAT_0043da90 + 0x14f4;
            FUN_002bf380(2,0x1d,0,temp_v2,temp_v3,0x65);
            FUN_002bf288(2,0x1d,0x46a,temp_v2,temp_v3,0x6a);
          }
        }
        else {
          temp_v12 = DAT_0043da90 + 0xb0;
          temp_v1 = DAT_0043da90 + 0x147c;
          FUN_002bf380(2,0x1d,0,temp_v2,temp_v3,0x65);
          FUN_002bf288(2,0x1d,0x469,temp_v2,temp_v3,0x6a);
        }
        temp_v9 = 0;
        do {
          temp_v4 = FUN_0029efc0(temp_v12);
          temp_v5 = FUN_0029ee54(temp_v12);
          if (temp_v5 <= temp_v4 + temp_v9) break;
          temp_v4 = FUN_0029efc0(temp_v12);
          temp_v0 = *(unsigned short *)(temp_v1 + (temp_v4 + temp_v9) * 2);
          temp_v10 = (unsigned int)temp_v0;
          temp_v4 = FUN_002bf4f8(0x1d,temp_v9 + 0x40d);
          FUN_002bf288(2,0x1d,0x46c,*(short *)(temp_v4 + 8) + temp_v2,*(short *)(temp_v4 + 10) + temp_v3,
                       0x6a);
          FUN_002bf288(2,0x1d,0x46d,*(short *)(temp_v4 + 8) + temp_v2,*(short *)(temp_v4 + 10) + temp_v3,
                       0x6a);
          FUN_002bf288(2,0x1d,0x46e,*(short *)(temp_v4 + 8) + temp_v2,*(short *)(temp_v4 + 10) + temp_v3,
                       0x6a);
          temp_v5 = FUN_002bf4f8(0x1d,0x470);
          temp_v6 = temp_v10;
          FUN_002be650(temp_v10,0);
          if (temp_v6 != 0) {
            temp_v11 = 0xff;
            if ((temp_v14 == 0xb) && (temp_v7 = temp_v10, FUN_0028fc60(), temp_v7 == 0)) {
              temp_v11 = 0x5a5a5aff;
            }
            VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v3,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v2,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be5a4(2,temp_v11,temp_v6,(int)*(short *)(temp_v5 + 8));
          }
          temp_v5 = FUN_002bf4f8(0x1d,0x473);
          temp_v11 = FUN_0028fb40(temp_v10);
          FUN_002be624(temp_v13,&LAB_001976e8,temp_v11);
          FUN_002bdf94(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v2,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v3,1,3,0x6f,
                       temp_v13);
          temp_v5 = FUN_002bf4f8(0x1d,0x474);
          FUN_002bdf94(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v2,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v3,1,1,0x6f,
                       &LAB_001976f0);
          temp_v5 = FUN_002bf4f8(0x1d,0x46f);
          FUN_002be370((int)(short)temp_v0,
                       (int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v2,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v3,0x6f,0);
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < 0xb);
        FUN_0028f870(temp_v12,temp_v2,temp_v3,1);
        if (temp_v15 != 0) {
          temp_v9 = FUN_0029efc0(temp_v12);
          temp_v4 = FUN_0029efa8(temp_v12);
          temp_v0 = *(unsigned short *)(temp_v1 + (temp_v4 + temp_v9) * 2);
          temp_v10 = (unsigned int)temp_v0;
          temp_v1 = FUN_0029efa8(temp_v12);
          temp_v1 = FUN_002bf4f8(0x1d,temp_v1 + 0x42e);
          temp_v9 = FUN_0029efa8(temp_v12);
          FUN_0028f694(*(short *)(temp_v1 + 8) + temp_v2,*(short *)(temp_v1 + 10) + temp_v3,
                       (int)*(short *)(temp_v8 + temp_v9 * 2 + 0xe0c));
          temp_v8 = FUN_002bf4f8(0x1d,0x477);
          temp_v6 = temp_v10;
          FUN_002be650(temp_v10,0);
          if (temp_v6 != 0) {
            temp_v11 = 0xffffffff;
            if ((temp_v14 == 0xb) && (temp_v7 = temp_v10, FUN_0028fc60(), temp_v7 == 0)) {
              temp_v11 = 0x5a5a5aff;
            }
            VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v3,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v2,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be5a4(3,temp_v11,temp_v6,(int)*(short *)(temp_v8 + 8));
          }
          temp_v8 = FUN_002bf4f8(0x1d,0x47a);
          temp_v11 = FUN_0028fb40(temp_v10);
          FUN_002be624(temp_v13,&LAB_001976e8,temp_v11);
          FUN_002bdf94(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v2,
                       (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v3,1,3,0x83,
                       temp_v13);
          temp_v8 = FUN_002bf4f8(0x1d,0x47b);
          FUN_002bdf94(0,(int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v1 + 8) + temp_v2,
                       (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v3,1,1,0x83,
                       &LAB_001976f0);
          FUN_002bf288(2,0x1d,0x475,*(short *)(temp_v1 + 8) + temp_v2,*(short *)(temp_v1 + 10) + temp_v3,
                       0x83);
          temp_v8 = FUN_002bf4f8(0x1d,0x476);
          FUN_002be370((int)(short)temp_v0,
                       (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v1 + 8) + temp_v2,
                       (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v3,0x88,0);
        }
      default:
        return;
      case 0x11:
      case 0x12:
        FUN_001ae538(param_1,temp_v2,temp_v3,param_2);
        return;
      }
    }
    if (param_1 != 0x17) {
      if (param_1 >= 0x18) {
        if (param_1 == 0x27) {
          FUN_0018b49c(temp_v2,temp_v3,param_2);
          return;
        }
        if (param_1 != 0x29) {
          return;
        }
        FUN_00194b14();
        return;
      }
      if ((param_1 != 0x14 && param_1 != 0x15) && param_1 != 0x16) {
        return;
      }
    }
  }
  FUN_001ae538(param_1,temp_v2,temp_v3,param_2);
  return;
}

} /* extern "C" */
