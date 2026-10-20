/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c7f20` (_code @ 0x3c7f20, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mdlHandleArrayDestroy(int);
int FUN_002759bc(void);
int asdMemFreeNonNull(int);
int FUN_002c3f5c(void);
int FUN_002c40f8(unsigned char *, int *, int, int, unsigned int, unsigned int);
int asdMemFree(void);
int FUN_002c526c(void);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: mdlHandleArrayDestroy. */
/* Supplied declaration required: FUN_002759bc. */
/* Supplied declaration required: asdMemFreeNonNull. */
/* Supplied declaration required: FUN_002c3f5c. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


void FUN_003c7f20(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int uStack_18;
  unsigned char temp_v1 [4];
  
  uStack_18 = *(unsigned int *)(param_1 + 0xa4);
  puVar1 = temp_v1;
  FUN_002c40f8(puVar1,&uStack_18,1,0,0xffffffff,0xffffffff);
  if ((int)puVar1 < 0) {
    FUN_002c526c();
  }
  *(unsigned char *)(param_1 + 0xa8) = 1;
  nn_os_Thread_FinalizeImpl(param_1 + 0xa4);
  if (*(int *)(param_1 + 0xa4) != 0) {
    software_interrupt(0x23);
    *(unsigned int *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_002c3f5c();
    temp_v0 = *(int *)(param_1 + 0xb0);
    if (temp_v0 != 0) {
      FUN_002c3f5c();
      asdMemFreeNonNull(temp_v0);
    }
    *(unsigned int *)(param_1 + 0xb0) = 0;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xac) = 0;
  }
  *(unsigned int *)(param_1 + 0xc0) = 0xffffffff;
  if (*(int *)(param_1 + 0xa0) != 0) {
    *(unsigned int *)(param_1 + 0xa0) = 0;
  }
  FUN_002759bc();
  mdlHandleArrayDestroy(param_1);
  *(unsigned int *)(param_1 + 0x80) = 0;
  return;
}

} /* extern "C" */
