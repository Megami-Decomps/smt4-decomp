/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238f4c` (_code @ 0x238f4c, 0x1e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002399ec(int);
int FUN_0024ee68(int);
int memClear(int *, int);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern signed char g_asdCecModuleFlags; /* 0x4656d0 */
extern unsigned char DAT_004656d1; /* 0x4656d1 */
extern signed char DAT_004656d3; /* 0x4656d3 */
extern signed char DAT_004656d4; /* 0x4656d4 */
extern unsigned int g_asdCecMessageBoxCriticalSection; /* 0x4e62a8 */
extern unsigned int DAT_004e62b4; /* 0x4e62b4 */

/* Supplied declaration required: FUN_002399ec. */
/* Supplied declaration required: FUN_0024ee68. */
/* Supplied declaration required: memClear. */
extern unsigned int nn_cec_CTR_MessageBox_WriteBoxInfo(unsigned int, int, unsigned int, unsigned int *);
extern unsigned int nn_cec_CTR_MessageBox_WriteMessageBoxInfo(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_00238f4c(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [8];
  
  nn_os_CriticalSection_Enter((unsigned int)&g_asdCecMessageBoxCriticalSection);
  if (param_2 == 0) {
    if (param_1[1] != 0) {
      if (*(char *)((int)param_1 + 10) != '\0') {
        nn_cec_CTR_MessageBox_WriteBoxInfo((unsigned int)param_1,0,(unsigned int)(param_1 + 0x7f),(unsigned int *)(param_1 + 0x87));
      }
      if (*(char *)((int)param_1 + 0xb) != '\0') {
        nn_cec_CTR_MessageBox_WriteBoxInfo((unsigned int)param_1,1,(unsigned int)(param_1 + 0xeb),(unsigned int *)(param_1 + 0xf3));
      }
      if (g_asdCecModuleFlags != '\0') {
        (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],0x96,0x14,temp_v0);
        nn_cec_CTR_MessageBox_WriteMessageBoxInfo((unsigned int)param_1);
      }
    }
    (**(romwright_code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,5);
  }
  param_1[1] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  memClear(param_1 + 0x87,0x18c);
  memClear(param_1 + 0xf3,0x18c);
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  memClear(param_1 + 0x159,0x318);
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004e62b4);
  if (DAT_004656d3 != '\0') {
    FUN_002399ec(param_1[0xea]);
    DAT_004656d3 = '\0';
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004e62b4);
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004e62b4);
  if (DAT_004656d4 != '\0') {
    FUN_002399ec(param_1[0x156]);
    DAT_004656d4 = '\0';
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004e62b4);
  *(unsigned short *)(param_1 + 0x7f) = 0x6262;
  *(unsigned short *)(param_1 + 0xeb) = 0x6262;
  *(unsigned short *)(param_1 + 0x157) = 0x6767;
  if (param_2 == 0) {
    FUN_0024ee68(0);
    DAT_004656d1 = 0;
  }
  g_asdCecModuleFlags = 0;
  nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
  return;
}

} /* extern "C" */
