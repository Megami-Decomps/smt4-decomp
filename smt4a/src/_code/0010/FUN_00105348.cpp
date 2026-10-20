/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105348` (_code @ 0x105348, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(int *, int);
int FUN_002eb108(int *, int, int, int, int, int);
int FUN_002eb7e0(int *, int, int, int, int, int);

typedef int romwright_code(...);
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002e6354. */
extern int *FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002eb108. */
extern int *FUN_002eb7d0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002eb7e0. */
extern int FUN_002eb83c(void);


int * FUN_00105348(int param_1,unsigned short param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  if ((param_1 != 0) && ((int)((unsigned int)*(unsigned char *)(param_1 + 0x1c) << 0x1d) < 0)) {
    piVar1 = (int *)FUN_002eb7d0(0x150,0,param_3,param_4,param_3,param_4);
    if (piVar1 != (int *)0x0) {
      FUN_002eb7e0(piVar1,0,0xf,0,param_1,0);
      if (piVar1 != (int *)0x0) {
        temp_v0 = FUN_002eb83c();
        if (temp_v0 != 0) {
          FUN_002e6354(piVar1 + 0x28,0x1c);
          *(unsigned char *)(piVar1 + 9) = 0xd0;
          *(unsigned short *)((int)piVar1 + 0xa2) = 0;
          *(unsigned short *)((int)piVar1 + 0xa2) = *(unsigned short *)((int)piVar1 + 0xa2) | (param_2 & 0xf);
          return piVar1;
        }
        (**(romwright_code **)(*piVar1 + 4))(piVar1);
      }
    }
    return (int *)0x0;
  }
  piVar1 = (int *)FUN_002e760a(0x150);
  if (piVar1 != (int *)0x0) {
    FUN_002eb108(piVar1,0,0xf,0,param_1,0);
  }
  else {
    piVar1 = (int *)0x0;
  }
  FUN_002e6354(piVar1 + 0x28,0x1c);
  *(unsigned char *)(piVar1 + 9) = 0xd0;
  *(unsigned short *)((int)piVar1 + 0xa2) = 0;
  *(unsigned short *)((int)piVar1 + 0xa2) = *(unsigned short *)((int)piVar1 + 0xa2) | (param_2 & 0xf);
  return piVar1;
}

} /* extern "C" */
