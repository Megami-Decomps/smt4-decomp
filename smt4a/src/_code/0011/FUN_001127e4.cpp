/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001127e4` (_code @ 0x1127e4, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/Shard0031.h"

extern "C" {

int FUN_002e93c2(int, int);
int FUN_002ea3d0(int, unsigned int);
int onlineUrlSetAddress(int, unsigned char [32]);
int FUN_002eb858(unsigned char [32], unsigned int, unsigned int);
int _ZN9Obj558b24D1Ev(unsigned char [28]);
int FUN_002f8728(unsigned char [24]);
int FUN_002fa434(unsigned char [28], unsigned int);
int FUN_002fbac6(unsigned char [24], int);
ListOwner *FUN_002fd180(ListOwner *);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp64; /* 0x64: local_64 */
} param_1_stack;

extern unsigned char LAB_00112894; /* 0x112894 */
extern unsigned char LAB_00112a0d; /* 0x112a0d */

/* Supplied declaration required: FUN_002e93c2. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern unsigned int FUN_002ea704(void);
/* Supplied declaration required: onlineUrlSetAddress. */
/* Supplied declaration required: FUN_002eb858. */
/* Supplied declaration required: _ZN9Obj558b24D1Ev. */
/* Supplied declaration required: FUN_002f8728. */
/* Supplied declaration required: FUN_002fa434. */
/* Supplied declaration required: FUN_002fbac6. */
extern int FUN_002fd624(int);


unsigned char * FUN_001127e4(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  unsigned char temp_v4 [28];
  int temp_v5;
  unsigned char temp_v6 [24];
  unsigned char temp_v7 [32];
  unsigned char temp_v8 [20];
  
  FUN_002eb858(temp_v7,*(unsigned int *)(param_1 + 0x378),*(unsigned int *)(param_1 + 0x374) & 0xffff);
  temp_v0 = param_1 + 0x260;
  onlineUrlSetAddress(temp_v0,temp_v7);
  temp_v1 = FUN_002ea704();
  FUN_002fa434(temp_v4,temp_v1);
  _ZN9Obj558b24D1Ev(temp_v4);
  temp_v2 = FUN_002fd624(temp_v0);
  temp_v3 = temp_v2 + temp_v5;
  if (temp_v3 >= 0xffff) {
    temp_v3 = 0xffff;
  }
  FUN_002e93c2(temp_v0,temp_v3);
  if (*(char *)(param_1 + 0x3ac) != '\0') {
    FUN_002f8728(temp_v6);
    FUN_002fbac6(temp_v6,param_1 + 0x1f8);
    (**(romwright_code **)(**(int **)(param_1 + 500) + 0x14))(*(int **)(param_1 + 500),temp_v6,temp_v0);
    FUN_002fd180((ListOwner *)temp_v6);
  }
  temp_v1 = FUN_002ea3c0(temp_v8,&LAB_00112a0d,0,&LAB_00112894);
  FUN_002ea3d0(param_1,temp_v1);
  return temp_v7;
}

} /* extern "C" */
