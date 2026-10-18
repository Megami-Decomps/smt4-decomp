/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cf454` (_code @ 0x3cf454, 0x200 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char LAB_0032c90c; /* 0x32c90c */
extern unsigned char LAB_003338a4; /* 0x3338a4 */
extern int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00227ca8. */
/* Supplied declaration required: FUN_00229ca4. */
/* Supplied declaration required: FUN_0022a76c. */
/* Supplied declaration required: FUN_0022ad74. */
extern int FUN_0023ec3c(unsigned int);
/* Supplied declaration required: FUN_0024c828. */
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002b7f0a. */


unsigned int FUN_003cf454(int *param_1,unsigned int *param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned short temp_v4 [10];
  
  temp_v0 = FUN_0023ec3c(1);
  temp_v2 = 0;
  if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x40000) == 0 && temp_v0 == 1) {
    temp_v4[0] = 0;
    temp_v4[1] = 0;
    temp_v4[2] = 0;
    temp_v4[3] = 0;
    temp_v4[4] = 0;
    temp_v4[5] = 0;
    temp_v4[6] = 0;
    temp_v4[7] = 0;
    temp_v4[8] = 0;
    temp_v4[9] = 0;
    FUN_0022ad74(param_2[8],temp_v4);
    temp_v0 = 0;
    do {
      temp_v1 = (unsigned int)temp_v4[temp_v0];
      if (temp_v1 != 0) {
        FUN_002ae3f0();
        if (temp_v1 != 0) {
          temp_v1 = *(unsigned int *)(temp_v1 + 0x28);
          temp_v3 = (temp_v1 & 0x600) != 0;
          if (temp_v3) {
            temp_v1 = temp_v1 << 0x15;
          }
          if (temp_v3 && temp_v1 >> 0x1e != 1) {
            temp_v2 = temp_v2 + 1;
          }
          else {
            temp_v4[temp_v0] = 0;
          }
        }
        else {
          temp_v4[temp_v0] = 0;
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 9);
    if (temp_v2 != 0) {
      FUN_002b7f0a(temp_v4,9,2,&LAB_003338a4);
      FUN_0022a76c(10,param_2[8],1);
      FUN_002b7f0a(temp_v4,temp_v2,2,&LAB_0032c90c);
      temp_v0 = FUN_0023ec3c((temp_v2 - 1U) & 0xffff);
      *(unsigned short *)(param_2[10] + 0x14c) = 2;
      *(unsigned short *)(param_2[10] + 0x14e) = temp_v4[temp_v0];
      *param_2 = *param_2 | 0x8000;
      temp_v1 = (unsigned int)temp_v4[temp_v0];
      FUN_002ae3f0();
      if ((*(unsigned int *)(temp_v1 + 0x28) & 0x1ff) >> 5 == 4) {
        FUN_0024c828(param_1,0xf,0);
      }
      else {
        FUN_0024c828(param_1,2,0);
      }
      FUN_00229ca4(param_1,param_2);
      return 1;
    }
  }
  FUN_0022a76c(9,param_2[8],1);
  if ((*(unsigned int *)param_2[8] & 0x30) == 0) {
    FUN_00227ca8(DAT_00439ca8,(short)param_2[0xb],0);
  }
  *(unsigned short *)(param_2[10] + 0x14c) = 0xf;
  *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x13;
  return 1;
}
