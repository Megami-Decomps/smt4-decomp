/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00251d98` (_code @ 0x251d98, 0x3d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00251d98_arg0 fn_00251d98_arg0;
struct fn_00251d98_arg0 {
    unsigned char pad_0x0[0x1c];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    byte field_0x20; /* +0x20 */
    byte field_0x21; /* +0x21 */
    byte field_0x22; /* +0x22 */
    unsigned char field_0x23; /* +0x23 */
    unsigned char pad_0x24[0x1];
    byte field_0x25; /* +0x25 */
    unsigned char pad_0x26[0x1];
    byte field_0x27; /* +0x27 */
    unsigned char pad_0x28[0x4];
    int field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
    void *field_0x34; /* +0x34 */
};

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

extern unsigned char LAB_0025216c; /* 0x25216c */
extern unsigned char LAB_0025217c; /* 0x25217c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a8740. */
extern unsigned int FUN_002b05d0(int);
/* Supplied declaration required: FUN_002b63ac. */
/* Supplied declaration required: FUN_002b6758. */
/* Supplied declaration required: FUN_002b6dd8. */
extern unsigned int FUN_002bd068(unsigned short);
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be304. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */


void FUN_00251d98(fn_00251d98_arg0 *param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  int temp_v10 [2];
  unsigned char *puStack_48;
  unsigned char temp_v11 [40];
  
  piVar7 = temp_v10;
  param_3 = param_1->field_0x2c + param_3;
  param_4 = param_1->field_0x30 + param_4;
  if (param_1->field_0x22 == 0) {
    if (param_2 != 0) {
      if (param_2 != 1) {
        if (param_2 != 2) {
          if (param_2 == 3) {
            if (param_1->field_0x20 != 0) {
              return;
            }
            if ((int)param_1->field_0x34 < 0) {
              FUN_002b63ac();
              temp_v5 = FUN_002bd1fc();
              FUN_002be624(temp_v10,&LAB_0025216c,temp_v5);
            }
            else {
              temp_v3 = FUN_002a8740();
              if (temp_v3 != 0) {
                temp_v5 = FUN_002bd068(*(unsigned short *)(temp_v3 + 0x46));
                FUN_002be624(temp_v10,&LAB_0025216c,temp_v5);
              }
            }
            temp_v3 = FUN_002bf4f8(0x19,0x11);
            FUN_002b6dd8(temp_v10,1);
            temp_v1 = *(short *)(temp_v3 + 8);
            temp_v2 = **(short **)(temp_v3 + 0xc);
            temp_v5 = 0xffffffff;
            if ((int)param_1->field_0x34 < 0) {
              temp_v6 = FUN_002b63ac();
              temp_v0 = *(unsigned short *)(temp_v6 + 0x72);
            }
            else {
              temp_v6 = FUN_002a8740(param_1->field_0x34,(int)temp_v1,(int)temp_v2);
              temp_v0 = *(unsigned short *)(temp_v6 + 0x44);
            }
            if ((temp_v0 & 2) != 0) {
              temp_v5 = 0xdc0f14ff;
            }
            VectorSignedToFloat(param_3 + (int)temp_v1 + ((int)temp_v2 - (int)piVar7) / 2,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(*(short *)(temp_v3 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be5a4(1,temp_v5,temp_v10);
            return;
          }
          if (param_2 != 4) {
            return;
          }
          temp_v8 = 0;
          if (param_1->field_0x20 != 0) {
            return;
          }
          if ((int)param_1->field_0x34 < 0) {
            temp_v3 = FUN_002b63ac();
            temp_v8 = *(unsigned char *)(temp_v3 + 0x76);
          }
          else {
            temp_v3 = FUN_002a8740();
            if (temp_v3 != 0) {
              temp_v8 = *(unsigned char *)(temp_v3 + 0x48);
            }
          }
          FUN_002be624(temp_v11,&LAB_0025217c,temp_v8);
          temp_v3 = FUN_002bf4f8(0x19,0x15);
          puStack_48 = temp_v11;
          temp_v10[0] = 2;
          temp_v10[1] = 0x79;
          FUN_002bdf94(0,*(short *)(temp_v3 + 8) + param_3,*(short *)(temp_v3 + 10) + param_4,1);
          return;
        }
        temp_v3 = 0;
        if (param_1->field_0x20 != 0) {
          return;
        }
        if ((int)param_1->field_0x34 < 0) {
          FUN_002b63ac();
          temp_v3 = -1;
        }
        else {
          temp_v6 = FUN_002a8740();
          if (temp_v6 != 0) {
            temp_v3 = (int)*(short *)(temp_v6 + 0x46);
          }
        }
        temp_v5 = 0xffffffff;
        if (param_1->field_0x23 == '\0') {
          if ((int)param_1->field_0x34 < 0) {
            temp_v6 = FUN_002b63ac();
            temp_v0 = *(unsigned short *)(temp_v6 + 0x72);
          }
          else {
            temp_v6 = FUN_002a8740();
            temp_v0 = *(unsigned short *)(temp_v6 + 0x44);
          }
          temp_v4 = 1;
          temp_v6 = 0;
          do {
            if (((unsigned int)temp_v0 & (1 << (temp_v4 & 0xff))) != 0) {
              if (*(int *)&param_1->field_0x1c == temp_v6) {
                temp_v5 = FUN_002b05d0((int)(short)temp_v4);
                break;
              }
              temp_v6 = temp_v6 + 1;
            }
            temp_v4 = temp_v4 + 1;
          } while ((int)temp_v4 < 0xb);
        }
        FUN_002be304(temp_v5);
        if (param_1->field_0x23 != '\0') {
          FUN_002bf538();
        }
        temp_v6 = FUN_002bf4f8(0x19,0x13);
        temp_v10[0] = 0;
        FUN_002b6758(temp_v3,*(short *)(temp_v6 + 8) + param_3,*(short *)(temp_v6 + 10) + param_4,0x6a);
        if (param_1->field_0x23 == '\0') {
          return;
        }
        FUN_002bf538();
        return;
      }
      if (param_1->field_0x20 != 0) {
        if (param_1->field_0x21 == 0) {
          return;
        }
        temp_v8 = 0xe;
        temp_v10[1] = 0x6f;
      }
      else {
        temp_v10[1] = 0x65;
        temp_v10[0] = param_4;
        FUN_002bf288(2,0x19,2,param_3);
        temp_v8 = 3;
        temp_v10[1] = 0x6f;
      }
    }
    else {
      temp_v7 = param_1->field_0x25;
      temp_v9 = temp_v7 == 0;
      if (temp_v9) {
        temp_v7 = param_1->field_0x27;
      }
      temp_v10[1] = 0x65;
      temp_v8 = !temp_v9 || temp_v7 != 0;
    }
    temp_v10[0] = param_4;
    FUN_002bf288(2,0x19,temp_v8,param_3);
  }
  return;
}
