/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013521c` (_code @ 0x13521c, 0x92 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(void);
int FUN_00307604(...);
int FUN_0030761e(unsigned char *, unsigned char *, unsigned char *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int FUN_002e6dac(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307604. */
/* Supplied declaration required: FUN_0030761e. */
extern int FUN_00310684(unsigned int, int *, unsigned int, unsigned int, int *, unsigned char *);


void FUN_0013521c(int *param_1,unsigned char *param_2,unsigned char *param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v4 = param_1[2] - *param_1;
  puVar5 = (unsigned char *)param_1[1];
  temp_v0 = (int)puVar5 - *param_1;
  if (temp_v0 < temp_v4) {
    param_1[1] = (int)(puVar5 + 1);
    if (puVar5 != (unsigned char *)0x0) {
      *puVar5 = puVar5[-1];
    }
    FUN_0030761e(param_2,puVar5 + -1,puVar5);
    *param_2 = *param_3;
    return;
  }
  temp_v1 = FUN_00310684(temp_v0,param_1,temp_v4,param_4,param_1,param_2);
  temp_v2 = FUN_002e6dac();
  FUN_00307604(*param_1,param_2,temp_v2,param_1);
  if (param_2 + (temp_v2 - *param_1) != (unsigned char *)0x0) {
    param_2[temp_v2 - *param_1] = *param_3;
  }
  FUN_00307604(param_2,param_1[1],param_2 + (temp_v2 - *param_1) + 1,param_1);
  temp_v3 = *param_1;
  temp_v5 = param_1[1] - temp_v3;
  for (; temp_v3 != param_1[1]; temp_v3 = temp_v3 + 1) {
  }
  FUN_002e6e14();
  *param_1 = temp_v2;
  param_1[2] = temp_v2 + temp_v1;
  param_1[1] = temp_v2 + temp_v5 + 1;
  return;
}

} /* extern "C" */
