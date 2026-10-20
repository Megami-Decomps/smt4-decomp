/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b3d0` (_code @ 0x13b3d0, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00141870(void);
int FUN_0014e38c(...);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char LAB_0013b464; /* 0x13b464 */
extern unsigned char LAB_0013b47c; /* 0x13b47c */
extern unsigned char LAB_0013b498; /* 0x13b498 */
extern unsigned char LAB_00145f94; /* 0x145f94 */
extern unsigned char LAB_00146040; /* 0x146040 */
extern int FUN_00146048(...); /* 0x146048 */

/* Supplied declaration required: FUN_00141870. */
/* Supplied declaration required: FUN_0014e38c. */


void FUN_0013b3d0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = &LAB_0013b464;
  FUN_0014e38c(&LAB_0013b464,param_2,0,0,&LAB_00145f94,0,param_1);
  *(unsigned char **)(param_1 + 0x40) = puVar1;
  puVar1 = &LAB_0013b47c;
  FUN_0014e38c(&LAB_0013b47c,param_3,0,0,FUN_00146048,0,param_1);
  *(unsigned char **)(param_1 + 0x44) = puVar1;
  FUN_00141870();
  puVar1 = &LAB_0013b498;
  FUN_0014e38c(&LAB_0013b498,param_4,0,0,&LAB_00146040,0,param_1);
  *(unsigned char **)(param_1 + 0x48) = puVar1;
  return;
}

} /* extern "C" */
