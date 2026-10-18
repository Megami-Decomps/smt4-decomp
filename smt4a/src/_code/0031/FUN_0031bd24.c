/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bd24` (_code @ 0x31bd24, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00100388. */
extern int FUN_00162ea4(void);
extern int FUN_00164a9c(void);
extern int FUN_001ab8c0(void);
/* Supplied declaration required: FUN_001f474c. */
extern unsigned int FUN_001f4a48(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_001ffba8. */
/* Supplied declaration required: FUN_00280c5c. */
/* Supplied declaration required: FUN_00359510. */
/* Supplied declaration required: FUN_0036bafc. */
/* Supplied declaration required: FUN_003d502c. */


unsigned int FUN_0031bd24(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [64];
  
  temp_v0 = FUN_00164a9c();
  FUN_001ffba8();
  temp_v1 = *(int *)(temp_v0 + 8);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if ((temp_v1 != 2) && (temp_v1 == 3)) {
        return 0xffffffff;
      }
    }
    else if ((*(int *)(temp_v0 + 0x18) == 0) || (temp_v1 = FUN_001ab8c0(), temp_v1 != 0)) {
      temp_v1 = *(int *)(temp_v0 + 0x18);
      if (temp_v1 != 0) {
        if (*(int *)(*(int *)(temp_v1 + 8) + 0xc) < 0) {
          FUN_00280c5c(temp_v1,1);
        }
        FUN_0036bafc(*(unsigned int *)(*(int *)(temp_v0 + 0x18) + 8),0);
        FUN_00359510(*(unsigned int *)(*(int *)(temp_v0 + 0x18) + 8),1);
      }
      FUN_003d502c(0);
      *(unsigned int *)(temp_v0 + 8) = 2;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
  }
  else {
    temp_v1 = FUN_00162ea4();
    if (temp_v1 == 0) {
      FUN_00100388(temp_v3,"battle/battle_map/e%03d_%02d.bcenv",*(unsigned int *)(temp_v0 + 0x10),
                   *(unsigned int *)(temp_v0 + 0x14));
      FUN_001f474c(temp_v3,0);
      *(unsigned char *)(temp_v0 + 0x1c) = 1;
      FUN_00100388(temp_v3,"battle/battle_map/b%03d_%02d.bam",*(unsigned int *)(temp_v0 + 0x10),
                   *(unsigned int *)(temp_v0 + 0x14));
      temp_v2 = FUN_001f4a48(temp_v3,0x38);
      *(unsigned int *)(temp_v0 + 8) = 1;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      *(unsigned int *)(temp_v0 + 0x18) = temp_v2;
    }
  }
  return 0;
}
