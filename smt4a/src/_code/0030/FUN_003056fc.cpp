/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003056fc` (_code @ 0x3056fc, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [16], int);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);
int FUN_002f6740(int [3], unsigned int, unsigned char *, int *, unsigned int);
int FUN_002f674e(unsigned int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char LAB_00123475; /* 0x123475 */
extern unsigned int DAT_00594a18; /* 0x594a18 */

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002f6740. */
/* Supplied declaration required: FUN_002f674e. */


unsigned int FUN_003056fc(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1 [3];
  int temp_v2;
  unsigned char temp_v3 [16];
  
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v3,temp_v0 + 0x58);
  temp_v0 = FUN_002e789a(param_2);
  if (temp_v0 != 0) {
    temp_v2 = *(unsigned int *)(param_2 + 0x44);
    FUN_002f6740(temp_v1,param_3,&LAB_00123475,&temp_v2,DAT_00594a18);
    if (-1 < temp_v1[0]) {
      _ZN9Obj55b28cD1Ev(temp_v3);
      return 1;
    }
    FUN_002f674e(param_3);
  }
  _ZN9Obj55b28cD1Ev(temp_v3);
  return 0;
}

} /* extern "C" */
