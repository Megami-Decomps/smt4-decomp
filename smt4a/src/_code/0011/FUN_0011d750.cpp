/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d750` (_code @ 0x11d750, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_002e9f00(int, int);
int FUN_00302fe4(int *, unsigned int, int, int);
int FUN_00310ec8(int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;

extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: FUN_00302fe4. */
/* Supplied declaration required: FUN_00310ec8. */


unsigned int FUN_0011d750(int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  unsigned int temp_v3 [2];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    if ((unsigned int)((*(int *)(param_1 + 0x154) - *(int *)(param_1 + 0x150)) + param_3) < 0x81) {
      FUN_00302fe4((int *)(param_1 + 0x150),*(unsigned int *)(param_1 + 0x154),param_2,
                   param_2 + param_3);
      return 1;
    }
    FUN_002e9f00(param_1 + 0x90,4);
    *(unsigned char *)(param_1 + 0x160) = 1;
  }
  else {
    temp_v3[0] = 0x80010004;
    temp_v1 = FUN_002e7908(temp_v2,temp_v3);
    FUN_00310ec8(param_1,temp_v1);
  }
  return 0;
}

} /* extern "C" */
