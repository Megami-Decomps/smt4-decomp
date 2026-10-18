/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d30cc` (_code @ 0x3d30cc, 0x2c8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00227c48. */
/* Supplied declaration required: FUN_00227ca8. */
/* Supplied declaration required: FUN_00229888. */
/* Supplied declaration required: FUN_0022a76c. */
extern int FUN_0023ec3c(unsigned int);
/* Supplied declaration required: FUN_00255318. */
extern int FUN_00255398(int, unsigned int);
/* Supplied declaration required: FUN_00256bec. */
/* Supplied declaration required: FUN_0026c120. */
/* Supplied declaration required: FUN_003c06ac. */


unsigned int FUN_003d30cc(int *param_1,unsigned int *param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int *puVar7;
  unsigned int temp_v5;
  
  FUN_00256bec(param_1,*(unsigned int *)(*param_1 + 0x84));
  FUN_00227c48(param_1,param_2);
  temp_v0 = *(unsigned short *)(param_2[10] + 0xfa);
  if ((*param_2 & 0x1080) == 0) {
    temp_v5 = 0x32;
  }
  else {
    temp_v5 = 0;
  }
  if ((temp_v0 & 0x80) != 0) {
    if ((*(unsigned int *)param_2[8] & 0x30) == 0) {
      FUN_00227ca8(DAT_00439ca8,(short)param_2[0xb],0);
    }
    puVar5 = (unsigned int *)param_2[8];
    temp_v1 = 0xb;
    FUN_0022a76c(temp_v1,puVar5,1);
    FUN_0026c120(temp_v5,param_2,0,param_2[9],1);
    FUN_00229888(param_1,param_2,(int)*(short *)(param_2[9] + 0x62),0,0x1e,0x1e);
    *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
  }
  else if ((temp_v0 & 0x100) != 0) {
    if ((*(unsigned int *)param_2[8] & 0x30) == 0) {
      FUN_00227ca8(DAT_00439ca8,(short)param_2[0xb],0);
    }
    puVar5 = (unsigned int *)param_2[8];
    temp_v1 = 0xc;
    FUN_0022a76c(temp_v1,puVar5,1);
    FUN_0026c120(temp_v5,param_2,0,param_2[9],1);
    FUN_00229888(param_1,param_2,(int)*(short *)(param_2[9] + 0x62),0,0x1e,0x1e);
    *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
  }
  else if ((*(unsigned int *)param_2[8] & 0x60000) != 0) {
    if ((*(unsigned int *)param_2[8] & 0x30) == 0) {
      FUN_00227ca8(DAT_00439ca8,(short)param_2[0xb],0);
    }
    temp_v2 = FUN_00255398((int)*(short *)(param_2[9] + 0x62),0x15);
    puVar5 = (unsigned int *)param_2[8];
    if ((*puVar5 & 0x20000) != 0) {
      FUN_0022a76c(0xd,puVar5,1);
    }
    else {
      if (temp_v2 == 2) {
        temp_v1 = 0xe;
      }
      else {
        temp_v1 = 0xf;
      }
      FUN_0022a76c(temp_v1,puVar5,1);
    }
    FUN_0026c120(temp_v5,param_2,0,param_2[9],1);
    FUN_00229888(param_1,param_2,(int)*(short *)(param_2[9] + 0x62),0,0x1e,0x1e);
    *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
  }
  else {
    if ((temp_v0 & 0x40) == 0) {
      return 1;
    }
    temp_v2 = FUN_0023ec3c(99);
    if (((*(unsigned int *)(*param_1 + 0x44a0) & 0x40000) == 0) && (temp_v2 < 0x32)) {
      FUN_003c06ac(param_2[8],0,1);
      if ((*(unsigned int *)param_2[8] & 0x30) != 0) {
        if (*(int *)(*param_1 + 0x49c8) == 0) {
          temp_v3 = 2;
        }
        else {
          temp_v3 = 3;
        }
        *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = temp_v3;
      }
      else {
        *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 1;
      }
    }
    else {
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x11;
    }
  }
  if ((*(unsigned int *)param_2[8] & 0x60000) != 0) {
    FUN_00255318((int)*(short *)(param_2[9] + 0x62),0x15,0xffffffff,0);
    temp_v2 = FUN_00255398((int)*(short *)(param_2[9] + 0x62),0x15);
    if (temp_v2 == 0) {
      puVar7 = (unsigned int *)param_2[8];
      temp_v4 = *puVar7;
      *puVar7 = temp_v4 & 0xfffdffff;
      puVar5 = (unsigned int *)param_2[8];
      puVar5[1] = puVar7[1];
      *puVar5 = temp_v4 & 0xfff9ffff;
    }
  }
  return 1;
}
