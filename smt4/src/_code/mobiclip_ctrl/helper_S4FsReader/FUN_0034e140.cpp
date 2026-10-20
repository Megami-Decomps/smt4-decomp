/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e140` (_code @ 0x34e140, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2368(int);
int FUN_002c3f5c(...);
int FUN_002c40f8(unsigned char *, int *, int, int, unsigned int, unsigned int);
int asdMemFree(unsigned int);
int FUN_002c526c(void);
int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_0044d130; /* 0x44d130 */
extern int DAT_0044d134; /* 0x44d134 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c3f5c. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


void FUN_0034e140(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int uStack_20;
  unsigned char temp_v1 [8];
  
  if (param_1[0xe] != 0) {
    software_interrupt(0x18);
    if ((int)param_1[0x14] < 0) {
      FUN_002c526c();
    }
    uStack_20 = param_1[0xc];
    puVar2 = temp_v1;
    FUN_002c40f8(puVar2,&uStack_20,1,0,0xffffffff,0xffffffff);
    if ((int)puVar2 < 0) {
      FUN_002c526c();
    }
    *(unsigned char *)(param_1 + 0xd) = 1;
    nn_os_Thread_FinalizeImpl((unsigned int)(param_1 + 0xc));
    if (param_1[0xc] != 0) {
      software_interrupt(0x23);
      param_1[0xc] = 0;
    }
    FUN_002c3f5c(DAT_0044d134);
    temp_v0 = DAT_0044d134;
    if (DAT_0044d134 != 0) {
      FUN_002c3f5c();
      FUN_002b2368(temp_v0);
    }
    DAT_0044d134 = 0;
    asdMemFree(DAT_0044d130);
    DAT_0044d130 = 0;
    param_1[0x12] = 0xffffffff;
    if (param_1[0x13] != 0) {
      software_interrupt(0x23);
      param_1[0x13] = 0;
    }
    if (param_1[0x14] != 0) {
      software_interrupt(0x23);
      param_1[0x14] = 0;
    }
    if (param_1[8] != 0) {
      (**(romwright_code **)(*(int *)param_1[0xf] + 4))();
      param_1[8] = 0;
    }
    if (param_1[9] != 0) {
      (**(romwright_code **)(*(int *)param_1[0xf] + 4))();
      param_1[9] = 0;
    }
    param_1[10] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

} /* extern "C" */
