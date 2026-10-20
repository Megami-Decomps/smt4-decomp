/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003be334` (_code @ 0x3be334, 0x300 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00247478(unsigned char [29], int, int);
int FUN_0027da30(int, int);
int FUN_00282924(...);
int FUN_002a8740(int);
int FUN_002ae164(void);
int FUN_002b4670(void);
int FUN_003be918(unsigned int, unsigned int, int, int, int);
int SBORROW4(unsigned int, int);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_6: 8 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned char sp49; /* 0x49: local_49 */
    unsigned char sp4A; /* 0x4a: local_4a */
    unsigned char sp4B; /* 0x4b: local_4b */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_0023eae0(unsigned int);
/* Supplied declaration required: FUN_00247478. */
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: FUN_00282924. */
extern int FUN_002939f4(void);
extern int FUN_0029ebac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a8740. */
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002b4670. */
/* Supplied declaration required: FUN_003be918. */


unsigned int FUN_003be334(int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                 int param_6)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  unsigned char temp_v9 [29];
  char temp_v10;
  char temp_v11;
  char temp_v12;
  char temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int uStack_2c;
  int iStack_28;
  
  temp_v14 = param_1;
  temp_v15 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  temp_v0 = FUN_002939f4();
  temp_v1 = temp_v15;
  FUN_002ae164();
  FUN_002b4670();
  temp_v3 = temp_v0;
  FUN_00282924(temp_v0,param_5);
  temp_v2 = temp_v0;
  FUN_00282924(temp_v0,param_6);
  FUN_00247478(temp_v9,temp_v0,temp_v3);
  temp_v5 = 0xffffffff;
  temp_v6 = 1;
  if ((temp_v11 != '\0') || (temp_v10 == '\0')) {
    if (temp_v1 != 0) {
      if ((*(unsigned int *)(temp_v1 + 0x38) & 0x7f0000) == 0) {
        VectorUnsignedToFloat((unsigned int)*(unsigned short *)(temp_v1 + 0x2c),(unsigned char)(in_fpscr >> 0x16) & 3);
        switch(*(unsigned char *)(temp_v1 + 0x23)) {
        case 1:
          if ((*(unsigned int *)(temp_v1 + 0x38) & 0x8000) != 0) {
            temp_v6 = 0;
            temp_v5 = (int)*(short *)(temp_v2 + 0x1b8) / 2;
          }
          else if (temp_v11 != '\0') {
            temp_v5 = temp_v15;
            FUN_003be918(temp_v15,param_5,param_6,(int)temp_v13,(int)temp_v12);
            if ((temp_v11 != '\0') && (temp_v5 = (int)temp_v5 / 3, (int)temp_v5 >= 101)) {
              temp_v5 = 100;
            }
            if ((*(unsigned short *)(temp_v3 + 0x1c6) & 0x200) != 0) {
              temp_v5 = temp_v5 - (int)(temp_v5 * 0x19) / 100;
            }
            if ((*(unsigned short *)(temp_v2 + 0x1c6) & 0x80) != 0) {
              temp_v5 = temp_v5 + (int)(temp_v5 * 0x19) / 100;
            }
          }
        }
        if (((((*(unsigned int *)(temp_v0 + 0x44a0) & 0x40000) == 0) && (temp_v6)) && (0 < (int)temp_v5)) &&
           (((*(unsigned int *)(temp_v0 + 0x44ac) & 0x40) == 0 &&
            ((*(unsigned int *)(temp_v0 + 0xe0) & 0x20000000) == 0)))) {
          temp_v3 = FUN_0023eae0(0xf);
          temp_v5 = temp_v5 + temp_v3;
        }
        if (temp_v14 == 0) {
          return 0xffffffff;
        }
        if (temp_v11 == '\0') {
          return temp_v5;
        }
        if ((int)temp_v5 <= (int)*(short *)(temp_v2 + 0x1b8)) {
          return temp_v5;
        }
        return (int)*(short *)(temp_v2 + 0x1b8);
      }
    }
    else if (param_4 != 0) {
      temp_v5 = 0xffffffff;
      if (*(unsigned short *)(param_4 + 0x66) != 0) {
        temp_v5 = (unsigned int)*(unsigned short *)(param_4 + 0x66);
      }
      if (*(char *)(param_4 + 0x69) != '\0') {
        temp_v8 = 0.01f;
        if (param_6 < 0x6d) {
          FUN_0027da30(temp_v0,param_6);
          temp_v7 = (float)VectorSignedToFloat((int)*(short *)(temp_v0 + 0xee) *
                                             (int)(short)(unsigned short)*(unsigned char *)(param_4 + 0x69),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v5 = (unsigned int)(temp_v7 * temp_v8);
        }
        else {
          temp_v3 = FUN_002a8740(param_6 - 0x6d);
          temp_v7 = (float)VectorSignedToFloat((int)*(short *)(temp_v3 + 0x10) *
                                             (int)(short)(unsigned short)*(unsigned char *)(param_4 + 0x69),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v5 = (unsigned int)(temp_v7 * temp_v8);
        }
      }
      if (temp_v14 != 0) {
        return 0xffffffff;
      }
      if (param_6 < 0x6d) {
        if ((*(unsigned short *)(temp_v2 + 0x1c6) & 8) == 0 || (int)temp_v5 < 2) {
          return temp_v5;
        }
      }
      else {
        temp_v4 = FUN_002a8740(param_6 - 0x6d);
        temp_v3 = FUN_0029ebac(temp_v4,3);
        temp_v6 = temp_v3 != 0;
        temp_v3 = 0;
        if (temp_v6) {
          temp_v3 = temp_v5 - 1;
        }
        if ((!temp_v6 || temp_v5 == 1) || temp_v3 < 0 != (temp_v6 && SBORROW4(temp_v5,1))) {
          return temp_v5;
        }
      }
      return 1;
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
