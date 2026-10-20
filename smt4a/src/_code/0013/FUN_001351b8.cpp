/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001351b8` (_code @ 0x1351b8, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00134ffe(unsigned int *, unsigned int, unsigned int, int, int *);
int FUN_002f1840(int *, int *, unsigned int *);
int FUN_00307632(int *, unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int);
int FUN_00307704(void);

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

/* Supplied declaration required: FUN_00134ffe. */
/* Supplied declaration required: FUN_002f1840. */
/* Supplied declaration required: FUN_00307632. */
/* Supplied declaration required: FUN_00307704. */


void FUN_001351b8(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puStack_1c;
  unsigned int *puStack_18;
  int uStack_14;
  
  puVar1 = param_1;
  puStack_1c = param_1;
  puStack_18 = param_2;
  uStack_14 = param_3;
  FUN_00307704();
  if (puVar1 < param_2) {
    puVar1 = param_1;
    FUN_00307704();
    FUN_00134ffe(param_1,param_1[2],param_1[3],(int)param_2 - (int)puVar1,&uStack_14);
  }
  else {
    puVar1 = param_1;
    FUN_00307704();
    if (param_2 < puVar1) {
      temp_v3 = param_1[1];
      temp_v2 = *param_1;
      FUN_002f1840(&temp_v4,&temp_v2,param_2);
      FUN_00307632(&temp_v0,param_1,param_1[2],param_1[3],param_1[2],param_1[3],temp_v4,temp_v5);
      param_1[3] = temp_v1;
      param_1[2] = temp_v0;
    }
  }
  return;
}

} /* extern "C" */
