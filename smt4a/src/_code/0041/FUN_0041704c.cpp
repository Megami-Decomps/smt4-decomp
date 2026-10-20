/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041704c` (_code @ 0x41704c, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(unsigned int);
int FUN_00215bd0(void);
int FUN_00275f44(unsigned int, int);
int FUN_002a7324(int);
int FUN_002c8538(int);
int FUN_002c85b0(int);
int FUN_0031f718(unsigned int, int);
int FUN_00333dc8(int);
int FUN_0035da20(unsigned int [5], int);
int FUN_00371e98(void);
int FUN_0037e0d0(unsigned int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
extern unsigned int FUN_00187010(unsigned int);
/* Supplied declaration required: FUN_00215bd0. */
extern int FUN_00224880(unsigned int);
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002a7324. */
extern int FUN_002c7cb4(void);
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_0031f718. */
/* Supplied declaration required: FUN_00333dc8. */
/* Supplied declaration required: FUN_0035da20. */
/* Supplied declaration required: FUN_00371e98. */
/* Supplied declaration required: FUN_0037e0d0. */


unsigned int FUN_0041704c(int param_1)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2 [5];
  
  switch(*(unsigned int *)(param_1 + 0xc)) {
  case 0:
    FUN_002c8538(1);
    FUN_00215bd0();
    *(unsigned int *)(param_1 + 0xc) = 1;
  case 1:
    temp_v0 = FUN_0023b3d0();
    if (temp_v0 != 0) {
      *(unsigned int *)(param_1 + 0xc) = 2;
      goto LAB_004170bc;
    }
    break;
  case 2:
LAB_004170bc:
    if (*(char *)(param_1 + 0x40) != '\0') {
      FUN_002c85b0(0xc);
      FUN_0031f718(0xffffffff,0);
      FUN_002a7324(1);
      temp_v2[1] = 0;
      temp_v2[2] = 0;
      temp_v2[3] = 0;
      temp_v2[0] = (unsigned int)*(unsigned short *)(param_1 + 0x38);
      FUN_0035da20(temp_v2,8);
    }
    else {
      temp_v1 = FUN_00187010(*(unsigned int *)(param_1 + 0x34) & 0xffff);
      FUN_002c85b0(0xc);
      FUN_0037e0d0(temp_v1,0);
      FUN_002a7324(1);
      temp_v2[1] = 0;
      temp_v2[2] = 0;
      temp_v2[3] = 0;
      temp_v2[0] = (unsigned int)*(unsigned short *)(param_1 + 0x38);
      FUN_0035da20(temp_v2,8);
    }
    FUN_00371e98();
    *(unsigned int *)(param_1 + 0xc) = 3;
  case 3:
    temp_v0 = FUN_002c7cb4();
    if (temp_v0 != 0) {
      if (*(char *)(param_1 + 0x40) == '\0') {
        *(unsigned int *)(param_1 + 0xc) = 5;
      }
      else {
        FUN_00275f44(*(unsigned int *)(param_1 + 0x1c),0xe);
        FUN_00333dc8(1);
        *(unsigned int *)(param_1 + 0xc) = 4;
      }
    }
    break;
  case 4:
    temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x1c));
    if (temp_v0 == 2) {
      FUN_00333dc8(0);
      *(unsigned int *)(param_1 + 0xc) = 5;
    }
    break;
  case 5:
    temp_v0 = *(int *)(param_1 + 0x10);
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 8) = temp_v0;
    *(unsigned int *)(param_1 + 0xc) = 0;
    if (temp_v0 == 5) {
      if (*(char *)(param_1 + 0x40) == '\0') {
        temp_v1 = 0x67;
      }
      else {
        temp_v1 = 0x11d;
      }
      sysPlaySe(temp_v1);
    }
  }
  return 0;
}

} /* extern "C" */
