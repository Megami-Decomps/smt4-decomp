/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288b20` (_code @ 0x288b20, 0x768 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int FUN_00164b5c(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00185e84(...);
int FUN_001aba54(void);
int unitRecordBuild(...);
int FUN_0035ad50(...);
int FUN_00389d9c(...);
int FUN_004bd6b0(...);
int VectorSignedToFloat(...);
int rt_memcpy_w(...);

/* stack frame of param_9: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1C0; /* 0x1c0: local_1c0 */
    unsigned int sp1C4; /* 0x1c4: local_1c4 */
    unsigned int sp1C8; /* 0x1c8: local_1c8 */
} param_9_stack;

extern unsigned char LAB_00288ef0; /* 0x288ef0 */
extern unsigned char LAB_00288efc; /* 0x288efc */
extern unsigned char LAB_00288f34; /* 0x288f34 */
extern unsigned char LAB_00289298; /* 0x289298 */
extern unsigned char LAB_0028929c; /* 0x28929c */
extern int DAT_00588fe8; /* 0x588fe8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014bd84(int);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00185e84. */
extern int slotRecordFindById(void);
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_002a4894(void);
extern unsigned int FUN_002a6a24(int);
extern int FUN_002c2c68(int);
extern int FUN_002c7e3c(void);
/* Supplied declaration required: unitRecordBuild. */
/* Supplied declaration required: FUN_0035ad50. */
/* Supplied declaration required: FUN_00389d9c. */
extern unsigned int FUN_003df57c(int, unsigned int);
extern int FUN_004bca68(unsigned char *, int);
extern unsigned int FUN_004bcbb4(unsigned char *, int);
/* Supplied declaration required: FUN_004bd6b0. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00288b20(int param_1,int param_2,int param_3,int param_4,unsigned int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  unsigned int temp_v10;
  unsigned char temp_v11 [300];
  int temp_v12;
  unsigned char temp_v13 [64];
  unsigned int temp_v14;
  unsigned int temp_v15;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int temp_v16;
  
  temp_v0 = DAT_00588fe8;
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  temp_v16 = param_4;
  temp_v1 = FUN_001834a4(0x12,param_4);
  temp_v12 = temp_v0 + 0x5ec;
  temp_v2 = FUN_002a4894();
  temp_v10 = 0;
  efctSetSpeed();
  FUN_00164b5c(2,0x12,8,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xbf);
  efctSetSpeed();
  FUN_001835b4(2,0x12,0x41f,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4);
  temp_v3 = *(int *)(temp_v0 + 0x530);
  temp_v8 = temp_v3 != 0;
  if (!temp_v8) {
    temp_v3 = *(int *)(temp_v0 + 0x534);
  }
  if (!(temp_v8 || temp_v3 != 0)) {
    temp_v3 = *(int *)(temp_v0 + 0x538);
    temp_v8 = temp_v3 == 0;
    if (temp_v8) {
      temp_v3 = *(int *)(temp_v0 + 0x53c);
    }
    temp_v9 = temp_v8 && temp_v3 == 0;
    if (temp_v8 && temp_v3 == 0) {
      temp_v9 = *(int *)(temp_v0 + 0x540) == 0;
    }
    if ((!temp_v9) || (*(int *)(temp_v0 + 0x52c) < 0)) goto LAB_00288c34;
    temp_v5 = 0x5a5;
    temp_v6 = 0xf5ff9fff;
    temp_v7 = 0x5a6;
    temp_v15 = 0x5a7;
    temp_v14 = 0x5a8;
  }
  else {
LAB_00288c34:
    temp_v5 = 0x420;
    temp_v6 = 0x9fe7ffff;
    temp_v15 = 0x422;
    temp_v7 = 0x421;
    temp_v14 = 0x59c;
  }
  FUN_001835b4(2,0x12,temp_v5,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4);
  FUN_001835b4(2,0x12,temp_v7,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4);
  FUN_001835b4(2,0x12,temp_v15,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4
              );
  efctSetSpeed();
  FUN_001835b4(2,0x12,temp_v14,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4
              );
  efctSetSpeed();
  temp_v5 = 0x57d8ffff;
  if ((param_8 != 1) && (temp_v5 = temp_v6, param_8 == 2)) {
    temp_v5 = 0xdc0f14ff;
  }
  if (param_9 == 0) {
    temp_v3 = *(int *)(temp_v0 + 0x518);
    if ((temp_v3 != 0xe) && (temp_v3 != 0x11)) {
      if (((!(temp_v3 == 7 || temp_v3 == 0xc)) && (*(char *)(temp_v0 + 0x660) != '\0')) &&
         (*(int *)(temp_v0 + 0x664) == temp_v2)) {
        temp_v5 = 0x57d8ffff;
      }
    }
    else if ((*(int *)(temp_v0 + 0x65c) == temp_v2) ||
            (temp_v3 = FUN_002c2c68(temp_v12), temp_v3 - 1 == temp_v2)) {
      temp_v5 = 0x57d8ffff;
    }
    else {
      temp_v5 = 0x9b9b9bff;
    }
  }
  else {
    temp_v5 = 0x9b9b9bff;
  }
  temp_v3 = FUN_001834a4(0x12,0x42b);
  if ((param_7 == 0) || (param_3 != 0)) {
    if (param_6 != 0) {
      FUN_00100388(temp_v13,&LAB_00288ef0);
    }
    else {
      temp_v6 = FUN_0014bd84(param_3);
      FUN_00100388(temp_v13,&LAB_00288f34,temp_v6);
    }
  }
  else {
    FUN_00100388(temp_v13,&LAB_00288efc);
    temp_v5 = 0x9b9b9bff;
  }
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v3 + 8) + param_1,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,temp_v5,temp_v13,(int)*(short *)(temp_v3 + 8));
  if ((-1 < *(short *)(temp_v0 + 0x598)) && (temp_v3 = FUN_002c7e3c(), temp_v3 != 4)) {
    temp_v3 = FUN_002c7e3c();
    if (temp_v3 != 5) {
      temp_v3 = slotRecordFindById();
      if (temp_v3 != 0) {
        rt_memcpy_w(temp_v11,temp_v3,300);
      }
      else {
        unitRecordBuild(*(unsigned short *)(temp_v0 + 0x598),temp_v11);
      }
    }
    else {
      FUN_0035ad50(*(unsigned short *)(temp_v0 + 0x598),temp_v11);
    }
    temp_v3 = FUN_004bca68(temp_v11,param_3);
    if (temp_v3 == 0) {
      FUN_004bd6b0(temp_v11,param_3,temp_v16 - 0x42c);
    }
  }
  if ((param_7 == 0) || (param_3 != 0)) {
    FUN_001835b4(2,0x12,0x425,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4)
    ;
    temp_v3 = FUN_001834a4(0x12,0x42a);
    temp_v2 = (int)(short)param_3;
    FUN_00185e84(temp_v2,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v3 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,0xc9,param_5,0)
    ;
    if ((-1 < *(short *)(temp_v0 + 0x598)) && (temp_v4 = FUN_002c7e3c(), temp_v4 != 4)) {
      if ((*(int *)(temp_v0 + 0x518) == 0xe) &&
         (temp_v4 = FUN_004bca68(temp_v11,param_3), temp_v4 == 0)) {
        FUN_004bd6b0(temp_v11,param_3,0);
      }
      FUN_00389d9c(temp_v11,temp_v2,
                   (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v3 + 8) + param_1,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0xc9,0);
    }
  }
  if (param_6 == 0) {
    if (param_7 != 0) {
      FUN_001835b4(2,0x12,0x522,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0xc4);
      temp_v3 = FUN_001834a4(0x12,0x52a);
      if (param_3 != 0) {
        temp_v5 = FUN_002a6a24(param_3);
        FUN_00180310(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v3 + 8) + param_1,
                     (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,8,0xc9,
                     &LAB_00289298,temp_v5);
      }
      else {
        FUN_00100388(temp_v13,&LAB_0028929c);
        FUN_00180310(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v3 + 8) + param_1,
                     (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,8,0xc9,
                     temp_v13);
      }
    }
    else {
      FUN_001835b4(2,0x12,0x423,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0xc4);
      if (*(short *)(temp_v0 + 0x598) < 0) {
        temp_v10 = FUN_003df57c(param_3,1);
      }
      else {
        temp_v3 = FUN_002c7e3c();
        if (temp_v3 != 7) {
          temp_v10 = FUN_004bcbb4(temp_v11,param_3);
        }
        else {
          FUN_001aba54();
          if (param_3 != 0) {
            temp_v10 = (unsigned int)*(unsigned char *)(param_3 + 0x22);
          }
        }
      }
      temp_v3 = FUN_001834a4(0x12,0x429);
      FUN_00180310(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                   (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,1,4,0xc9,
                   &LAB_00289298,temp_v10);
    }
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
