/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d3fc` (_code @ 0x11d3fc, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5820(...);
int FUN_002bcc60(...);
int FUN_002c526c(...);
int software_interrupt(...);

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern int FUN_0012a37c(...); /* 0x12a37c */
extern unsigned char LAB_00138330; /* 0x138330 */
extern unsigned char LAB_00138340; /* 0x138340 */
extern unsigned char LAB_0013834c; /* 0x13834c */
extern unsigned int DAT_0042c000; /* 0x42c000 */
extern unsigned char DAT_00465630; /* 0x465630 */
extern unsigned int DAT_0046563c; /* 0x46563c */
extern unsigned int DAT_00465644; /* 0x465644 */
extern unsigned int *DAT_004e5290; /* 0x4e5290 */
extern unsigned int *DAT_004e5294; /* 0x4e5294 */
extern unsigned int *DAT_004e5298; /* 0x4e5298 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002b5820. */
/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_LightEvent_Initialize(unsigned int, unsigned char);


void FUN_0011d3fc(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int **ppuVar1;
  unsigned int **ppuVar2;
  unsigned int **ppuVar3;
  unsigned int *puVar4;
  unsigned int *temp_v0;
  unsigned int uStack_3c;
  unsigned int temp_v1;
  unsigned int uStack_34;
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  int temp_v6;
  
  ppuVar1 = &temp_v0;
  ppuVar2 = &temp_v0;
  ppuVar3 = &temp_v0;
  temp_v0 = (unsigned int *)0x0;
  FUN_002b5820(&temp_v0,0);
  if (-1 < (int)ppuVar1) {
    ppuVar1 = (unsigned int **)0x0;
    DAT_004e5294 = temp_v0;
  }
  if ((int)ppuVar1 < 0) {
    FUN_002c526c();
  }
  if (DAT_004e5294 != (unsigned int *)0x0) {
    software_interrupt(0x23);
  }
  temp_v0 = (unsigned int *)0x0;
  DAT_004e5294 = (unsigned int *)param_2;
  FUN_002b5820(&temp_v0,0);
  if (-1 < (int)ppuVar2) {
    ppuVar2 = (unsigned int **)0x0;
    DAT_004e5290 = temp_v0;
  }
  if ((int)ppuVar2 < 0) {
    FUN_002c526c();
  }
  if (DAT_004e5290 != (unsigned int *)0x0) {
    software_interrupt(0x23);
  }
  temp_v0 = (unsigned int *)0x0;
  DAT_004e5290 = (unsigned int *)param_3;
  FUN_002b5820(&temp_v0,0);
  if (-1 < (int)ppuVar3) {
    ppuVar3 = (unsigned int **)0x0;
    DAT_004e5298 = temp_v0;
  }
  if ((int)ppuVar3 < 0) {
    FUN_002c526c();
  }
  nn_os_LightEvent_Initialize((unsigned int)&DAT_00465644,1);
  DAT_00465630 = 0;
  temp_v2 = 4;
  temp_v6 = 0;
  temp_v3 = &LAB_00138330;
  puVar4 = &DAT_0046563c;
  temp_v4 = &LAB_0013834c;
  temp_v5 = &LAB_00138340;
  temp_v1 = 0xfffffffe;
  uStack_34 = 0;
  temp_v0 = &DAT_0042c000;
  uStack_3c = param_1;
  FUN_002bcc60(&DAT_0046563c,&temp_v2,FUN_0012a37c,&temp_v6);
  if ((int)puVar4 < 0) {
    FUN_002c526c();
  }
  return;
}

} /* extern "C" */
