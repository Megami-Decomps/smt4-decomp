/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00473980` (_code @ 0x473980, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a46c(int, unsigned char [96], int);
int resultPairInitialize(unsigned int *, int);
int FUN_001b5acc(int *);
int FUN_00427f6c(int *, int, unsigned char [32]);
int FUN_00428060(...);
int FUN_00473c5c(...);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

/* Supplied declaration required: FUN_0019a46c. */
/* Supplied declaration required: resultPairInitialize. */
/* Supplied declaration required: FUN_001b5acc. */
extern int legacyResourceIdRemap(unsigned int *);
/* Supplied declaration required: FUN_00427f6c. */
/* Supplied declaration required: FUN_00428060. */
/* Supplied declaration required: FUN_00473c5c. */


void FUN_00473980(unsigned int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned char temp_v1 [96];
  unsigned char temp_v2 [32];
  unsigned char temp_v3 [32];
  unsigned char temp_v4 [96];
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [32];
  unsigned int temp_v8 [2];
  int temp_v9;
  unsigned int uStack_14;
  
  FUN_001b5acc(&temp_v5);
  FUN_00427f6c(&temp_v9,param_2 + 0x84,temp_v7);
  temp_v5 = temp_v9;
  temp_v6 = uStack_14;
  temp_v0 = legacyResourceIdRemap((unsigned int *)&temp_v5);
  if (-1 < temp_v0) {
    FUN_00428060(&temp_v9,param_2 + 0x84,temp_v3,temp_v7);
    temp_v5 = temp_v9;
    temp_v6 = uStack_14;
    temp_v0 = legacyResourceIdRemap((unsigned int *)&temp_v5);
    if (-1 < temp_v0) {
      FUN_0019a46c(param_2 + 0x638,temp_v4,0x40);
      FUN_00428060(&temp_v9,param_2 + 0x84,temp_v1,temp_v7);
      temp_v5 = temp_v9;
      temp_v6 = uStack_14;
      temp_v0 = legacyResourceIdRemap((unsigned int *)&temp_v5);
      if (-1 < temp_v0) {
        temp_v0 = param_2;
        FUN_00473c5c(param_2,param_2 + 0x5b8,0x20,temp_v1);
        puVar2 = temp_v8;
        resultPairInitialize(puVar2,temp_v0);
        temp_v5 = *puVar2;
        temp_v6 = puVar2[1];
        FUN_00473c5c(param_2,param_2 + 0x5f8,0x20,temp_v2);
        puVar2 = temp_v8;
        resultPairInitialize(puVar2,param_2);
        temp_v5 = *puVar2;
        temp_v6 = puVar2[1];
        resultPairInitialize(param_1,0);
        return;
      }
    }
  }
  *param_1 = temp_v5;
  param_1[1] = temp_v6;
  return;
}

} /* extern "C" */
