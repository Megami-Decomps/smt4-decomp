/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399540` (_code @ 0x399540, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
} param_4_stack;

extern unsigned int *DAT_005b3f98; /* 0x5b3f98 */

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: FUN_0042e388. */
/* Supplied declaration required: FUN_0042e67c. */
/* Supplied declaration required: FUN_0042e868. */
/* Supplied declaration required: FUN_0042f318. */
/* Supplied declaration required: FUN_00430d38. */
/* Supplied declaration required: FUN_00430f18. */
extern unsigned int FUN_00501914(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: nn_cec_CTR_MessageBox_GetMessageId. */
/* Supplied declaration required: nn_cec_CTR_MessageBox_ReadMessage_3579D4. */
/* Supplied declaration required: nn_cec_CTR_Message_Message_sub_object. */


int FUN_00399540(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 13 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char *temp_v9;
  unsigned char temp_v10 [360];
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13 [12];
  unsigned int uStack_34;
  int iStack_30;
  int iStack_2c;
  int temp_v14;
  
  temp_v7 = 0;
  temp_v3 = DAT_005b3f98[6];
  temp_v11 = temp_v3;
  uStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  temp_v14 = param_4;
  FUN_0042e67c(temp_v3,*DAT_005b3f98,DAT_005b3f98[1]);
  if ((temp_v3 & 0x80000000) != 0) {
    return 0;
  }
  temp_v0 = 0;
  temp_v3 = param_1 + param_2;
  if (*(unsigned int *)(temp_v11 + 0x210) < param_1 + param_2) {
    temp_v3 = *(unsigned int *)(temp_v11 + 0x210);
  }
  temp_v6 = param_1;
  if (param_1 < temp_v3) {
    do {
      FUN_00430f18(temp_v13);
      nn_cec_CTR_MessageBox_GetMessageId(temp_v11,temp_v13,0,temp_v6);
      temp_v12 = FUN_00501914(temp_v11,0,temp_v6);
      nn_cec_CTR_Message_Message_sub_object(temp_v10);
      temp_v8 = 1;
      temp_v1 = 0x100;
      FUN_001630d4(0x100,0x100,0,temp_v12);
      temp_v9 = temp_v13;
      temp_v8 = 0;
      temp_v2 = temp_v11;
      nn_cec_CTR_MessageBox_ReadMessage_3579D4(temp_v11,temp_v10,temp_v1,temp_v12);
      if ((int)temp_v2 < 0) {
        temp_v4 = 0xc8810bea;
        if (temp_v2 == 0xc8810bea) {
          temp_v0 = 1;
        }
        else {
          temp_v4 = 0xc8a10bf0;
          if (temp_v2 != 0xc8a10bf0) {
            temp_v4 = 0xe0e10bfd;
            temp_v0 = 1;
          }
        }
      }
      else {
        FUN_00430d38(temp_v10,&temp_v8,&temp_v9);
        FUN_002e59f8(temp_v8,temp_v7 * (int)temp_v9 + param_3);
        temp_v7 = temp_v7 + 1;
        temp_v4 = temp_v5;
      }
      FUN_0019a5a0(temp_v1,temp_v4);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v3);
    if (temp_v0) {
      FUN_0042f318(temp_v11,0);
      FUN_0042e868(temp_v11);
      return temp_v7;
    }
  }
  if (temp_v14 != 0) {
    while (temp_v3 = temp_v3 - 1, (int)param_1 <= (int)temp_v3) {
      FUN_00430f18(&temp_v8);
      nn_cec_CTR_MessageBox_GetMessageId(temp_v11,&temp_v8,0,temp_v3);
      FUN_0042e388(temp_v11,0,&temp_v8);
    }
  }
  FUN_0042e868(temp_v11);
  return temp_v7;
}
