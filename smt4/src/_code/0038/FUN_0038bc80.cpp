/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038bc80` (_code @ 0x38bc80, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00123934(void);
int legacyResourceIdRemap(unsigned int *);
int resultPairInitialize(int *, int);
int FUN_0035398c(int *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_aocMain; /* 0x432fc8 */

/* Supplied declaration required: FUN_00123934. */
/* Supplied declaration required: legacyResourceIdRemap. */
/* Supplied declaration required: resultPairInitialize. */
extern unsigned int *FUN_002bad5c(unsigned char *);
/* Supplied declaration required: FUN_0035398c. */


void FUN_0038bc80(unsigned char *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_14;
  
  puVar3 = (unsigned int *)&temp_v3;
  *param_1 = 1;
  puVar2 = (unsigned int *)FUN_002bad5c(param_1 + 4);
  puVar2[2] = 0;
  puVar2[3] = 0;
  resultPairInitialize(&temp_v3,0);
  temp_v2 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = temp_v2;
  temp_v1 = g_aocMain;
  FUN_00123934();
  FUN_0035398c(&temp_v3,temp_v1 + 0x7c);
  *puVar2 = temp_v3;
  puVar2[1] = uStack_14;
  temp_v1 = legacyResourceIdRemap(puVar2);
  if (temp_v1 >= 0) {
    *(unsigned char *)(puVar2 + -1) = 0;
  }
  else {
    temp_v1 = legacyResourceIdRemap(puVar2);
    if (temp_v1 == -0x36dec7ff) {
      temp_v0 = 0x67;
    }
    else {
      legacyResourceIdRemap(puVar2);
      temp_v0 = 100;
    }
    *(unsigned char *)(puVar2 + -1) = temp_v0;
  }
  return;
}

} /* extern "C" */
