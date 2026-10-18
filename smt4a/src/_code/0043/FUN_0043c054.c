/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043c054` (_code @ 0x43c054, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 11 slot(s), 38 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

extern unsigned char LAB_004c4b40; /* 0x4c4b40 */
extern float DAT_005891bc; /* 0x5891bc */
extern unsigned int DAT_005891c8; /* 0x5891c8 */
extern unsigned int DAT_005891cc; /* 0x5891cc */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00170f68. */
/* Supplied declaration required: FUN_001a2d04. */
extern unsigned int FUN_001a324c(unsigned int);
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: FUN_00439ea0. */
/* Supplied declaration required: FUN_00439eb0. */
/* Supplied declaration required: nn_os_TransferMemoryBlock_Finalize. */
/* Supplied declaration required: nn_os_TransferMemoryBlock_Initialize. */


unsigned int FUN_0043c054(unsigned char *param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  float temp_v1;
  float temp_v2;
  float in_s0;
  long long temp_v3;
  float temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_5c;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  float temp_v12;
  unsigned char temp_v13;
  unsigned int temp_v14 [5];
  
  temp_v2 = DAT_005891bc;
  temp_v3 = (unsigned long long)(unsigned int)in_s0 << 0x20;
  temp_v5 = 0;
  temp_v14[0] = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0.0f;
  temp_v13 = 0;
  while( 1 ) {
    temp_v0 = FUN_001a324c(0x407);
    temp_v1 = (float)((unsigned long long)temp_v3 >> 0x20);
    if ((((temp_v0 & 0x3fc00) == 0x4400) && ((temp_v0 & 0x3ff) >= 100)) && ((temp_v0 & 0x3ff) < 0xb4))
    break;
    if (-1 < (int)temp_v0 || temp_v0 == 0xc8a0cffc) {
      if (param_3 != 0) {
        nn_os_TransferMemoryBlock_Initialize(&temp_v7,param_3,0x11000,3,3);
        temp_v2 = temp_v12;
      }
      FUN_001a2d04(0x407,param_2,0xe30,temp_v2);
      FUN_00439ea0();
      temp_v2 = in_s0;
      if (((int)temp_v1 < 0x3f800000) && (temp_v1 < in_s0)) {
        temp_v4 = 0.01f;
        do {
          in_s0 = in_s0 - temp_v4;
          if (in_s0 < temp_v1) {
            in_s0 = temp_v1;
          }
          FUN_00439eb0();
          FUN_001bcd48(&LAB_004c4b40,0);
        } while (temp_v1 < in_s0);
      }
      temp_v6 = DAT_005891c8;
      uStack_5c = DAT_005891cc;
      puVar2 = temp_v14;
      FUN_00170f68(puVar2,param_2,0xe30,&temp_v5,0);
      *param_1 = (char)puVar2;
      if (((int)temp_v1 < 0x3f800000) && (in_s0 < temp_v2)) {
        temp_v4 = 0.1f;
        do {
          in_s0 = in_s0 + temp_v4;
          if (temp_v2 < in_s0) {
            in_s0 = temp_v2;
          }
          FUN_00439eb0();
          temp_v1 = (float)FUN_001bcd48(&LAB_004c4b40,0);
        } while (in_s0 < temp_v2);
      }
      if (param_3 != 0) {
        temp_v1 = temp_v12;
      }
      if (param_3 != 0 && temp_v1 != 0.0f) {
        nn_os_TransferMemoryBlock_Finalize(&temp_v7);
      }
      temp_v0 = 0;
      nn_os_TransferMemoryBlock_Finalize(&temp_v7);
      if (temp_v12 != 0.0f) {
        software_interrupt(0x23);
      }
      return temp_v0;
    }
    if (temp_v0 == 0xe0a0cc08) {
      FUN_001bcd48(10000000,0);
    }
  }
  nn_os_TransferMemoryBlock_Finalize(&temp_v7);
  if (temp_v12 == 0.0f) {
    return temp_v0;
  }
  software_interrupt(0x23);
  return temp_v0;
}
