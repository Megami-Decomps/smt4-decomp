/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_MessageBox_ReadMessage_3579D4` (_code @ 0x42dc70, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_cec_CTR_MessageBox_ReadMessage_35791C(int, short *, unsigned int, unsigned int);
int nn_cec_CTR_Message_InitializeMessage(void);
int nn_cec_CTR_Message_SetExHeaderWithoutCalc(int, unsigned int, int, short *);
int rt_memcpy_w(int, short *, int, int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

/* Supplied declaration required: nn_cec_CTR_MessageBox_ReadMessage_35791C. */
/* Supplied declaration required: nn_cec_CTR_Message_InitializeMessage. */
/* Supplied declaration required: nn_cec_CTR_Message_SetExHeaderWithoutCalc. */
/* Supplied declaration required: rt_memcpy_w. */


int nn_cec_CTR_MessageBox_ReadMessage_3579D4
              (int param_1,int param_2,short *param_3,unsigned int param_4,unsigned int param_5)

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
  
  nn_cec_CTR_MessageBox_ReadMessage_35791C(param_1,param_3,param_4,param_5);
  if (param_1 < 0) {
    return param_1;
  }
  nn_cec_CTR_Message_InitializeMessage();
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
        rt_memcpy_w(param_2,param_3,0x70,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
        temp_v4 = temp_v5 - 0x70;
        if (temp_v4 != 0) {
          psVar5 = param_3 + 0x38;
          while( 1 ) {
            if (temp_v4 < 0xc) {
              return -0x1f1ef403;
            }
            temp_v3 = *(int *)(psVar5 + 2);
            nn_cec_CTR_Message_SetExHeaderWithoutCalc
                      (param_2,*(unsigned int *)psVar5,temp_v3,psVar5 + 4);
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

} /* extern "C" */
