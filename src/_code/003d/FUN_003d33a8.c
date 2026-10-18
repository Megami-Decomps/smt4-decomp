/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d33a8` (_code @ 0x3d33a8, 0x7a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_0043427c; /* 0x43427c */
extern int DAT_004342c8; /* 0x4342c8 */
extern unsigned int DAT_00435d18; /* 0x435d18 */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00227c48. */
/* Supplied declaration required: FUN_00229bb8. */
/* Supplied declaration required: FUN_00229ca4. */
/* Supplied declaration required: FUN_0023c748. */
extern int FUN_00245de4(void);
/* Supplied declaration required: FUN_00245e2c. */
/* Supplied declaration required: FUN_00245e78. */
/* Supplied declaration required: FUN_00246ea4. */
/* Supplied declaration required: FUN_00250960. */
/* Supplied declaration required: FUN_00255318. */
/* Supplied declaration required: FUN_002553c0. */
/* Supplied declaration required: FUN_00256b04. */
extern int FUN_00256b80(int, int, unsigned int);
/* Supplied declaration required: FUN_00256bec. */
/* Supplied declaration required: FUN_0026c120. */
extern int FUN_0027e5c0(int);
extern int FUN_002934d4(int);
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_003af31c(int);
/* Supplied declaration required: FUN_003c06ac. */
/* Supplied declaration required: FUN_003cfab0. */
/* Supplied declaration required: FUN_003da180. */


unsigned int FUN_003d33a8(int *param_1,unsigned int *param_2)

{
/* irregular: 17 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned short temp_v6;
  int temp_v7;
  unsigned int *puVar10;
  
  *(unsigned int *)(*param_1 + 0x225c) = 0;
  *(unsigned int *)(*param_1 + 0x2260) = 0;
  *(unsigned int *)(*param_1 + 0x2264) = 0;
  *(unsigned short *)(*param_1 + 0x2258) = 0;
  *(unsigned short *)(*param_1 + 0x225a) = 0;
  *(unsigned int *)(*param_1 + 0x49e4) = 0;
  *(unsigned int *)(*param_1 + 0x48b8) = 0;
  param_2[0x169] = 0xffffffff;
  *(unsigned char *)(*param_1 + 0x2f04) = 0;
  temp_v7 = *param_1;
  *(unsigned int *)(temp_v7 + 0x1fd0) = 0;
  *(unsigned int *)(temp_v7 + 0x1fd4) = 0;
  temp_v7 = *param_1;
  *(unsigned int *)(temp_v7 + 0x1fd8) = 0;
  *(unsigned int *)(temp_v7 + 0x1fdc) = 0;
  *(unsigned int *)(*param_1 + 0x44a4) = *(unsigned int *)(*param_1 + 0x44a4) & 0xfffffffd;
  *(unsigned char *)(*param_1 + 0x80) = 0xff;
  *(unsigned char *)(*param_1 + 0x81) = 0xff;
  FUN_00250960(*param_1);
  temp_v7 = 0;
  do {
    puVar10 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v7 * 0x288);
    temp_v1 = FUN_00245e2c(2);
    *(unsigned short *)((int)puVar10 + 0x76) = temp_v1;
    temp_v5 = *puVar10;
    temp_v7 = temp_v7 + 1;
    *puVar10 = temp_v5 & 0x9fffffff;
    puVar10[0x32] = 0;
    *puVar10 = temp_v5 & 0x1fffffff;
    puVar10[1] = 0;
  } while (temp_v7 < 0x6d);
  FUN_003da180(DAT_00435d18);
  *(unsigned short *)(param_2[10] + 0x14c) = 0;
  *(unsigned short *)(param_2[10] + 0x14e) = 0;
  *(unsigned int *)(param_2[8] + 0xc0) = 0;
  temp_v7 = 0;
  param_2[0x3c6] = 0;
  do {
    temp_v4 = temp_v7 * 0x288;
    temp_v7 = temp_v7 + 1;
    temp_v4 = *(int *)(*param_1 + 0x1fc0) + temp_v4 + 0xcc;
    *(unsigned short *)(temp_v4 + 0xfc) = 0;
    *(unsigned short *)(temp_v4 + 0xfe) = 0;
  } while (temp_v7 < 0x6d);
  if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x40) != 0) {
    temp_v5 = *param_2 | 0x80;
    *param_2 = temp_v5;
  }
  else if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x100) != 0) {
    temp_v5 = *param_2 | 0x1000;
    *param_2 = temp_v5;
  }
  temp_v7 = FUN_002934d4(*param_1);
  if ((temp_v7 != 0) && (temp_v7 = FUN_003af31c(DAT_00439ca8), temp_v7 == 0)) {
    return 0;
  }
  temp_v7 = *param_1;
  puVar10 = (unsigned int *)(temp_v7 + 0x44a0);
  if ((*puVar10 & 0x20000) != 0) {
    temp_v7 = FUN_0027e5c0(DAT_00439ca8);
    if (temp_v7 == 0) {
      return 0;
    }
    FUN_0026c120(0,param_2,0xf,param_2[9],1);
    temp_v7 = *param_1;
    puVar10 = (unsigned int *)(temp_v7 + 0x44a0);
    temp_v5 = *puVar10;
    *puVar10 = temp_v5 | 0x2000;
    temp_v4 = *param_1;
    *(unsigned int *)(temp_v4 + 0x44a4) = *(unsigned int *)(temp_v7 + 0x44a4);
    *(unsigned int *)(temp_v4 + 0x44a0) = (temp_v5 & 0xfffdffff) | 0x2000;
    *(unsigned int *)(DAT_00439ca8 + 0x7e38) = 0;
    FUN_00229bb8();
    temp_v7 = DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c;
  }
  else {
    temp_v5 = param_2[0xc];
    if (temp_v5 == 1) {
      *(unsigned short *)(param_2[10] + 0x14c) = 7;
      *(unsigned short *)(param_2[10] + 0x14e) = 8;
      param_2[0x168] = 0;
      FUN_002c4b30(param_2 + 0xe,0x85);
      FUN_003cfab0(param_1,param_2,param_2[0xd]);
      *(unsigned short *)(*param_1 + 0x225a) =
           *(unsigned short *)(*(int *)(*param_1 + 0x1fc0) + param_2[0xd] * 0x288 + 8);
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0xb;
      return 1;
    }
    if (temp_v5 == 4) {
      if ((*(unsigned int *)param_2[8] & 1) == 0) {
        *puVar10 = *puVar10 | 0x1000000;
        *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x23;
        return 1;
      }
      *(unsigned short *)(param_2[10] + 0x14c) = 1;
      *(unsigned int *)(param_2[8] + 0xc0) = param_2[0x160];
      if ((*(unsigned int *)param_2[8] & 6) != 0) {
        *(unsigned short *)(param_2[10] + 0x14e) = 1;
      }
      else {
        *(unsigned short *)(param_2[10] + 0x14e) = 0;
      }
      FUN_002c4b30(param_2 + 0xe,0x85);
      piVar4 = param_1;
      FUN_003cfab0(param_1,param_2,param_2[0xd]);
      if (piVar4 != (int *)0x0) {
        *param_2 = *param_2 | 0x204;
        FUN_00229ca4(param_1,param_2);
        return 1;
      }
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x23;
      return 1;
    }
    if (temp_v5 == 5) {
      *(unsigned char *)(DAT_0043427c + *(int *)(temp_v7 + 0x84) * 0xf1c + 9) = 0x1c;
      return 1;
    }
    temp_v7 = FUN_00256b80(DAT_004342c8,temp_v7,1);
    if (temp_v7 != 0) {
      temp_v2 = 0xffffffff;
      temp_v0 = *(short *)(*param_1 + 0x1fc8);
      if (temp_v0 == 0) {
        temp_v2 = 1;
      }
      else if (temp_v0 == 1) {
        temp_v2 = 2;
      }
      else if (temp_v0 == 2) {
        temp_v2 = 3;
      }
      else if (temp_v0 == 3) {
        temp_v2 = 4;
      }
      *(unsigned int *)(DAT_004342c8 + 0x760) = temp_v2;
    }
    if (((*(int *)(DAT_004342c8 + 0x760) != (int)*(short *)(*param_1 + 0x1fc8)) &&
        (-1 < *(int *)(DAT_004342c8 + 0x760))) &&
       (temp_v7 = FUN_00256b80(DAT_004342c8,*param_1,1), temp_v7 != 0)) {
      FUN_00256b04(0,param_2);
    }
    FUN_0023c748(1,param_2,(int)*(short *)(*param_1 + 0x1fc8),1,1);
    if (((*(unsigned int *)param_2[8] & 0x20) == 0) || (temp_v7 = FUN_00245de4(), temp_v7 != 0)) {
      temp_v6 = 0;
      temp_v7 = (int)*(short *)(param_2[9] + 0x62);
      if (((*(unsigned short *)(param_2[10] + 0xfa) & 0x80) != 0) &&
         (temp_v4 = temp_v7, FUN_00245e78(temp_v7,7), temp_v4 != 0)) {
        temp_v6 = 0x80;
      }
      if (((*(unsigned short *)(param_2[10] + 0xfa) & 0x40) != 0) &&
         (temp_v4 = temp_v7, FUN_00245e78(temp_v7,6), temp_v4 != 0)) {
        temp_v6 = temp_v6 | 0x40;
      }
      if (((*(unsigned short *)(param_2[10] + 0xfa) & 0x100) != 0) &&
         (temp_v4 = temp_v7, FUN_00245e78(temp_v7,8), temp_v4 != 0)) {
        temp_v6 = temp_v6 | 0x100;
      }
      if (((*(unsigned short *)(param_2[10] + 0xfa) & 8) != 0) &&
         (temp_v4 = temp_v7, FUN_00245e78(temp_v7,3), temp_v4 != 0)) {
        temp_v6 = temp_v6 | 8;
      }
      if (temp_v6 != 0) {
        FUN_00246ea4(0,0,param_2[9],temp_v6);
      }
      if ((*(unsigned short *)(param_2[10] + 0xfa) & 0x80) == 0) {
        temp_v2 = FUN_00245e2c(0x16);
        FUN_002553c0(temp_v7,0x16,temp_v2);
      }
      if ((*(unsigned short *)(param_2[10] + 0xfa) & 0x40) == 0) {
        temp_v2 = FUN_00245e2c(0x17);
        FUN_002553c0(temp_v7,0x17,temp_v2);
      }
      if ((*(unsigned short *)(param_2[10] + 0xfa) & 0x100) == 0) {
        temp_v2 = FUN_00245e2c(0x18);
        FUN_002553c0(temp_v7,0x18,temp_v2);
      }
      if ((*(unsigned short *)(param_2[10] + 0xfa) & 8) == 0) {
        temp_v2 = FUN_00245e2c(0x19);
        FUN_002553c0(temp_v7,0x19,temp_v2);
      }
      if (((*(unsigned short *)(param_2[10] + 0xfa) & ~temp_v6 & 0x1c0) == 0) &&
         ((*(unsigned int *)param_2[8] & 0x60000) == 0)) {
        FUN_003c06ac((unsigned int *)param_2[8],temp_v6,1);
        temp_v7 = *param_1;
        if ((*(unsigned int *)param_2[8] & 0x30) != 0) {
          if (*(int *)(temp_v7 + 0x49c8) == 0) {
            temp_v3 = 2;
          }
          else {
            temp_v3 = 3;
          }
          *(unsigned char *)(DAT_0043427c + *(int *)(temp_v7 + 0x84) * 0xf1c + 9) = temp_v3;
          return 1;
        }
        *(unsigned char *)(DAT_0043427c + *(int *)(temp_v7 + 0x84) * 0xf1c + 9) = 1;
        return 1;
      }
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 4;
      return 1;
    }
    FUN_00256bec(param_1,*(unsigned int *)(*param_1 + 0x84));
    FUN_00227c48(param_1,param_2);
    FUN_00255318((int)*(short *)(param_2[9] + 0x62),0x1d,1,0);
    temp_v7 = DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c;
  }
  *(unsigned char *)(temp_v7 + 9) = 0x1d;
  return 1;
}
