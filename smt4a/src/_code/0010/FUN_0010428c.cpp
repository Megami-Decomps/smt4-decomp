/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010428c` (_code @ 0x10428c, 0xae bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned char [24], int);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea214(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int onlineJobSetStateDone(int);
int FUN_002ea458(int);
int FUN_002ea4d2(void);
int FUN_004423fc(int, unsigned int, unsigned char [24]);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00104340; /* 0x104340 */
extern unsigned char LAB_00104429; /* 0x104429 */

/* Supplied declaration required: sysMemClear. */
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea214. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: onlineJobSetStateDone. */
/* Supplied declaration required: FUN_002ea458. */
extern int wordRefsEqual_002ea4ac(int *, unsigned int *);
extern int onlineInstantiationContextGetCurrent(void);
/* Supplied declaration required: FUN_002ea4d2. */
/* Supplied declaration required: FUN_004423fc. */


void FUN_0010428c(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3 [2];
  int temp_v4 [3];
  unsigned char temp_v5 [24];
  unsigned char temp_v6 [16];
  
  temp_v4[0] = -0x181c0001;
  sysMemClear(temp_v5,0x18);
  FUN_002ea458(param_1);
  temp_v0 = param_1 + 0x118;
  temp_v2 = 0;
  FUN_004423fc(temp_v0,*(unsigned int *)(param_1 + 0xe4),temp_v5);
  temp_v4[0] = temp_v0;
  if (-1 < temp_v0) {
    temp_v1 = FUN_002ea3c0(temp_v6,&LAB_00104429,0,&LAB_00104340);
    FUN_002ea3d0(param_1,temp_v1);
    return;
  }
  temp_v2 = 0xc8a0c7f0;
  temp_v0 = wordRefsEqual_002ea4ac(temp_v4,(unsigned int *)&temp_v2);
  if (temp_v0 != 0) {
    temp_v0 = onlineInstanceTableGetCurrent();
    onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0xe0));
    if (temp_v0 == 0) {
      onlineJobSetStateDone(param_1);
      return;
    }
    temp_v0 = onlineInstantiationContextGetCurrent();
    if ((*(char *)(temp_v0 + 0x30) == '\0') && (temp_v0 = param_1, FUN_002ea4d2(), temp_v0 != 0)) {
      return;
    }
    temp_v3[0] = 0x8001000b;
  }
  else {
    temp_v3[0] = 0x8001000c;
  }
  temp_v1 = FUN_002e7908(temp_v6,temp_v3);
  FUN_002ea214(param_1,temp_v1);
  return;
}

} /* extern "C" */
