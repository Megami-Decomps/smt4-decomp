/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a7e84` (_code @ 0x1a7e84, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 7 slot(s), 10 byte(s) */
typedef struct {
    unsigned char sp27; /* 0x27: local_27 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned char sp29; /* 0x29: local_29 */
    unsigned char sp2A; /* 0x2a: local_2a */
    unsigned char sp2B; /* 0x2b: local_2b */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_001a063c. */
/* Supplied declaration required: nnnstdMemCpy. */


void FUN_001a7e84(int *param_1,int *param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned char *pbVar3;
  unsigned char temp_v1 [8];
  
  puVar2 = (unsigned int *)*param_2;
  nnnstdMemCpy(puVar2,*param_1 + 0xa8,0x18);
  *param_2 = *param_2 + 0x18;
  temp_v0 = puVar2[2];
  puVar2[2] = temp_v0 & 0xfffff8ff;
  puVar2[2] = (temp_v0 & 0xfffff8ff) | ((unsigned int)*(unsigned char *)(param_3 + 0x19c) << 8);
  temp_v0 = puVar2[4];
  puVar2[4] = temp_v0 & 0xfffff8ff;
  puVar2[4] = (temp_v0 & 0xfffff8ff) | ((unsigned int)*(unsigned char *)(param_3 + 0x19e) << 8);
  temp_v0 = 0;
  do {
    pbVar3 = *(unsigned char **)(*param_1 + temp_v0 * 4 + 0x8c);
    if (pbVar3 != (unsigned char *)0x0) {
      temp_v1[temp_v0] = *pbVar3 & 1;
      nnnstdMemCpy(*param_2,(temp_v0 & 0xff) * 8 + 0x53cce0,8);
      *param_2 = *param_2 + 8;
      FUN_001a063c(param_2,*(unsigned int *)(pbVar3 + 4));
    }
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 6);
  *puVar2 = ((unsigned int)(temp_v1[0] == 0) << 1) | ((unsigned int)(temp_v1[1] == '\0') << 5) |
            ((unsigned int)(*(char *)(param_3 + 0x19d) == '\0') << 9) | ((unsigned int)(temp_v1[2] == '\0') << 0xd)
            | ((unsigned int)(temp_v1[5] == '\0') << 0x11) | ((unsigned int)(temp_v1[4] == '\0') << 0x15) |
            ((unsigned int)(temp_v1[3] == '\0') << 0x19);
  return;
}
