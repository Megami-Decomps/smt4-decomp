/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a3154` (_code @ 0x4a3154, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003343f0(int);
int FUN_003c5fc4(int);
int FUN_00408184(int, unsigned int);
int FUN_004a0ef4(unsigned int);
int FUN_004a8750(unsigned int, int, int);
int dispatchIfFound(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_003343f0. */
extern int FUN_0035dbb0(void);
extern int panelStateIs0(void);
/* Supplied declaration required: FUN_003c5fc4. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_004a0ef4. */
/* Supplied declaration required: FUN_004a8750. */
/* Supplied declaration required: dispatchIfFound. */
extern int flaggedValueHolderGetTotal(int);
extern int FUN_004d0cd4(void);


void FUN_004a3154(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = panelStateIs0();
  if ((temp_v1 == 1) && (temp_v1 = FUN_0035dbb0(), temp_v1 != 0)) {
    FUN_003c5fc4(0);
    temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
    temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x868);
    temp_v1 = FUN_004d0cd4();
    if (temp_v1 != -1) {
      dispatchIfFound(temp_v1,temp_v0);
    }
    temp_v2 = (unsigned int)temp_v0;
    FUN_004a8750(temp_v2,*(unsigned char *)(param_1 + 0x861),0);
    FUN_004a0ef4(-temp_v2);
    FUN_00408184(0x28,temp_v2);
    FUN_003343f0(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
