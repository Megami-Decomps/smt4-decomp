/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187788` (_code @ 0x187788, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(char [260], int *);
int FUN_00187638(int, int *);
int FUN_00187de4(int *);
int FUN_00192d3c(int *, int, int);
int FUN_001a70dc(int, char [260]);
int FUN_001a72b0(int, char [260], unsigned int);
int FUN_002e6dd0(char [260], int);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp120; /* 0x120: local_120 */
    unsigned int sp128; /* 0x128: local_128 */
} param_2_stack;

/* Supplied declaration required: FUN_00100388. */
extern char FUN_00100790(int);
/* Supplied declaration required: FUN_00187638. */
/* Supplied declaration required: FUN_00187de4. */
/* Supplied declaration required: FUN_00192d3c. */
/* Supplied declaration required: FUN_001a70dc. */
/* Supplied declaration required: FUN_001a72b0. */
extern unsigned int FUN_002e3390(char *);
/* Supplied declaration required: FUN_002e6dd0. */


unsigned int FUN_00187788(int param_1,int *param_2)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  romwright_code *pcVar7;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [4];
  char temp_v9 [260];
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  FUN_002e6dd0(temp_v9,0x100);
  FUN_00100388(temp_v9,param_2 + 0xb);
  temp_v1 = FUN_002e3390(temp_v9);
  FUN_001a72b0(param_1,temp_v9,temp_v1);
  temp_v2 = FUN_002e3390(temp_v9);
  if ((int)temp_v2 < 1) {
    temp_v6 = 0;
  }
  else {
    temp_v6 = temp_v2 & 1;
    if (temp_v6 == 1) {
      temp_v9[0] = FUN_00100790((int)temp_v9[0]);
    }
  }
  for (; (int)temp_v6 < (int)temp_v2; temp_v6 = temp_v6 + 2) {
    temp_v0 = FUN_00100790((int)temp_v9[temp_v6]);
    temp_v9[temp_v6] = temp_v0;
    temp_v0 = FUN_00100790((int)temp_v9[temp_v6 + 1]);
    temp_v9[temp_v6 + 1] = temp_v0;
  }
  temp_v5 = param_1;
  FUN_001a70dc(param_1,temp_v9);
  if (temp_v5 != 0) {
    temp_v2 = *(unsigned int *)(temp_v5 + 8);
  }
  if (temp_v5 != 0 && temp_v2 != 0) {
    if (*param_2 != 0) {
      if (*param_2 != 3) {
        return 1;
      }
    }
    else {
      temp_v3 = *(unsigned int *)(temp_v5 + 0xc);
      temp_v6 = temp_v2;
      if (temp_v3 != 0) {
        temp_v6 = temp_v3;
      }
      param_2[6] = temp_v6;
      if (param_2[3] == 0) {
        temp_v4 = param_1;
        FUN_00187638(param_1,param_2);
        param_2[3] = temp_v4;
      }
      temp_v7 = 0;
      pcVar7 = *(romwright_code **)(**(int **)(param_1 + 0x10) + 0xc);
      (*pcVar7)(*(int **)(param_1 + 0x10),pcVar7,*(unsigned int *)(temp_v5 + 4),0);
      temp_v5 = (**(romwright_code **)(**(int **)(param_1 + 0x10) + 0x28))
                        (*(int **)(param_1 + 0x10),temp_v8,param_2[3],temp_v2);
      param_2[0x50] = temp_v5;
      if (temp_v5 < 0) {
        *param_2 = 5;
        param_2[6] = 0;
        return 1;
      }
      if (temp_v3 != 0) {
        temp_v7 = 0;
        FUN_00192d3c(&temp_v7,param_2[3],param_2[6]);
        FUN_00187de4(&temp_v7);
      }
      *param_2 = 3;
    }
    *param_2 = 4;
    return 1;
  }
  return 0;
}

} /* extern "C" */
