/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120e80` (_code @ 0x120e80, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010d2c4(void);
int FUN_00122ed4(unsigned int, int, int);
int FUN_002e6e34(...);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002e6fb0(unsigned char [12], unsigned int, unsigned int);
int sharedRefInitEmpty(int);
int FUN_002f9f4e(unsigned int);
int FUN_00301792(unsigned int, unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_0055aefc; /* 0x55aefc */
extern unsigned char DAT_005949d8; /* 0x5949d8 */
extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

/* Supplied declaration required: FUN_0010d2c4. */
/* Supplied declaration required: FUN_00122ed4. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002e6fb0. */
/* Supplied declaration required: sharedRefInitEmpty. */
extern int FUN_002eb624(unsigned int *);
extern int FUN_002ed250(int);
/* Supplied declaration required: FUN_002f9f4e. */
/* Supplied declaration required: FUN_00301792. */


void FUN_00120e80(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [12];
  unsigned char temp_v2 [12];
  
  *param_1 = (unsigned int)&DAT_0055aefc;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  FUN_002f9f4e(*(unsigned int *)(param_1[5] + 0x44));
  _ZN9Obj55b28cD1Ev(temp_v2);
  FUN_002e6fb0(temp_v1,param_1[5],0xffffffff);
  FUN_00122ed4(param_1[3],60000,1);
  FUN_00301792(*(unsigned int *)(param_1[5] + 0x44),param_1[4]);
  if ((int *)param_1[3] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[6] + 4))();
  }
  FUN_002e6e34(temp_v2,&DAT_0062e6a0);
  (*(int *)((unsigned char *)&DAT_005949d8 + 0x18)) = (*(int *)((unsigned char *)&DAT_005949d8 + 0x18)) - 1;
  _ZN9Obj55b28cD1Ev(temp_v2);
  FUN_0010d2c4();
  temp_v0 = FUN_002eb624(param_1 + 0x13);
  temp_v0 = FUN_002ed250(temp_v0 - 0x30);
  sharedRefInitEmpty(temp_v0 - 0x1c);
  return;
}

} /* extern "C" */
