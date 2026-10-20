/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004839b4` (_code @ 0x4839b4, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memclr(int, int);
int FUN_00356308(void);
int FUN_00482fe8(unsigned int *);
int FUN_004834b0(unsigned int *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int gameFlagIsSet(int);
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: FUN_00356308. */
extern int FUN_003a3038(void);
/* Supplied declaration required: FUN_00482fe8. */
/* Supplied declaration required: FUN_004834b0. */


void FUN_004839b4(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  char *pcVar4;
  int unaff_r7;
  
  if ((*param_1 & 1) != 0) {
    return;
  }
  *(unsigned short *)(param_1 + 0x28) = 0;
  temp_v0 = FUN_003a3038();
  if (0 < temp_v0) {
    unaff_r7 = 0x137;
  }
  pcVar4 = (char *)0x0;
  if (0 < temp_v0) {
    do {
      pcVar2 = pcVar4;
      FUN_00356308();
      if (((((int)*pcVar2 != 0xffffffff) && ((int)*pcVar2 == param_1[1])) &&
          ((int)pcVar2[1] == param_1[2])) &&
         ((*(short *)(pcVar2 + 10) != 1 ||
          ((temp_v1 = gameFlagIsSet(unaff_r7), temp_v1 != 0 &&
           (temp_v1 = gameFlagIsSet(unaff_r7 + 0x10), temp_v1 == 0)))))) {
        *(short *)((int)param_1 + (unsigned int)(unsigned short)(int)param_1[0x28] * 2 + 0xa2) = (short)(int)pcVar4;
        *(short *)(param_1 + 0x28) = (short)param_1[0x28] + 1;
      }
      pcVar4 = pcVar4 + 1;
    } while ((int)pcVar4 < temp_v0);
  }
  FUN_004834b0(param_1,3);
  temp_v0 = 0;
  do {
    FUN_004834b0(param_1,1);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  rt_memclr((int)param_1 + 0x8a2,0x40);
  FUN_00482fe8(param_1);
  return;
}

} /* extern "C" */
