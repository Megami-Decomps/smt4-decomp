/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001480c8` (_code @ 0x1480c8, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c40f8(unsigned char *, int *, int, int, unsigned int, unsigned int);
int FUN_002c526c(void);
int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_00465630; /* 0x465630 */
extern int DAT_0046563c; /* 0x46563c */
extern unsigned char DAT_00465640; /* 0x465640 */
extern int DAT_004e5290; /* 0x4e5290 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


void FUN_001480c8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int iStack_20;
  unsigned char temp_v1 [8];
  
  DAT_00465630 = 1;
  software_interrupt(0x18);
  if (DAT_004e5290 < 0) {
    FUN_002c526c();
  }
  iStack_20 = DAT_0046563c;
  puVar1 = temp_v1;
  FUN_002c40f8(puVar1,&iStack_20,1,0,0xffffffff,0xffffffff);
  if ((int)puVar1 < 0) {
    FUN_002c526c();
  }
  DAT_00465640 = 1;
  nn_os_Thread_FinalizeImpl((unsigned int)&DAT_0046563c);
  if (DAT_0046563c != 0) {
    software_interrupt(0x23);
    DAT_0046563c = 0;
  }
  temp_v0 = 0;
  do {
    if ((&DAT_004e5290)[temp_v0] != 0) {
      software_interrupt(0x23);
      (&DAT_004e5290)[temp_v0] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  return;
}

} /* extern "C" */
