/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031eba0` (_code @ 0x31eba0, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b04e8(int, unsigned int, int, int, int, unsigned int, int *);
int FUN_002b06c4(void);
int FUN_002b9024(...);
int FUN_00389f74(unsigned int, unsigned int, int, unsigned int, int, int, unsigned int, int);

/* stack frame of param_9: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_9_stack;

extern unsigned int g_aocSystem; /* 0x433158 */

extern int FUN_00248674(unsigned int, unsigned int, unsigned int);
extern int FUN_002a60b4(unsigned int);
/* Supplied declaration required: FUN_002b04e8. */
/* Supplied declaration required: FUN_002b06c4. */
/* Supplied declaration required: FUN_002b9024. */
extern unsigned short *FUN_002bf4f8(unsigned int, int);
/* Supplied declaration required: FUN_00389f74. */


void FUN_0031eba0(unsigned int param_1,int param_2,int param_3,unsigned int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int uStack_34;
  int iStack_30;
  int temp_v10;
  unsigned int temp_v11;
  
  temp_v5 = 0x17;
  temp_v3 = param_1;
  uStack_34 = param_1;
  iStack_30 = param_2;
  temp_v10 = param_3;
  temp_v11 = param_4;
  if (param_5 != 0) {
    if ((int)param_1 < 0) {
      temp_v3 = 0;
    }
    else {
      temp_v3 = param_1 & 0xffff;
      FUN_002b9024();
      if (temp_v3 == 0) {
        return;
      }
      temp_v0 = param_1;
      FUN_002b06c4();
      if ((*(unsigned char *)(temp_v0 + 3) & 1) != 0) {
        temp_v3 = (unsigned int)*(short *)(temp_v0 + 0x88);
        temp_v5 = 0x23;
        if ((int)temp_v3 >= 0x81) {
          return;
        }
      }
      else {
        temp_v3 = *(unsigned short *)(temp_v3 + 0x90) + 1;
        if (temp_v3 >= 0x266) {
          return;
        }
      }
    }
  }
  temp_v4 = 0x17;
  if ((param_5 != 0) && (-1 < (int)param_1)) {
    temp_v0 = param_1;
    FUN_002b9024(temp_v0,param_1);
    if (temp_v0 == 0) {
      return;
    }
    temp_v1 = param_1;
    FUN_002b06c4();
    if ((*(unsigned char *)(temp_v1 + 3) & 1) != 0) {
      temp_v4 = 0x23;
      if (*(short *)(temp_v1 + 0x88) >= 0x81) {
        return;
      }
    }
    else if (*(unsigned short *)(temp_v0 + 0x90) + 1 >= 0x266) {
      return;
    }
  }
  temp_v2 = FUN_002a60b4(temp_v4);
  if (temp_v2 != 0) {
    temp_v2 = FUN_00248674(g_aocSystem,temp_v5,temp_v3);
    if (temp_v2 == 0) {
      temp_v2 = temp_v3 * 1000 + 1;
      puVar4 = (unsigned short *)FUN_002bf4f8(temp_v5,temp_v2);
      temp_v8 = (unsigned int)*puVar4 + (param_6 - param_2);
      temp_v9 = temp_v8 + param_8;
      temp_v6 = (unsigned int)puVar4[1] + (param_7 - temp_v10);
      temp_v7 = temp_v6 + param_9;
      FUN_002b04e8(2,temp_v5,temp_v2,param_6,param_7,temp_v11,&temp_v6);
      return;
    }
    temp_v6 = param_7;
    temp_v7 = param_8;
    temp_v8 = param_9;
    FUN_00389f74(g_aocSystem,param_1,2,temp_v3,param_2,temp_v10,temp_v11,param_6);
  }
  return;
}

} /* extern "C" */
