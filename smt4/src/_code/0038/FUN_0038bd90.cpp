/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038bd90` (_code @ 0x38bd90, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00123934(void);
int FUN_00234624(unsigned char [4], unsigned int, unsigned int);
int FUN_002a12d8(unsigned int *);
int FUN_002baa40(unsigned int *, int);
int FUN_003540d8(int *, int, int, int *);
int FUN_003df244(int *, unsigned char [4]);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern int g_aocMain; /* 0x432fc8 */

/* Supplied declaration required: FUN_00123934. */
/* Supplied declaration required: FUN_00234624. */
/* Supplied declaration required: FUN_002a12d8. */
/* Supplied declaration required: FUN_002baa40. */
extern unsigned int *FUN_002bad5c(unsigned char *);
/* Supplied declaration required: FUN_003540d8. */
/* Supplied declaration required: FUN_003df244. */


unsigned char * FUN_0038bd90(unsigned char *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [4];
  int temp_v4;
  unsigned int uStack_64;
  int temp_v5;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int temp_v8;
  
  *param_1 = 1;
  puVar2 = (unsigned int *)FUN_002bad5c(param_1 + 4);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (unsigned int *)&temp_v4;
  FUN_002baa40(puVar3,0);
  temp_v2 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = temp_v2;
  temp_v1 = g_aocMain;
  FUN_00123934();
  FUN_00234624(temp_v3,*(unsigned int *)(temp_v1 + 0x5a8),*(unsigned int *)(param_2 + 0x14));
  FUN_003df244(&temp_v7,temp_v3);
  temp_v5 = temp_v7;
  uStack_5c = uStack_38;
  uStack_58 = uStack_34;
  uStack_54 = uStack_30;
  uStack_50 = uStack_2c;
  uStack_4c = uStack_28;
  uStack_48 = uStack_24;
  uStack_44 = uStack_20;
  temp_v6 = temp_v8;
  FUN_003540d8(&temp_v4,temp_v1 + 0x7c,temp_v1 + 0x18,&temp_v5);
  *puVar2 = temp_v4;
  puVar2[1] = uStack_64;
  temp_v1 = FUN_002a12d8(puVar2);
  if (temp_v1 >= 0) {
    *(unsigned char *)(puVar2 + -1) = 0;
  }
  else {
    temp_v1 = FUN_002a12d8(puVar2);
    if (temp_v1 == -0x36dec7ff) {
      temp_v0 = 0x67;
    }
    else {
      FUN_002a12d8(puVar2);
      temp_v0 = 100;
    }
    *(unsigned char *)(puVar2 + -1) = temp_v0;
  }
  return temp_v3;
}

} /* extern "C" */
