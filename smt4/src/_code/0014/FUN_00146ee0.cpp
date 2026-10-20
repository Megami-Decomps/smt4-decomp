/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146ee0` (_code @ 0x146ee0, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4040(int);
int FUN_002c40f8(unsigned char *, int *, int, int, unsigned int, unsigned int);
int FUN_002c526c(void);
int coproc_moveto_Data_Synchronization(int);
int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004e8510; /* 0x4e8510 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
extern int FUN_002ad3a4(void);
/* Supplied declaration required: FUN_002c4040. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


void FUN_00146ee0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int uStack_20;
  unsigned char temp_v1 [12];
  
  temp_v0 = FUN_002ad3a4();
  if (*(char *)(temp_v0 + 0xe) != '\0') {
    *(unsigned char *)(temp_v0 + 0xf) = 0;
    uStack_20 = *(unsigned int *)(temp_v0 + 0x18);
    puVar2 = temp_v1;
    FUN_002c40f8(puVar2,&uStack_20,1,0,0xffffffff,0xffffffff);
    if ((int)puVar2 < 0) {
      FUN_002c526c();
    }
    *(unsigned char *)(temp_v0 + 0x1c) = 1;
    nn_os_Thread_FinalizeImpl(temp_v0 + 0x18);
    if (*(int *)(temp_v0 + 0x18) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(temp_v0 + 0x18) = 0;
    }
    *(unsigned char *)(temp_v0 + 0xe) = 0;
    coproc_moveto_Data_Synchronization(0);
    FUN_002c4040(temp_v0 + 0x48);
  }
  if (*(char *)(temp_v0 + 0xc) != '\0') {
    *(unsigned char *)(temp_v0 + 0xd) = 0;
    uStack_20 = *(unsigned int *)(temp_v0 + 0x10);
    puVar2 = temp_v1;
    FUN_002c40f8(puVar2,&uStack_20,1,0,0xffffffff,0xffffffff);
    if ((int)puVar2 < 0) {
      FUN_002c526c();
    }
    *(unsigned char *)(temp_v0 + 0x14) = 1;
    nn_os_Thread_FinalizeImpl(temp_v0 + 0x10);
    if (*(int *)(temp_v0 + 0x10) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(temp_v0 + 0x10) = 0;
    }
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    *(unsigned char *)(temp_v0 + 0x30) = 0;
    *(unsigned int *)(temp_v0 + 0x3c) = 0xffffffff;
    DAT_004e8510 = 1;
    *(unsigned char *)(temp_v0 + 0xc) = 0;
  }
  return;
}

} /* extern "C" */
