/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8a24` (_code @ 0x3b8a24, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern unsigned int DAT_00570d78; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d80; /* 0x570d80 */
extern unsigned int DAT_00570d84; /* 0x570d84 */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004d8530(unsigned int);


unsigned int FUN_003b8a24(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_0014aa78();
  temp_v4 = 4;
  while( 1 ) {
    puVar6 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v4 * 0x408);
    temp_v2 = *puVar6;
    temp_v3 = puVar6[1];
    if (((((temp_v3 & DAT_00570d7c) != 0 || (temp_v2 & DAT_00570d78) != 0) &&
         ((DAT_00570d90 & temp_v2) == 0 && (DAT_00570d94 & temp_v3) == 0)) &&
        ((temp_v2 & DAT_00570d80) != 0 || (temp_v3 & DAT_00570d84) != 0)) &&
       ((*(char *)((int)puVar6 + 0x23a) != '\0' && (*(unsigned short *)((int)puVar6 + 0x166) == temp_v0))))
    break;
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x36) {
      FUN_003283ac(0);
      return 0;
    }
  }
  temp_v1 = FUN_004d8530(*(unsigned int *)(*(int *)(temp_v1 + 0x1ed4) + temp_v4 * 0x1d0 + 0x1bc));
  if (temp_v1 != 0) {
    return 1;
  }
  FUN_003283ac(0);
  return 0;
}

} /* extern "C" */
