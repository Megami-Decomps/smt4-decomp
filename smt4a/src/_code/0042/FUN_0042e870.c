/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042e870` (_code @ 0x42e870, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern signed char DAT_005b448b; /* 0x5b448b */
extern unsigned char DAT_005b448c; /* 0x5b448c */
extern signed char DAT_005b448e; /* 0x5b448e */
extern signed char DAT_005b448f; /* 0x5b448f */
extern unsigned int DAT_006426c0; /* 0x6426c0 */
extern unsigned int DAT_006426cc; /* 0x6426cc */

/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0042d5b4. */
/* Supplied declaration required: FUN_00430e58. */
/* Supplied declaration required: nn_cec_CTR_MessageBox_WriteBoxInfo. */
/* Supplied declaration required: nn_cec_CTR_MessageBox_WriteMessageBoxInfo. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_0042e870(int *param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0 [8];
  
  nn_os_CriticalSection_Enter(&DAT_006426c0);
  if (param_2 == 0) {
    if (param_1[1] != 0) {
      if (*(char *)((int)param_1 + 10) != '\0') {
        nn_cec_CTR_MessageBox_WriteBoxInfo(param_1,0,param_1 + 0x7f,param_1 + 0x87);
      }
      if (*(char *)((int)param_1 + 0xb) != '\0') {
        nn_cec_CTR_MessageBox_WriteBoxInfo(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
      }
      if (DAT_005b448b != '\0') {
        (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],0x96,0x14,temp_v0);
        nn_cec_CTR_MessageBox_WriteMessageBoxInfo(param_1);
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
  FUN_002e6354(param_1 + 0x87,0x18c);
  FUN_002e6354(param_1 + 0xf3,0x18c);
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  FUN_002e6354(param_1 + 0x159,0x318);
  nn_os_CriticalSection_Enter();
  if (DAT_005b448e != '\0') {
    FUN_00430e58(param_1[0xea]);
    DAT_005b448e = '\0';
  }
  nn_os_CriticalSection_Leave(&DAT_006426cc);
  nn_os_CriticalSection_Enter();
  if (DAT_005b448f != '\0') {
    FUN_00430e58(param_1[0x156]);
    DAT_005b448f = '\0';
  }
  nn_os_CriticalSection_Leave(&DAT_006426cc);
  *(unsigned short *)(param_1 + 0x7f) = 0x6262;
  *(unsigned short *)(param_1 + 0xeb) = 0x6262;
  *(unsigned short *)(param_1 + 0x157) = 0x6767;
  if (param_2 == 0) {
    FUN_0042d5b4(0);
    DAT_005b448c = 0;
  }
  DAT_005b448b = 0;
  nn_os_CriticalSection_Leave(&DAT_006426c0);
  return;
}
