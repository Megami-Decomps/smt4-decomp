/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002341d4` (_code @ 0x2341d4, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

/* Supplied declaration required: FUN_002344d8. */
/* Supplied declaration required: FUN_002345a4. */
extern int FUN_002a12d8(unsigned int *);
/* Supplied declaration required: FUN_002ba81c. */
/* Supplied declaration required: FUN_002baa40. */
/* Supplied declaration required: FUN_002bad5c. */
/* Supplied declaration required: FUN_00353154. */


void FUN_002341d4(unsigned int *param_1,int param_2)

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
  
  FUN_002bad5c(&temp_v5);
  FUN_00353154(&temp_v9,param_2 + 0x84,temp_v7);
  temp_v5 = temp_v9;
  temp_v6 = uStack_14;
  temp_v0 = FUN_002a12d8((unsigned int *)&temp_v5);
  if (-1 < temp_v0) {
    FUN_002345a4(&temp_v9,param_2 + 0x84,temp_v3,temp_v7);
    temp_v5 = temp_v9;
    temp_v6 = uStack_14;
    temp_v0 = FUN_002a12d8((unsigned int *)&temp_v5);
    if (-1 < temp_v0) {
      FUN_002ba81c(param_2 + 0x638,temp_v4,0x40);
      FUN_002345a4(&temp_v9,param_2 + 0x84,temp_v1,temp_v7);
      temp_v5 = temp_v9;
      temp_v6 = uStack_14;
      temp_v0 = FUN_002a12d8((unsigned int *)&temp_v5);
      if (-1 < temp_v0) {
        temp_v0 = param_2;
        FUN_002344d8(param_2,param_2 + 0x5b8,0x20,temp_v1);
        puVar2 = temp_v8;
        FUN_002baa40(puVar2,temp_v0);
        temp_v5 = *puVar2;
        temp_v6 = puVar2[1];
        FUN_002344d8(param_2,param_2 + 0x5f8,0x20,temp_v2);
        puVar2 = temp_v8;
        FUN_002baa40(puVar2,param_2);
        temp_v5 = *puVar2;
        temp_v6 = puVar2[1];
        FUN_002baa40(param_1,0);
        return;
      }
    }
  }
  *param_1 = temp_v5;
  param_1[1] = temp_v6;
  return;
}
