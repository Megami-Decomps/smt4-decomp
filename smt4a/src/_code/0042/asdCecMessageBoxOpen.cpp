/* NON_MATCHING: romwright 0.5.0 decompilation of `asdCecMessageBoxOpen` (_code @ 0x42e67c, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00193038(int *, int *);
int FUN_0030fc80(int *);
int FUN_0042d5b4(int);
int moduleStartOnce(void);
int FUN_0042d798(int, int, int, unsigned int);
int FUN_0042e870(int, int);
int rt_memcpy_w(int, unsigned char [8], int);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_3_stack;

extern unsigned char DAT_005b448b; /* 0x5b448b */
extern signed char DAT_005b448c; /* 0x5b448c */
extern unsigned int DAT_006426c0; /* 0x6426c0 */

/* Supplied declaration required: FUN_00193038. */
/* Supplied declaration required: FUN_0030fc80. */
/* Supplied declaration required: FUN_0042d5b4. */
/* Supplied declaration required: moduleStartOnce. */
/* Supplied declaration required: FUN_0042d798. */
/* Supplied declaration required: FUN_0042e870. */
extern int FUN_00501b90(int, unsigned char *, unsigned int);
extern unsigned int nn_cec_CTR_MessageBox_ReadOutBoxIndex(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


int asdCecMessageBoxOpen(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_9c;
  unsigned char temp_v2 [8];
  int temp_v3;
  int temp_v4;
  unsigned int uStack_34;
  int temp_v5;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_006426c0);
  moduleStartOnce();
  DAT_005b448c = '\x01';
  *(unsigned int *)(param_1 + 4) = param_2;
  temp_v0 = FUN_00501b90(param_1,temp_v2,param_2);
  if (temp_v0 < 0) {
    *(unsigned int *)(param_1 + 4) = 0;
    FUN_0042e870(param_1,1);
    if (DAT_005b448c != '\0') {
      FUN_0042d5b4(0);
    }
    nn_os_CriticalSection_Leave((unsigned int)&DAT_006426c0);
    return temp_v0;
  }
  if (temp_v3 == param_3) {
    *(unsigned char *)(param_1 + 10) = 0;
    *(unsigned char *)(param_1 + 0xb) = 0;
    rt_memcpy_w(param_1 + 0x19c,temp_v2,0x60);
    temp_v1 = 0;
    temp_v0 = param_1;
    FUN_0042d798(param_1,param_1 + 0x1fc,param_1 + 0x21c,*(unsigned int *)(param_1 + 0x3a8));
    if (temp_v0 < 0) {
      *(unsigned int *)(param_1 + 4) = 0;
      FUN_0042e870(param_1,1);
    }
    else {
      temp_v1 = 1;
      temp_v0 = param_1;
      FUN_0042d798(param_1,param_1 + 0x3ac,param_1 + 0x3cc,*(unsigned int *)(param_1 + 0x558));
      if (-1 < temp_v0) {
        nn_cec_CTR_MessageBox_ReadOutBoxIndex(param_1);
        *(unsigned char *)(param_1 + 0x1dc) = 0;
        *(unsigned char *)(param_1 + 0x1dd) = 0;
        FUN_0030fc80(&temp_v1);
        temp_v4 = temp_v1;
        uStack_34 = uStack_9c;
        FUN_00193038(&temp_v5,&temp_v4);
        *(unsigned int *)(param_1 + 0x1d0) = temp_v5;
        *(unsigned int *)(param_1 + 0x1d4) = uStack_2c;
        *(unsigned int *)(param_1 + 0x1d8) = uStack_28;
        DAT_005b448b = 1;
        nn_os_CriticalSection_Leave((unsigned int)&DAT_006426c0);
        return 0;
      }
      *(unsigned int *)(param_1 + 4) = 0;
      FUN_0042e870(param_1,1);
    }
    if (DAT_005b448c != '\0') {
      FUN_0042d5b4(0);
    }
    nn_os_CriticalSection_Leave((unsigned int)&DAT_006426c0);
    return temp_v0;
  }
  *(unsigned int *)(param_1 + 4) = 0;
  FUN_0042e870(param_1,1);
  if (DAT_005b448c != '\0') {
    FUN_0042d5b4(0);
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_006426c0);
  return -0x377ef416;
}

} /* extern "C" */
