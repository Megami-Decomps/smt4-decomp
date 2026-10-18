/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221d24` (_code @ 0x221d24, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0018a004. */
/* Supplied declaration required: FUN_00254c6c. */
/* Supplied declaration required: FUN_0029a2b0. */
extern unsigned int FUN_0029a2d0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a0790. */
/* Supplied declaration required: FUN_002a0c54. */
extern int FUN_002ae16c(void);
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002c0ac8(void);
extern int FUN_002c1f28(void);


unsigned int FUN_00221d24(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [64];
  
  temp_v0 = FUN_002c0ac8();
  FUN_0018a004();
  temp_v1 = *(int *)(temp_v0 + 8);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if ((temp_v1 != 2) && (temp_v1 == 3)) {
        return 0xffffffff;
      }
    }
    else if ((*(int *)(temp_v0 + 0x18) == 0) || (temp_v1 = FUN_002ae16c(), temp_v1 != 0)) {
      temp_v1 = *(int *)(temp_v0 + 0x18);
      if (temp_v1 != 0) {
        if (*(int *)(*(int *)(temp_v1 + 8) + 0xc) < 0) {
          FUN_002a06c8(temp_v1,1);
        }
        FUN_0029a2b0(*(unsigned int *)(*(int *)(temp_v0 + 0x18) + 8),0);
        FUN_00254c6c(*(unsigned int *)(*(int *)(temp_v0 + 0x18) + 8),1);
      }
      FUN_002a0790(0);
      *(unsigned int *)(temp_v0 + 8) = 2;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
  }
  else {
    temp_v1 = FUN_002c1f28();
    if (temp_v1 == 0) {
      FUN_002be7fc(temp_v3,"battle/battle_map/e%03d_%02d.bcenv",*(unsigned int *)(temp_v0 + 0x10),
                   *(unsigned int *)(temp_v0 + 0x14));
      FUN_002a0c54(temp_v3,0);
      *(unsigned char *)(temp_v0 + 0x1c) = 1;
      FUN_002be7fc(temp_v3,"battle/battle_map/b%03d_%02d.bam",*(unsigned int *)(temp_v0 + 0x10),
                   *(unsigned int *)(temp_v0 + 0x14));
      temp_v2 = FUN_0029a2d0(temp_v3,0x38);
      *(unsigned int *)(temp_v0 + 8) = 1;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      *(unsigned int *)(temp_v0 + 0x18) = temp_v2;
    }
  }
  return 0;
}
