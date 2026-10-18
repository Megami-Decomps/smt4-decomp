/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357be4` (_code @ 0x357be4, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_00357b2c. */
/* Supplied declaration required: FUN_0035a01c. */
/* Supplied declaration required: FUN_0035a09c. */


int FUN_00357be4(int param_1,int param_2,short *param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  short *psVar5;
  unsigned int unaff_r6;
  unsigned int temp_v4;
  unsigned int unaff_r7;
  int temp_v5;
  
  FUN_00357b2c(param_1,param_3,param_4,param_5);
  if (param_1 < 0) {
    return param_1;
  }
  FUN_0035a01c();
  temp_v2 = -0x371ef417;
  *(unsigned char *)(param_2 + 0x131) = 1;
  if (((param_3 != (short *)0x0) && (param_4 >= 0x70)) && (param_4 < 0x19001)) {
    if (*param_3 != 0x6060) {
      return -0x1f1ef403;
    }
    if (*(unsigned int *)(param_3 + 2) <= param_4) {
      temp_v2 = *(int *)(param_3 + 6);
      temp_v5 = *(int *)(param_3 + 4);
      if (temp_v2 + temp_v5 + 0x20U <= *(unsigned int *)(param_3 + 2)) {
        FUN_002bcf58(param_2,param_3,0x70,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
        temp_v4 = temp_v5 - 0x70;
        if (temp_v4 != 0) {
          psVar5 = param_3 + 0x38;
          while( 1 ) {
            if (temp_v4 < 0xc) {
              return -0x1f1ef403;
            }
            temp_v3 = *(int *)(psVar5 + 2);
            FUN_0035a09c(param_2,*(unsigned int *)psVar5,temp_v3,psVar5 + 4);
            temp_v1 = ((temp_v3 + 3U) & 0xfffffffc) + 8;
            if (temp_v4 <= temp_v1) break;
            temp_v4 = temp_v4 - temp_v1;
            psVar5 = (short *)((int)psVar5 + temp_v1);
          }
        }
        *(int *)(param_2 + 0x13c) = (int)param_3 + temp_v5 + temp_v2;
        *(unsigned int *)(param_2 + 0x140) = 0x20;
        if (temp_v2 != 0) {
          *(int *)(param_2 + 0x138) = (int)param_3 + temp_v5;
          *(int *)(param_2 + 0x134) = temp_v2;
        }
        else {
          *(unsigned int *)(param_2 + 0x134) = 0;
          *(unsigned int *)(param_2 + 0x138) = 0;
        }
        temp_v5 = 0x70;
        temp_v2 = (int)*(char *)(param_2 + 0x130);
        if (temp_v2 != 0) {
          temp_v3 = 0;
          do {
            temp_v0 = temp_v3 * 0xc;
            temp_v2 = temp_v2 - 1;
            temp_v3 = temp_v3 + 1;
            temp_v5 = ((*(int *)(param_2 + temp_v0 + 0x74) + 3U) & 0xfffffffc) + temp_v5 + 8;
          } while (temp_v2 != 0);
        }
        *(int *)(param_2 + 4) = *(int *)(param_2 + 0x134) + temp_v5 + 0x20;
        *(int *)(param_2 + 8) = temp_v5;
        return 0;
      }
      temp_v2 = -0x377ef411;
    }
  }
  return temp_v2;
}
