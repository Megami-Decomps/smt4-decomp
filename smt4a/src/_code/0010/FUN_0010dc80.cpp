/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dc80` (_code @ 0x10dc80, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, int);
int FUN_002e9f00(int *, int);
int FUN_002ea3d0(int *, unsigned int);
int FUN_002ea41e(int *, int *);
int FUN_002ea43c(int *);
int FUN_002ec738(int);
int FUN_002f30c4(int *);
int FUN_002f3dde(int, int *);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_0010dd40; /* 0x10dd40 */
extern unsigned int DAT_00594eb0; /* 0x594eb0 */

extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
extern unsigned int FUN_002ea3c0(unsigned int *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ec738. */
/* Supplied declaration required: FUN_002f30c4. */
/* Supplied declaration required: FUN_002f3dde. */
extern int FUN_002f4e86(unsigned int *);


void FUN_0010dc80(int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  int temp_v4;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,param_1[0x45]);
  piVar4 = param_1 + 0x88;
  if (temp_v0 != 0) {
    FUN_002f30c4(param_1 + 0x22);
    if ((char)param_1[0x8c] != '\x03') {
      if ((char)param_1[0x8c] == '\x01') {
        FUN_002e9f00(piVar4,4);
      }
      (**(romwright_code **)(*param_1 + 0x3c))(&temp_v3,param_1);
      temp_v1 = FUN_002f4e86((unsigned int *)&temp_v3);
      if (temp_v1 != 0) {
        FUN_002ec738(temp_v0);
        FUN_002ea43c(param_1);
        return;
      }
      temp_v1 = param_1[0x86];
      param_1[0x86] = temp_v1 + 1U;
      if (temp_v1 + 1U < DAT_00594eb0) {
        temp_v2 = FUN_002ea3c0((unsigned int *)&temp_v4,0x10dec9,0,&LAB_0010dd40);
        FUN_002ea3d0(param_1,temp_v2);
        return;
      }
      temp_v4 = temp_v3;
      uStack_20 = uStack_2c;
      uStack_1c = uStack_28;
    }
    else {
      FUN_002ea41e(&temp_v4,piVar4);
    }
    FUN_002f3dde(temp_v0,&temp_v4);
  }
  else {
    FUN_002f30c4(param_1 + 0x22);
    if ((char)param_1[0x8c] == '\x01') {
      FUN_002e9f00(piVar4,4);
    }
  }
  FUN_002ea43c(param_1);
  return;
}

} /* extern "C" */
