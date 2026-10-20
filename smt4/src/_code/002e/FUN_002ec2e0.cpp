/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec2e0` (_code @ 0x2ec2e0, 0x228 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002598f0(...);
int FUN_00296ae8(...);
int FUN_0029a17c(int, int, int, int, int);
int FUN_002bd82c(...);
int FUN_002bf288(...);
int FUN_002bf380(int, int, int, int, int, int);
int FUN_002bf4f8(...);

typedef int romwright_code(...);
/* stack frame of param_7: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002598f0. */
/* Supplied declaration required: FUN_00296ae8. */
/* Supplied declaration required: FUN_0029a17c. */
/* Supplied declaration required: FUN_002bd82c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */


void FUN_002ec2e0(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5,
                 unsigned int param_6,int param_7)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  FUN_002bf4f8(0x39,0xe0);
  temp_v0 = FUN_002bf4f8(0x39,param_5 + 0xe6);
  FUN_002bf380(2,0x39,0x13,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0x1f);
  FUN_002bf288(2,0x39,0xdf,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0x21);
  FUN_002bf288(2,0x39,param_6,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0x22);
  temp_v1 = FUN_002bf4f8(0x39,0xe0);
  temp_v2 = g_titleScene;
  piVar5 = (int *)(g_titleScene + 0x130c);
  temp_v3 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = 3;
  if (*(char *)(temp_v2 + 0x1324) != '\0' || temp_v3 != 3) {
    (**(romwright_code **)(temp_v2 + 0x1328))();
    *(unsigned char *)(temp_v2 + 0x1324) = 0;
  }
  FUN_0029a17c((int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v1 + 8),
               (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10),
               (int)**(short **)(temp_v1 + 0xc),(int)(*(short **)(temp_v1 + 0xc))[1],1);
  FUN_002bf288(2,0x39,0xe2,*(short *)(temp_v0 + 8) + param_7,(int)*(short *)(temp_v0 + 10),0x65);
  temp_v2 = g_titleScene;
  piVar5 = (int *)(g_titleScene + 0x130c);
  temp_v1 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = 0;
  if (*(char *)(temp_v2 + 0x1324) != '\0' || temp_v1 != 0) {
    (**(romwright_code **)(temp_v2 + 0x1328))();
    *(unsigned char *)(temp_v2 + 0x1324) = 0;
  }
  temp_v2 = FUN_002bf4f8(0x39,0xe4);
  FUN_002bf288(2,0x39,0xe3,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0xd);
  FUN_00296ae8(param_1,3,0xffffffff,0,3,param_2,param_3 + param_5 + param_4);
  FUN_002bd82c(param_1,0xffffffff);
  FUN_002598f0(param_1,(int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8),
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v0 + 10),0x15);
  FUN_002bd82c(param_1,0x320202ff);
  return;
}

} /* extern "C" */
