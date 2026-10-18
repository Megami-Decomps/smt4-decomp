/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110654` (_code @ 0x110654, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 5 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_00132006. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002fb344. */
extern int FUN_002fb3b6(unsigned char *, unsigned int *);


unsigned int FUN_00110654(int param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1 [2];
  unsigned short temp_v2 [2];
  unsigned int temp_v3;
  unsigned char temp_v4 [12];
  unsigned short temp_v5 [2];
  int temp_v6;
  unsigned char temp_v7 [4];
  
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v4,temp_v0 + 0x58);
  temp_v0 = (**(romwright_code **)(*param_2 + 0x40))(param_2);
  if (temp_v0 != 1) {
    param_1 = param_1 + 4;
  }
  else {
    param_1 = param_1 + 0x20;
  }
  temp_v5[0] = (unsigned short)param_2[8];
  FUN_002fb344(temp_v7,param_1,temp_v5);
  temp_v6 = *(unsigned int *)(param_1 + 0x10);
  temp_v0 = FUN_002fb3b6(temp_v7,(unsigned int *)&temp_v6);
  if (temp_v0 != 0) {
    if (param_2 != (int *)0x0) {
      (**(romwright_code **)(*param_2 + 4))(param_2);
    }
  }
  else {
    temp_v2[0] = (unsigned short)param_2[8];
    temp_v3 = 0;
    temp_v5[0] = temp_v2[0];
    FUN_00132006(temp_v1,param_1,temp_v2);
    *(int **)(temp_v1[0] + 0x14) = param_2;
  }
  FUN_002e6e5c(temp_v4);
  return 1;
}
