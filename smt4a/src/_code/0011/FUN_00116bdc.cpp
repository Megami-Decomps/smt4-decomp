/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116bdc` (_code @ 0x116bdc, 0x6e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_00302f88(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;

extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_00302f88. */


void FUN_00116bdc(int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned char temp_v3 [12];
  unsigned int temp_v4 [2];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    temp_v2 = 0;
    do {
      temp_v0 = temp_v2 * 0xc + param_1;
      piVar4 = (int *)(temp_v0 + 0x108);
      temp_v0 = (**(romwright_code **)(*param_2 + 0x50))(param_2,*piVar4,*(int *)(temp_v0 + 0x10c) - *piVar4);
      if (temp_v0 == 0) {
        temp_v4[0] = 0x80010001;
        temp_v1 = FUN_002e7908(temp_v3,temp_v4);
        FUN_00302f88(param_1,temp_v1);
        return;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    *(unsigned char *)((int)param_2 + 0xd) = 0;
    *(unsigned char *)((int)param_2 + 0xe) = 0;
    (**(romwright_code **)(**(int **)(param_1 + 0x7c) + 8))(*(int **)(param_1 + 0x7c),param_2);
  }
  else {
    temp_v4[0] = 0x80010004;
    temp_v1 = FUN_002e7908(temp_v3,temp_v4);
    FUN_00302f88(param_1,temp_v1);
  }
  return;
}

} /* extern "C" */
