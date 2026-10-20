/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c34e4` (_code @ 0x1c34e4, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6694(unsigned int, int *);
int FUN_001cb774(int *, unsigned int);
int FUN_001cb83c(int *, unsigned int, int);
int FUN_001cb8e4(unsigned char [4], unsigned int);
int FUN_001cbd84(int, unsigned int, unsigned int);
int FUN_001cbd94(int);
int FUN_001cc644(int *);
int FUN_001cc6c0(unsigned int, int *);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;

extern unsigned int FUN_001b1f04(void);
/* Supplied declaration required: FUN_001b6694. */
extern unsigned int FUN_001c35d8(void);
/* Supplied declaration required: FUN_001cb774. */
/* Supplied declaration required: FUN_001cb83c. */
/* Supplied declaration required: FUN_001cb8e4. */
/* Supplied declaration required: FUN_001cbd84. */
/* Supplied declaration required: FUN_001cbd94. */
/* Supplied declaration required: FUN_001cc644. */
/* Supplied declaration required: FUN_001cc6c0. */


void FUN_001c34e4(int *param_1,unsigned int *param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [4];
  unsigned int temp_v4;
  
  if ((char)param_1[3] != '\0') {
    FUN_001cc644(param_1);
  }
  temp_v1 = param_1[0x24];
  if (temp_v1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001c35d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*param_1 + 0xc))(param_1);
    return;
  }
  FUN_001cb8e4(temp_v3,*param_2);
  FUN_001cbd84(temp_v1,temp_v4,param_2[10]);
  FUN_001cbd94(temp_v1);
  temp_v2 = 0;
  do {
    FUN_001cb774(param_1 + temp_v2 * 3 + 0x4d,param_2[temp_v2 + 1]);
    FUN_001cb83c(param_1 + temp_v2 * 4 + 0x3d,param_2[temp_v2 + 5],
                 (int)*(char *)((int)param_2 + temp_v2 + 0x24));
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  *(unsigned char *)(param_1 + 0x59) = 3;
  *(unsigned char *)(param_1 + 3) = 1;
  temp_v0 = FUN_001c35d8();
  FUN_001cc6c0(temp_v0,param_1 + 0x11);
  temp_v0 = FUN_001b1f04();
  FUN_001b6694(temp_v0,param_1 + 0x14);
  *(unsigned char *)((int)param_1 + 0x166) = 1;
  return;
}

} /* extern "C" */
