/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116c50` (_code @ 0x116c50, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_002e9f00(int, int);
int FUN_00302f88(int, unsigned int);
int FUN_00302fe4(int *, unsigned int, int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;

extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: FUN_00302f88. */
extern int FUN_00302fce(int);
/* Supplied declaration required: FUN_00302fe4. */


unsigned int FUN_00116c50(int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  unsigned int temp_v3 [2];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    temp_v0 = FUN_00302fce(param_1);
    if (temp_v0 != 0) {
      if (*(char *)(param_1 + 0x78) != '\x02') {
        temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x7c) + 0x14))
                          (*(int **)(param_1 + 0x7c),param_2,param_3);
        return temp_v1;
      }
    }
    else if ((unsigned int)((*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec)) + param_3) >= 0x2801) {
      *(unsigned char *)(param_1 + 0xf8) = 1;
      FUN_002e9f00(param_1 + 0x80,4);
    }
    else {
      FUN_00302fe4((int *)(param_1 + 0xec),*(unsigned int *)(param_1 + 0xf0),param_2,param_2 + param_3
                  );
    }
    temp_v1 = 1;
  }
  else {
    temp_v3[0] = 0x80010004;
    temp_v1 = FUN_002e7908(temp_v2,temp_v3);
    FUN_00302f88(param_1,temp_v1);
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
