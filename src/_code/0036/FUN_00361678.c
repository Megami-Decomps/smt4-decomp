/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00361678` (_code @ 0x361678, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_9: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_9_stack;

extern int FUN_003617f8(); /* 0x3617f8 */
extern int DAT_0044e368; /* 0x44e368 */
extern int DAT_0044e7d0; /* 0x44e7d0 */
extern unsigned int DAT_0044e7d8; /* 0x44e7d8 */
extern unsigned int DAT_0044e7dc; /* 0x44e7dc */
extern unsigned char DAT_004d4618; /* 0x4d4618 */
extern int DAT_004d462c; /* 0x4d462c */

/* Supplied declaration required: FUN_002a3198. */
/* Supplied declaration required: FUN_002a7f28. */
extern int FUN_002a808c(unsigned int);
/* Supplied declaration required: FUN_002c0d50. */
extern int FUN_002c52f8(void);
/* Supplied declaration required: FUN_0035750c. */
extern int FUN_0036133c(int, int, int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003618b8. */


unsigned int
FUN_00361678(unsigned char *param_1,int param_2,int param_3,int param_4,unsigned int param_5,
            unsigned int param_6,unsigned int param_7,unsigned int param_8,int param_9)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned int temp_v6 [2];
  
  temp_v3 = DAT_0044e368;
  temp_v5 = 0;
  temp_v6[0] = 0;
  temp_v0 = FUN_0036133c(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002a808c(0x401);
    temp_v0 = 0;
    if (temp_v1 < 0) {
      temp_v0 = -0x375f3004;
    }
    if (temp_v1 < 0 && temp_v1 != temp_v0) {
      temp_v1 = FUN_002c52f8();
    }
    if (param_3 != 0 && param_4 != 0) {
      temp_v1 = *(int *)(param_2 + 0x130);
    }
    if ((param_3 != 0 && param_4 != 0) && temp_v1 != 0) {
      FUN_0035750c(&DAT_004d4618,param_3,param_4,3,3);
      temp_v3 = DAT_004d462c;
    }
    temp_v4 = (*(unsigned int *)(param_2 + 0x18) & 0x20) != 0;
    if (temp_v4) {
      DAT_0044e7d0 = param_9;
    }
    if (temp_v4 && param_9 != 0) {
      FUN_003618b8(FUN_003617f8,0);
    }
    FUN_002a7f28(0x401,param_2,0x400,temp_v3);
    puVar3 = temp_v6;
    FUN_002c0d50(puVar3,param_2,0x400,&temp_v5,0,param_7,DAT_0044e7d8,DAT_0044e7dc);
    *param_1 = (char)puVar3;
    if (DAT_004d462c != 0) {
      FUN_002a3198(&DAT_004d4618);
    }
    temp_v2 = 1;
  }
  return temp_v2;
}
