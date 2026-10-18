/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354818` (_code @ 0x354818, 0x134 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

/* Supplied declaration required: FUN_002bad80. */
/* Supplied declaration required: FUN_003522ec. */
/* Supplied declaration required: FUN_0035249c. */


void FUN_00354818(unsigned int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned char temp_v1 [4];
  unsigned int temp_v2;
  unsigned int uStack_44;
  unsigned char temp_v3 [24];
  unsigned char temp_v4 [24];
  
  temp_v0 = (char)param_3[1];
  if (temp_v0 == '\0') {
    uStack_44 = 0x8c;
  }
  else if (temp_v0 == '\x01') {
    uStack_44 = 0xd;
  }
  else if ((temp_v0 == '\x02') || (temp_v0 != '\x03')) {
    uStack_44 = 0;
  }
  else {
    uStack_44 = 0x10;
  }
  uStack_44 = uStack_44 | 0x40000;
  temp_v2 = (unsigned int)*(unsigned char *)((int)param_3 + 5) | ((*param_3 & 0xff0fffff) << 8);
  puVar2 = temp_v1;
  FUN_003522ec(puVar2,temp_v3,1,*param_3,temp_v2,uStack_44,0);
  if (puVar2 == (unsigned char *)0xd8a083fa) {
    FUN_002bad80(param_1,0xc8813894);
    return;
  }
  if ((int)puVar2 < 0) {
    FUN_002bad80(param_1,puVar2);
    return;
  }
  puVar2 = temp_v4;
  FUN_0035249c(puVar2,1,&temp_v2);
  puVar3 = (unsigned char *)(((unsigned int)puVar2 & 0x3fc00) >> 10);
  if (((puVar3 != (unsigned char *)0x11) ||
      (puVar3 = (unsigned char *)((unsigned int)puVar2 & 0x3ff), puVar3 < (unsigned char *)0x64)) ||
     ((unsigned char *)0xb3 < puVar3)) {
    if (puVar2 != (unsigned char *)0xd8a083fa) {
      puVar3 = (unsigned char *)0xc8a0802b;
    }
    if (puVar2 != (unsigned char *)0xd8a083fa && puVar2 != puVar3) {
      if (-1 < (int)puVar2) {
        *param_2 = temp_v2;
        param_2[1] = uStack_44;
        FUN_002bad80(param_1,0);
        return;
      }
      FUN_002bad80(param_1,puVar2);
      return;
    }
  }
  FUN_002bad80(param_1,0xc8813887);
  return;
}
