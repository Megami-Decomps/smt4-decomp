/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038be98` (_code @ 0x38be98, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_00123858. */
/* Supplied declaration required: FUN_002a1578. */
extern unsigned int *FUN_002bad80(unsigned int *, unsigned int);
extern unsigned int *FUN_002bb09c(unsigned char *);
/* Supplied declaration required: FUN_00353b9c. */


void FUN_0038be98(unsigned char *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_14;
  
  *param_1 = 1;
  puVar2 = (unsigned int *)FUN_002bb09c(param_1 + 4);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (unsigned int *)FUN_002bad80((unsigned int *)&temp_v3,0);
  temp_v2 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = temp_v2;
  temp_v1 = DAT_00432fc8;
  FUN_00123858();
  FUN_00353b9c(&temp_v3,temp_v1 + 0x7c);
  *puVar2 = temp_v3;
  puVar2[1] = uStack_14;
  temp_v1 = FUN_002a1578(puVar2);
  if (temp_v1 >= 0) {
    *(unsigned char *)(puVar2 + -1) = 0;
  }
  else {
    temp_v1 = FUN_002a1578(puVar2);
    if (temp_v1 == -0x36dec7ff) {
      temp_v0 = 0x67;
    }
    else {
      FUN_002a1578(puVar2);
      temp_v0 = 100;
    }
    *(unsigned char *)(puVar2 + -1) = temp_v0;
  }
  return;
}
