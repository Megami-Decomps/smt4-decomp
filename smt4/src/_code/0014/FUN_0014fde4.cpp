/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014fde4` (_code @ 0x14fde4, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00147e44(unsigned int);
int FUN_00147fd0(unsigned int, int *);
int FUN_00148184(unsigned int *);
int FUN_001482cc(unsigned int *, int);
int FUN_00153a84(int *, int, unsigned int, int);
int FUN_002b563c(unsigned int, int, unsigned int *, int, unsigned int);
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

extern unsigned int DAT_0044e368; /* 0x44e368 */
extern unsigned int DAT_0044e440; /* 0x44e440 */
extern unsigned int DAT_0044e444; /* 0x44e444 */
extern unsigned int DAT_004c642c; /* 0x4c642c */
extern unsigned char DAT_004c6430; /* 0x4c6430 */
extern unsigned int DAT_004c643c; /* 0x4c643c */
extern unsigned int DAT_004c6448; /* 0x4c6448 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00147e44. */
/* Supplied declaration required: FUN_00147fd0. */
/* Supplied declaration required: FUN_00148184. */
/* Supplied declaration required: FUN_001482cc. */
/* Supplied declaration required: FUN_00153a84. */
/* Supplied declaration required: FUN_002b563c. */
/* Supplied declaration required: nn_applet_CTR_detail_CaptureDisplayBuffer. */
extern void nn_applet_CTR_detail_GetDisplayInfo(unsigned int);
/* Supplied declaration required: nn_os_TransferMemoryBlock_Finalize. */


unsigned int FUN_0014fde4(unsigned int param_1)

{
/* irregular: 9 native warning(s); review required */
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
  
  nn_applet_CTR_detail_GetDisplayInfo((unsigned int)&temp_v9);
  FUN_00147e44(param_1);
  DAT_004c643c = temp_v10;
  DAT_004c6448 = temp_v11;
  DAT_004c6430 = temp_v9 != iStack_34;
  FUN_00148184(&DAT_004c642c);
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v1 = DAT_0044e440;
  uStack_5c = DAT_0044e444;
  FUN_002b563c(param_1,2,&DAT_004c642c,0x20,DAT_0044e368);
  temp_v0 = 0;
  FUN_00147fd0(param_1,&temp_v0);
  FUN_00153a84(&temp_v2,temp_v0,DAT_004c642c,3);
  nn_applet_CTR_detail_CaptureDisplayBuffer(temp_v4,&temp_v9,&DAT_004c642c);
  nn_os_TransferMemoryBlock_Finalize(&temp_v2);
  FUN_001482cc(&DAT_004c642c,0x20);
  nn_os_TransferMemoryBlock_Finalize(&temp_v2);
  if (temp_v7 != 0) {
    software_interrupt(0x23);
  }
  return 0;
}

} /* extern "C" */
