/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028f870` (_code @ 0x28f870, 0x2a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029a17c(...);
int FUN_0029ee54(unsigned int);
int FUN_002bf288(...);

typedef int romwright_code(...);
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern int g_camp; /* 0x43da90 */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_0029a17c. */
extern int FUN_0029d644(unsigned int);
extern int ifTouchGetSelectionModeForRegion(int);
/* Supplied declaration required: FUN_0029ee54. */
extern int FUN_0029efc0(unsigned int);
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
extern int __aeabi_idivmod(int, unsigned int);


void FUN_0028f870(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int *piVar10;
  
  temp_v2 = g_camp;
  temp_v0 = ifTouchGetSelectionModeForRegion((int)*(short *)(g_camp + 0xe04));
  temp_v1 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0xe06));
  temp_v2 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0xe02));
  if (param_4 != 0) {
    temp_v3 = FUN_0029ee54(param_1);
    if (temp_v3 < 0xc) {
      return;
    }
    FUN_002bf288(2,0x1d,0x41c,param_2,param_3,0x6f);
    temp_v7 = 0x418;
    temp_v8 = 0x419;
    if (temp_v0 != 0) {
      temp_v7 = 0x41a;
    }
    if (temp_v1 != 0) {
      temp_v8 = 0x41b;
    }
  }
  else {
    temp_v3 = FUN_0029ee54(param_1);
    if (temp_v3 < 10) {
      return;
    }
    FUN_002bf288(2,0x1d,0x423,param_2,param_3,0x6f);
    temp_v7 = 0x41f;
    temp_v8 = 0x420;
    if (temp_v0 != 0) {
      temp_v7 = 0x421;
    }
    if (temp_v1 != 0) {
      temp_v8 = 0x422;
    }
  }
  FUN_002bf288(2,0x1d,temp_v7,param_2,param_3,0x6f);
  FUN_002bf288(2,0x1d,temp_v8,param_2,param_3,0x6f);
  if (param_4 != 0) {
    temp_v0 = FUN_002bf4f8(0x1d,0x41d);
  }
  else {
    temp_v0 = FUN_002bf4f8(0x1d,0x424);
  }
  temp_v7 = FUN_0029ee54(param_1);
  temp_v1 = __aeabi_idivmod((int)*(short *)(*(int *)(temp_v0 + 0xc) + 2) << 0xc,temp_v7);
  temp_v3 = FUN_0029d644(param_1);
  temp_v1 = temp_v1 * temp_v3 >> 0xc;
  if (temp_v1 < 1) {
    temp_v1 = 1;
  }
  temp_v7 = FUN_0029ee54(param_1);
  temp_v4 = __aeabi_idivmod((int)*(short *)(*(int *)(temp_v0 + 0xc) + 2) << 0xc,temp_v7);
  temp_v5 = FUN_0029efc0(param_1);
  temp_v3 = g_titleScene;
  piVar10 = (int *)(g_titleScene + 0x130c);
  temp_v6 = piVar10[*piVar10 + 2];
  piVar10[*piVar10 + 2] = 3;
  if (*(char *)(temp_v3 + 0x1324) != '\0' || temp_v6 != 3) {
    (**(romwright_code **)(temp_v3 + 0x1328))();
    *(unsigned char *)(temp_v3 + 0x1324) = 0;
  }
  FUN_0029a17c(param_2 + *(short *)(temp_v0 + 8),
               (int)*(short *)(temp_v0 + 10) + param_3 + (temp_v4 * temp_v5 >> 0xc),
               (int)**(short **)(temp_v0 + 0xc),temp_v1,1);
  if (param_4 != 0) {
    temp_v7 = 0x41d;
    if (temp_v2 != 0) {
      temp_v7 = 0x41e;
    }
  }
  else {
    temp_v7 = 0x424;
    if (temp_v2 != 0) {
      temp_v7 = 0x425;
    }
  }
  FUN_002bf288(2,0x1d,temp_v7,param_2,param_3,0x74);
  temp_v2 = g_titleScene;
  piVar10 = (int *)(g_titleScene + 0x130c);
  temp_v0 = piVar10[*piVar10 + 2];
  piVar10[*piVar10 + 2] = 0;
  if (*(char *)(temp_v2 + 0x1324) != '\0' || temp_v0 != 0) {
    (**(romwright_code **)(temp_v2 + 0x1328))();
    *(unsigned char *)(temp_v2 + 0x1324) = 0;
  }
  return;
}

} /* extern "C" */
