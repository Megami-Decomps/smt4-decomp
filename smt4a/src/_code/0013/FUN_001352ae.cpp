/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001352ae` (_code @ 0x1352ae, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(void);
int FUN_00307604(...);
int FUN_0030761e(unsigned char *, int, unsigned char *);
int FUN_0030c588(unsigned char *, int, unsigned char *, int *);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int *FUN_002e4e86(int *, unsigned int *);
extern int FUN_002e6dac(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307604. */
/* Supplied declaration required: FUN_0030761e. */
/* Supplied declaration required: FUN_0030c588. */
extern unsigned int FUN_00310684(int, int *);


void FUN_001352ae(int *param_1,unsigned char *param_2,int param_3,unsigned char *param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar7;
  int temp_v4;
  int temp_v5;
  int *piStack_24;
  unsigned char *puStack_20;
  int iStack_1c;
  unsigned char *temp_v6;
  
  if (param_3 != 0) {
    puVar7 = (unsigned char *)param_1[1];
    temp_v0 = (int)puVar7 - *param_1;
    piStack_24 = param_1;
    puStack_20 = param_2;
    iStack_1c = param_3;
    temp_v6 = param_4;
    if ((unsigned int)(param_1[2] - *param_1) >= (unsigned int)(temp_v0 + param_3)) {
      puVar2 = param_2 + param_3;
      param_1[1] = (int)(puVar7 + param_3);
      if (puVar2 < puVar7) {
        FUN_00307604((int)puVar7 - param_3,puVar7,puVar7,param_1);
        FUN_0030761e(param_2,(int)puVar7 - param_3,puVar7);
        for (; param_2 != puVar2; param_2 = param_2 + 1) {
          *param_2 = *temp_v6;
        }
      }
      else {
        FUN_0030c588(puVar7,param_3 - ((int)puVar7 - (int)param_2),param_4,param_1);
        FUN_00307604(param_2,puVar7,puVar2,param_1);
        for (; param_2 != puVar7; param_2 = param_2 + 1) {
          *param_2 = *temp_v6;
        }
      }
    }
    else {
      temp_v5 = FUN_00310684(temp_v0,param_1);
      temp_v4 = (param_1[1] - *param_1) + param_3;
      piVar3 = (int *)FUN_002e4e86(&temp_v4,(unsigned int *)&temp_v5);
      temp_v0 = *piVar3;
      temp_v1 = FUN_002e6dac();
      FUN_00307604(*param_1,param_2,temp_v1,param_1);
      FUN_0030c588(param_2 + (temp_v1 - *param_1),param_3,temp_v6,param_1);
      FUN_00307604(param_2,param_1[1],param_2 + temp_v1 + (param_3 - *param_1),param_1);
      temp_v2 = *param_1;
      temp_v3 = param_1[1] - temp_v2;
      for (; temp_v2 != param_1[1]; temp_v2 = temp_v2 + 1) {
      }
      FUN_002e6e14();
      *param_1 = temp_v1;
      param_1[1] = temp_v1 + temp_v3 + param_3;
      param_1[2] = temp_v1 + temp_v0;
    }
  }
  return;
}

} /* extern "C" */
