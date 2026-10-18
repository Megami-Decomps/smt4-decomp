/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011e7da` (_code @ 0x11e7da, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_2_stack;

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_0031094e. */
/* Supplied declaration required: FUN_00310bd4. */
extern int FUN_00310c2c(int *, unsigned int *);


unsigned char FUN_0011e7da(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [12];
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [8];
  int iStack_10;
  int uStack_c;
  
  iStack_10 = param_1;
  uStack_c = param_2;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  temp_v1 = param_1 + 0x80;
  temp_v0 = temp_v1;
  FUN_00310bd4(temp_v1,&uStack_c);
  temp_v4 = *(unsigned int *)(param_1 + 0x90);
  temp_v3 = temp_v0;
  temp_v0 = FUN_00310c2c(&temp_v3,(unsigned int *)&temp_v4);
  if (temp_v0 != 0) {
    temp_v5 = temp_v3;
    FUN_0031094e(temp_v6,temp_v1,&temp_v5);
    FUN_002e6e5c(temp_v2);
  }
  else {
    FUN_002e6e5c(temp_v2);
  }
  return temp_v0 != 0;
}
