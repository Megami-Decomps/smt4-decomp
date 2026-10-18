/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00251fd8` (_code @ 0x251fd8, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00251fd8_arg0 fn_00251fd8_arg0;
struct fn_00251fd8_arg0 {
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
    void *field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
    void *field_0x34; /* +0x34 */
};

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: coprocessor_loadlong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a89e4. */
extern unsigned int FUN_002b0788(int);
extern int *FUN_002b5498(int, unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_002b66ec. */
/* Supplied declaration required: FUN_002b6a98. */
/* Supplied declaration required: FUN_002b7118. */
extern unsigned int FUN_002bd258(unsigned short);
extern unsigned int FUN_002bd3ec(void);
extern int *FUN_002be16c(unsigned int, int, int, unsigned int);
/* Supplied declaration required: FUN_002be4dc. */
extern int *FUN_002be77c(unsigned int, unsigned int, int *);
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf460. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf710. */


/* WARNING: Control flow encountered bad instruction data */

int * FUN_00251fd8(fn_00251fd8_arg0 *param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr1, in_fpscr, in_pc; 14 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int *piVar8;
  unsigned char temp_v7;
  int temp_v8;
  romwright_code *pcVar10;
  unsigned int unaff_r5;
  unsigned char temp_v9;
  int in_pc;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  unsigned int in_cr1;
  int temp_v11 [2];
  unsigned char *puStack_48;
  unsigned char temp_v12 [40];
  
  piVar8 = temp_v11;
  param_3 = (int)param_1->field_0x2c + param_3;
  param_4 = param_1->field_0x30 + param_4;
  if (param_1->field_0x22 != 0) {
    return param_1->field_0x2c;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        if (param_2 == 3) {
          if ((int *)(unsigned int)param_1->field_0x20 != (int *)0x0) {
            return (int *)(unsigned int)param_1->field_0x20;
          }
          if ((int)param_1->field_0x34 < 0) {
            FUN_002b66ec();
            temp_v5 = FUN_002bd3ec();
            FUN_002be7fc(temp_v11,0x2523ac,temp_v5);
          }
          else {
            temp_v3 = FUN_002a89e4();
            if (temp_v3 != 0) {
              temp_v5 = FUN_002bd258(*(unsigned short *)(temp_v3 + 0x46));
              FUN_002be7fc(temp_v11,0x2523ac,temp_v5);
            }
          }
          temp_v3 = FUN_002bf6d0(0x19,0x11);
          FUN_002b7118(temp_v11,1);
          temp_v1 = *(short *)(temp_v3 + 8);
          temp_v2 = **(short **)(temp_v3 + 0xc);
          temp_v5 = 0xffffffff;
          if ((int)param_1->field_0x34 < 0) {
            temp_v6 = FUN_002b66ec();
            temp_v0 = *(unsigned short *)(temp_v6 + 0x72);
          }
          else {
            temp_v6 = FUN_002a89e4(param_1->field_0x34,(int)temp_v1,(int)temp_v2);
            temp_v0 = *(unsigned short *)(temp_v6 + 0x44);
          }
          if ((temp_v0 & 2) != 0) {
            temp_v5 = 0xdc0f14ff;
          }
          VectorSignedToFloat(param_3 + (int)temp_v1 + ((int)temp_v2 - (int)piVar8) / 2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v3 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
          piVar8 = (int *)FUN_002be77c(1,temp_v5,temp_v11);
          return piVar8;
        }
        if (param_2 != 4) {
          return (int *)0x65;
        }
        temp_v9 = 0;
        if ((int *)(unsigned int)param_1->field_0x20 != (int *)0x0) {
          return (int *)(unsigned int)param_1->field_0x20;
        }
        if ((int)param_1->field_0x34 < 0) {
          temp_v3 = FUN_002b66ec();
          temp_v9 = *(unsigned char *)(temp_v3 + 0x76);
        }
        else {
          temp_v3 = FUN_002a89e4();
          if (temp_v3 != 0) {
            temp_v9 = *(unsigned char *)(temp_v3 + 0x48);
          }
        }
        FUN_002be7fc(temp_v12,0x2523bc,temp_v9);
        temp_v3 = FUN_002bf6d0(0x19,0x15);
        puStack_48 = temp_v12;
        temp_v11[0] = 2;
        temp_v11[1] = 0x79;
        piVar8 = (int *)FUN_002be16c(0,*(short *)(temp_v3 + 8) + param_3,
                                     *(short *)(temp_v3 + 10) + param_4,1);
        return piVar8;
      }
      temp_v3 = 0;
      if ((int *)(unsigned int)param_1->field_0x20 != (int *)0x0) {
        return (int *)(unsigned int)param_1->field_0x20;
      }
      if ((int)param_1->field_0x34 < 0) {
        FUN_002b66ec();
        temp_v3 = -1;
      }
      else {
        temp_v6 = FUN_002a89e4();
        if (temp_v6 != 0) {
          temp_v3 = (int)*(short *)(temp_v6 + 0x46);
        }
      }
      temp_v5 = 0xffffffff;
      if (param_1->field_0x23 == '\0') {
        if ((int)param_1->field_0x34 < 0) {
          temp_v6 = FUN_002b66ec();
          temp_v0 = *(unsigned short *)(temp_v6 + 0x72);
        }
        else {
          temp_v6 = FUN_002a89e4();
          temp_v0 = *(unsigned short *)(temp_v6 + 0x44);
        }
        temp_v4 = 1;
        temp_v6 = 0;
        do {
          if (((unsigned int)temp_v0 & (1 << (temp_v4 & 0xff))) != 0) {
            if (*(int *)&param_1->field_0x1c == temp_v6) {
              temp_v5 = FUN_002b0788((int)(short)temp_v4);
              break;
            }
            temp_v6 = temp_v6 + 1;
          }
          temp_v4 = temp_v4 + 1;
        } while ((int)temp_v4 < 0xb);
      }
      FUN_002be4dc(temp_v5);
      if (param_1->field_0x23 != '\0') {
        FUN_002bf710();
      }
      temp_v6 = FUN_002bf6d0(0x19,0x13);
      temp_v11[0] = 0;
      pcVar10 = (romwright_code *)0x6a;
      FUN_002b6a98(temp_v3,*(short *)(temp_v6 + 8) + param_3,*(short *)(temp_v6 + 10) + param_4);
      if (param_1->field_0x23 == '\0') {
        return (int *)0x0;
      }
      coprocessor_loadlong(0,in_cr1,in_pc + 4);
      temp_v3 = (*pcVar10)(0);
      if (temp_v3 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)FUN_002b5498(temp_v3,unaff_r5,0,temp_v8 << 4);
      }
      (**(romwright_code **)(*piVar8 + 0x24))(piVar8,unaff_r5);
      return piVar8;
    }
    if (param_1->field_0x20 != 0) {
      if (param_1->field_0x21 == 0) {
        return (int *)0x0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    temp_v11[1] = 0x65;
    temp_v11[0] = param_4;
    FUN_002bf460(2,0x19,2,param_3);
    temp_v9 = 3;
    temp_v11[1] = 0x6f;
  }
  else {
    temp_v7 = param_1->field_0x25;
    temp_v10 = temp_v7 == 0;
    if (temp_v10) {
      temp_v7 = param_1->field_0x27;
    }
    temp_v11[1] = 0x65;
    temp_v9 = !temp_v10 || temp_v7 != 0;
  }
  temp_v11[0] = param_4;
  piVar8 = (int *)FUN_002bf460(2,0x19,temp_v9,param_3);
  return piVar8;
}
