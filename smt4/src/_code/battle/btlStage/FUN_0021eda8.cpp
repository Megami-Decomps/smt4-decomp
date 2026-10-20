/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021eda8` (_code @ 0x21eda8, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024ef48(int);
int FUN_002759bc(void);
int FUN_002b2368(int);
int FUN_002c3f5c(void);
int FUN_002c40f8(unsigned char *, int *, int, int, unsigned int, unsigned int);
int FUN_002c415c(...);
int FUN_002c43b4(unsigned int, int);
int FUN_002c526c(void);
int software_interrupt(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_004398d0; /* 0x4398d0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0024ef48. */
/* Supplied declaration required: FUN_002759bc. */
/* Supplied declaration required: FUN_002b2368. */
extern int FUN_002bf244(unsigned int);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c3f5c. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


void FUN_0021eda8(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  int uStack_20;
  unsigned char temp_v3 [4];
  
  temp_v0 = FUN_002c08f0();
  temp_v2 = (*(int *)((unsigned char *)&DAT_004398d0 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_004398d0 + 0x4)) != 0) {
    uStack_20 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_004398d0 + 0x4)) + 0xa4);
    puVar2 = temp_v3;
    FUN_002c40f8(puVar2,&uStack_20,1,0,0xffffffff,0xffffffff);
    if ((int)puVar2 < 0) {
      FUN_002c526c();
    }
    *(unsigned char *)(temp_v2 + 0xa8) = 1;
    nn_os_Thread_FinalizeImpl(temp_v2 + 0xa4);
    if (*(int *)(temp_v2 + 0xa4) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(temp_v2 + 0xa4) = 0;
    }
    if (*(int *)(temp_v2 + 0xb0) != 0) {
      FUN_002c3f5c();
      temp_v1 = *(int *)(temp_v2 + 0xb0);
      if (temp_v1 != 0) {
        FUN_002c3f5c();
        FUN_002b2368(temp_v1);
      }
      *(unsigned int *)(temp_v2 + 0xb0) = 0;
    }
    if (*(int *)(temp_v2 + 0xac) != 0) {
      FUN_002c415c();
      *(unsigned int *)(temp_v2 + 0xac) = 0;
    }
    *(unsigned int *)(temp_v2 + 0xc0) = 0xffffffff;
    if (*(int *)(temp_v2 + 0xa0) != 0) {
      *(unsigned int *)(temp_v2 + 0xa0) = 0;
    }
    FUN_002759bc();
    FUN_0024ef48(temp_v2);
    *(unsigned int *)(temp_v2 + 0x80) = 0;
    FUN_002c415c((*(int *)((unsigned char *)&DAT_004398d0 + 0x4)));
    (*(int *)((unsigned char *)&DAT_004398d0 + 0x4)) = 0;
  }
  temp_v2 = FUN_002bf244(*(unsigned int *)(temp_v0 + 0x30));
  if (temp_v2 != 0) {
    FUN_002c43b4(*(unsigned int *)(temp_v0 + 0x30),0);
    return;
  }
  return;
}

} /* extern "C" */
