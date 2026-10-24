/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121cc4` (_code @ 0x121cc4, 0x14a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010cd18(unsigned int, int);
int FUN_001158c4(int);
int FUN_00121a7c(int, int);
int FUN_00121b54(int);
int FUN_00121b6c(int);
int FUN_00121c24(unsigned int);
int netSetPayload(int *, int);
int FUN_002e7168(...);
int FUN_002ecef0(void);
int FUN_002ed0c0(int, int);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_0055909c; /* 0x55909c */
extern unsigned char DAT_0055b0ec; /* 0x55b0ec */
extern unsigned char DAT_0059496f; /* 0x59496f */
extern unsigned char g_flagBlock; /* 0x594958 */
extern unsigned char DAT_00594a58; /* 0x594a58 */

extern int *FUN_00106fa8(void);
/* Supplied declaration required: FUN_0010cd18. */
extern unsigned int FUN_00113764(void);
extern unsigned int FUN_00113bc0(void);
extern int FUN_0011456c(int);
/* Supplied declaration required: FUN_001158c4. */
/* Supplied declaration required: FUN_00121a7c. */
/* Supplied declaration required: FUN_00121b54. */
/* Supplied declaration required: FUN_00121b6c. */
/* Supplied declaration required: FUN_00121c24. */
/* Supplied declaration required: netSetPayload. */
extern int _ZN9Obj5584c8C1Ev(int);
/* Supplied declaration required: FUN_002e7168. */
extern int _Znwj(unsigned int);
extern int vectorInitEmpty(int);
extern unsigned int *_ZN9Obj5593b8C1Ev(void);
extern unsigned int FUN_002eac34(unsigned int);
extern int FUN_002ecd54(int);
/* Supplied declaration required: FUN_002ecef0. */
extern int FUN_002ed074(int, unsigned int);
/* Supplied declaration required: FUN_002ed0c0. */
extern unsigned int FUN_002f7a28(void);
extern int FUN_002f8728(int);


int FUN_00121cc4(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar5;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [12];
  
  puVar1 = (unsigned int *)_ZN9Obj5593b8C1Ev();
  *puVar1 = (unsigned int)&DAT_0055b0ec;
  temp_v0 = FUN_002e7168(puVar1 + 4,0x20000000);
  temp_v0 = FUN_002ed074(temp_v0 + 0x30,1);
  *(unsigned char **)(temp_v0 + 0x14) = &DAT_0055909c;
  temp_v0 = FUN_002e7168(temp_v0 + 0x18,1);
  temp_v0 = FUN_002f8728(temp_v0 + 0x30);
  temp_v0 = FUN_0011456c(temp_v0 + 0x1c);
  temp_v0 = temp_v0 + 0x30;
  FUN_001158c4(temp_v0);
  temp_v0 = FUN_002ecd54(temp_v0 + 0x14);
  temp_v0 = _ZN9Obj5584c8C1Ev(temp_v0 + 0x23c);
  temp_v0 = vectorInitEmpty(temp_v0 + 0x28);
  temp_v0 = FUN_002e7168(temp_v0 + 0xc,0x20000000);
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  temp_v0 = FUN_002e7168(temp_v0 + 0x3c,0x20000000);
  temp_v3 = temp_v0 - 0x394;
  FUN_002ed0c0(temp_v0 - 0x354,temp_v3);
  FUN_002ecef0();
  *(unsigned int *)(temp_v0 - 0x388) = 0;
  if ((*(int * *)((unsigned char *)&DAT_00594a58 + 0x50)) != (int *)0x0) {
    temp_v1 = (**(romwright_code **)(*(*(int * *)((unsigned char *)&DAT_00594a58 + 0x50)) + 8))();
    *(unsigned int *)(temp_v0 - 0x388) = temp_v1;
  }
  else {
    temp_v1 = 0x62daf0;
  }
  FUN_00121c24(temp_v1);
  temp_v2 = _Znwj(0x2f0);
  piVar5 = (int *)0x0;
  if (temp_v2 != 0) {
    piVar5 = (int *)FUN_00106fa8();
  }
  *(int **)(temp_v0 - 0x2f4) = piVar5;
  (**(romwright_code **)(*piVar5 + 8))(temp_v6,piVar5);
  temp_v2 = _Znwj(0x120);
  temp_v1 = 0;
  if (temp_v2 != 0) {
    temp_v1 = FUN_00113bc0();
  }
  *(unsigned int *)(temp_v0 - 0x2c4) = temp_v1;
  *(unsigned int *)(temp_v0 - 0x7c) = 0;
  FUN_00121a7c(temp_v3,DAT_0059496f);
  if ((*(signed char *)((unsigned char *)&g_flagBlock + 0x18)) != '\0') {
    FUN_00121b54(temp_v3);
  }
  temp_v2 = _Znwj(0xb0);
  temp_v1 = 0;
  if (temp_v2 != 0) {
    temp_v1 = FUN_002f7a28();
  }
  *(unsigned int *)(temp_v0 - 0x78) = temp_v1;
  temp_v4 = 0x4030201;
  temp_v5 = 0x8070605;
  netSetPayload(&temp_v4,8);
  temp_v2 = _Znwj(0x2c);
  temp_v1 = 0;
  if (temp_v2 != 0) {
    temp_v1 = FUN_00113764();
  }
  *(unsigned int *)(temp_v0 - 0x74) = temp_v1;
  FUN_00121b6c(temp_v3);
  temp_v1 = FUN_002eac34(10);
  FUN_0010cd18(temp_v1,1);
  return temp_v3;
}

} /* extern "C" */
