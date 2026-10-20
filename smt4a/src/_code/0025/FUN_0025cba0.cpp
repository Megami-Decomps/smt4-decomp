/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025cba0` (_code @ 0x25cba0, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167618(unsigned int *, unsigned int *, unsigned int *, unsigned int *);
int FUN_0016c4b8(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int VectorSignedToFloat(...);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern unsigned int DAT_00630724; /* 0x630724 */
extern unsigned int DAT_00630734; /* 0x630734 */
extern unsigned int DAT_00630744; /* 0x630744 */
extern unsigned int DAT_00630754; /* 0x630754 */
extern signed char DAT_00630775; /* 0x630775 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00167618. */
/* Supplied declaration required: FUN_0016c4b8. */


void FUN_0025cba0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 int param_5)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int in_fpscr;
  
  puVar1 = (unsigned int *)0x0;
  puVar2 = (unsigned int *)0x0;
  puVar3 = (unsigned int *)0x0;
  puVar4 = (unsigned int *)0x0;
  if (DAT_00630775 != '\0') {
    puVar1 = &DAT_00630724;
    puVar2 = &DAT_00630734;
    puVar3 = &DAT_00630744;
    puVar4 = &DAT_00630754;
  }
  FUN_0016c4b8(g_renderCtx,0,param_3,param_4,param_1,param_2,param_3,param_4);
  VectorSignedToFloat(0x100 - param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00167618(puVar1,puVar2,puVar3,puVar4);
  return;
}

} /* extern "C" */
