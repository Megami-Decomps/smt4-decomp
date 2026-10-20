/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003516c0` (_code @ 0x3516c0, 0x1b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2368(int);
int FUN_002c3f5c(...);
int FUN_002c4040(int);
int FUN_002c40f8(unsigned char *, int *, int, int, unsigned int, unsigned int);
int asdMemFree(unsigned int);
int FUN_002c526c(void);
int FUN_0034f050(int);
int FUN_0035053c(int);
int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_0044d158; /* 0x44d158 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c3f5c. */
/* Supplied declaration required: FUN_002c4040. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_0034f050. */
/* Supplied declaration required: FUN_0035053c. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


void FUN_003516c0(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  int uStack_20;
  unsigned char temp_v2 [8];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    *(unsigned char *)(param_1 + 0x10) = 1;
    FUN_002c4040(param_1 + 0x20);
    uStack_20 = *(unsigned int *)(param_1 + 0x28);
    puVar1 = temp_v2;
    FUN_002c40f8(puVar1,&uStack_20,1,0,0xffffffff,0xffffffff);
    if ((int)puVar1 < 0) {
      FUN_002c526c();
    }
    *(unsigned char *)(param_1 + 0x2c) = 1;
    nn_os_Thread_FinalizeImpl(param_1 + 0x28);
    if (*(int *)(param_1 + 0x28) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(param_1 + 0x28) = 0;
    }
    FUN_002c3f5c((*(int *)((unsigned char *)&DAT_0044d158 + 0x4)));
    temp_v0 = (*(int *)((unsigned char *)&DAT_0044d158 + 0x4));
    if ((*(int *)((unsigned char *)&DAT_0044d158 + 0x4)) != 0) {
      FUN_002c3f5c();
      FUN_002b2368(temp_v0);
    }
    (*(int *)((unsigned char *)&DAT_0044d158 + 0x4)) = 0;
    asdMemFree(DAT_0044d158);
    DAT_0044d158 = 0;
    *(unsigned int *)(param_1 + 8) = 0xffffffff;
    FUN_0035053c(param_1);
    temp_v0 = 0;
    if (temp_v0 < *(int *)(param_1 + 0x2e8)) {
      do {
        temp_v1 = param_1 + temp_v0 * 4;
        (**(romwright_code **)(**(int **)(param_1 + 0x1b8) + 4))
                  (*(int **)(param_1 + 0x1b8),*(unsigned int *)(param_1 + 0x14),
                   *(unsigned int *)(temp_v1 + 0x2ec));
        *(unsigned int *)(temp_v1 + 0x2ec) = 0;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(param_1 + 0x2e8));
    }
    temp_v0 = 0;
    if (temp_v0 < *(int *)(param_1 + 0x484)) {
      do {
        temp_v1 = param_1 + temp_v0 * 4;
        (**(romwright_code **)(**(int **)(param_1 + 0x1b8) + 0xc))
                  (*(int **)(param_1 + 0x1b8),*(unsigned int *)(param_1 + 0x14),
                   *(unsigned int *)(temp_v1 + 0x488));
        *(unsigned int *)(temp_v1 + 0x488) = 0;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(param_1 + 0x484));
    }
    temp_v0 = 0;
    if (temp_v0 < *(int *)(param_1 + 0x1c4)) {
      do {
        temp_v1 = param_1 + temp_v0 * 0x18;
        if (*(int *)(temp_v1 + 0x1d8) != 0) {
          (**(romwright_code **)(**(int **)(param_1 + 0x14) + 4))();
          *(unsigned int *)(temp_v1 + 0x1d8) = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(param_1 + 0x1c4));
    }
    FUN_0034f050(param_1 + 0x158);
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0x1b8) = 0;
    *(unsigned int *)(param_1 + 0x1bc) = 0;
    *(unsigned int *)(param_1 + 0x1c0) = 0;
  }
  return;
}

} /* extern "C" */
