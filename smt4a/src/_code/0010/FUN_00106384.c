/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106384` (_code @ 0x106384, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
} param_2_stack;

/* Supplied declaration required: FUN_002ed310. */
/* Supplied declaration required: FUN_002ed338. */
extern int FUN_002ed344(unsigned char *, unsigned char *);


unsigned int FUN_00106384(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char temp_v2 [4];
  int temp_v3;
  unsigned char temp_v4 [8];
  unsigned char temp_v5 [8];
  unsigned char temp_v6 [8];
  
  if (*(int *)(param_2 + 0xb0) == -2) {
    return 1;
  }
  FUN_002ed310(param_1);
  FUN_002ed338(temp_v2,param_1);
  FUN_002ed338(temp_v4,*(unsigned int *)(param_2 + 0xb8));
  FUN_002ed338(temp_v5,temp_v3 - 0x96);
  temp_v1 = FUN_002ed344(temp_v5,temp_v4);
  if (temp_v1 != 0) {
    FUN_002ed338(temp_v6,temp_v3 + 0x96);
    temp_v1 = FUN_002ed344(temp_v4,temp_v6);
    if (temp_v1 != 0) {
      temp_v0 = 1;
      if (temp_v0) {
        return 1;
      }
      return 0;
    }
  }
  temp_v0 = 0;
  if (temp_v0) {
    return 1;
  }
  return 0;
}
