/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012cfde` (_code @ 0x12cfde, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned char [40], int);
int FUN_0030d108(int *, int, unsigned char *);
int FUN_0030d134(unsigned char [40]);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int *FUN_002e4e86(int *, unsigned int *);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0030d108. */
/* Supplied declaration required: FUN_0030d134. */
extern int FUN_0030fd62(int *, int, unsigned int);
extern unsigned int FUN_0030fd7e(unsigned int, int *);


int * FUN_0012cfde(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [40];
  int temp_v4;
  int temp_v5;
  unsigned char *temp_v6;
  
  FUN_002e6354(temp_v3,0x28);
  FUN_0030d134(temp_v3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  temp_v4 = param_2;
  temp_v5 = FUN_0030fd7e(0,param_1);
  piVar1 = (int *)FUN_002e4e86(&temp_v4,(unsigned int *)&temp_v5);
  temp_v2 = *piVar1;
  temp_v0 = FUN_0030fd62(param_1,temp_v2,0);
  *param_1 = temp_v0;
  temp_v6 = temp_v3;
  for (temp_v1 = temp_v4; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
    FUN_0030d108(param_1,temp_v0,temp_v6);
    temp_v0 = temp_v0 + 0x28;
  }
  param_1[2] = *param_1 + temp_v2 * 0x28;
  param_1[1] = *param_1 + temp_v4 * 0x28;
  return param_1;
}

} /* extern "C" */
