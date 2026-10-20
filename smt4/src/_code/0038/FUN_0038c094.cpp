/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038c094` (_code @ 0x38c094, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00123934(void);
int FUN_00234624(unsigned char [4], unsigned int, unsigned int);
int FUN_002a12d8(int);
int FUN_002baa40(int *, int);
int FUN_003539e8(int *, int, int, unsigned char [128]);
int FUN_003deedc(unsigned char [4], unsigned char [128], unsigned int, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_00123934. */
extern unsigned int FUN_00234618(unsigned char *);
/* Supplied declaration required: FUN_00234624. */
/* Supplied declaration required: FUN_002a12d8. */
/* Supplied declaration required: FUN_002baa40. */
extern unsigned int *FUN_002bad5c(unsigned char *);
/* Supplied declaration required: FUN_003539e8. */
/* Supplied declaration required: FUN_003deedc. */


unsigned char * FUN_0038c094(unsigned char *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar6;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [128];
  int temp_v5;
  unsigned int uStack_1c;
  
  puVar2 = (unsigned int *)&temp_v2;
  *param_1 = 1;
  puVar1 = (unsigned int *)FUN_002bad5c(param_1 + 4);
  puVar1[2] = 0;
  puVar6 = puVar1 + -1;
  puVar1[3] = 0;
  FUN_002baa40(&temp_v2,0);
  temp_v1 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = temp_v1;
  temp_v0 = DAT_00432fc8;
  puVar3 = *(unsigned char **)(param_2 + 4);
  if (puVar3 != (unsigned char *)0x0) {
    if (puVar3 == (unsigned char *)0x1) {
      temp_v0 = FUN_002a12d8(param_2 + 0xc);
      puVar3 = (unsigned char *)-(temp_v0 >> 0x1f);
      if (puVar3 != (unsigned char *)0x1) {
        *(unsigned char *)puVar6 = 0;
      }
      else {
        temp_v1 = *(unsigned int *)(param_2 + 0x10);
        *puVar1 = *(unsigned int *)(param_2 + 0xc);
        puVar1[1] = temp_v1;
        temp_v0 = FUN_002a12d8(param_2 + 0xc);
        if (temp_v0 != -0x36dec7ff) {
          *(unsigned char *)puVar6 = 100;
          puVar3 = (unsigned char *)FUN_002a12d8(param_2 + 0xc);
          return puVar3;
        }
        puVar3 = (unsigned char *)0x67;
        *(unsigned char *)puVar6 = 0x67;
      }
    }
  }
  else {
    FUN_00234624(temp_v3,*(unsigned int *)(DAT_00432fc8 + 0x5a8),*(unsigned int *)(param_2 + 0x14));
    temp_v1 = FUN_00234618(temp_v3);
    FUN_003deedc(temp_v3,temp_v4,temp_v1,0);
    FUN_00123934();
    temp_v2 = temp_v1;
    FUN_003539e8(&temp_v5,temp_v0 + 0x7c,temp_v0 + 0x18,temp_v4);
    *(unsigned int *)(param_2 + 4) = 1;
    *(unsigned int *)(param_2 + 0xc) = temp_v5;
    *(unsigned int *)(param_2 + 0x10) = uStack_1c;
    puVar3 = temp_v3;
  }
  return puVar3;
}

} /* extern "C" */
