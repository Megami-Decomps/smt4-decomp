/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b02a8` (_code @ 0x1b02a8, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a2b80(unsigned int);
int FUN_001a2e74(unsigned int, int *);
int FUN_001a30ec(unsigned int *);
int FUN_001a3220(unsigned int *, int);
int FUN_001a3338(unsigned int, int, unsigned int *, int, unsigned int);
int FUN_001b6598(int *, int, unsigned int, int);
int FUN_002f5020(int *, unsigned char *, int, int);
int nn_applet_CTR_detail_CaptureDisplayBuffer(unsigned int, int *, unsigned int *);
int nn_os_TransferMemoryBlock_Finalize(int *);
int software_interrupt(int);

/* stack frame of param_1: 13 slot(s), 46 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
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
} param_1_stack;

extern unsigned char LAB_001a2a68; /* 0x1a2a68 */
extern unsigned int DAT_005891bc; /* 0x5891bc */
extern unsigned int DAT_005891c8; /* 0x5891c8 */
extern unsigned int DAT_005891cc; /* 0x5891cc */
extern unsigned int DAT_0061a60c; /* 0x61a60c */
extern unsigned char DAT_0061a610; /* 0x61a610 */
extern unsigned int DAT_0061a61c; /* 0x61a61c */
extern unsigned int DAT_0061a628; /* 0x61a628 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a2b80. */
/* Supplied declaration required: FUN_001a2e74. */
/* Supplied declaration required: FUN_001a30ec. */
/* Supplied declaration required: FUN_001a3220. */
/* Supplied declaration required: FUN_001a3338. */
/* Supplied declaration required: FUN_001b6598. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: nn_applet_CTR_detail_CaptureDisplayBuffer. */
extern void nn_applet_CTR_detail_GetDisplayInfo(unsigned int);
/* Supplied declaration required: nn_os_TransferMemoryBlock_Finalize. */


unsigned int FUN_001b02a8(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int uStack_5c;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  int iStack_34;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  FUN_002f5020(&temp_v9,&LAB_001a2a68,0x10,2);
  nn_applet_CTR_detail_GetDisplayInfo((unsigned int)&temp_v9);
  FUN_001a2b80(param_1);
  DAT_0061a61c = temp_v10;
  DAT_0061a628 = temp_v11;
  DAT_0061a610 = temp_v9 != iStack_34;
  FUN_001a30ec(&DAT_0061a60c);
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v1 = DAT_005891c8;
  uStack_5c = DAT_005891cc;
  FUN_001a3338(param_1,2,&DAT_0061a60c,0x20,DAT_005891bc);
  temp_v0 = 0;
  FUN_001a2e74(param_1,&temp_v0);
  FUN_001b6598(&temp_v2,temp_v0,DAT_0061a60c,3);
  nn_applet_CTR_detail_CaptureDisplayBuffer(temp_v4,&temp_v9,&DAT_0061a60c);
  nn_os_TransferMemoryBlock_Finalize(&temp_v2);
  FUN_001a3220(&DAT_0061a60c,0x20);
  nn_os_TransferMemoryBlock_Finalize(&temp_v2);
  if (temp_v7 != 0) {
    software_interrupt(0x23);
  }
  return 0;
}

} /* extern "C" */
