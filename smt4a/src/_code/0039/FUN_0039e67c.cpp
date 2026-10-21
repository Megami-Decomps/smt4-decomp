/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039e67c` (_code @ 0x39e67c, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_003f2638(int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int g_battleMaskPresets; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d80; /* 0x570d80 */
extern unsigned int DAT_00570d84; /* 0x570d84 */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_003f2638. */


unsigned int FUN_0039e67c(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  
  temp_v1 = scrGetArg(0);
  temp_v0 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  temp_v6 = 4;
  temp_v4 = 0;
  while( 1 ) {
    puVar7 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v6 * 0x408);
    temp_v3 = *puVar7;
    temp_v5 = puVar7[1];
    if (((((temp_v5 & DAT_00570d7c) != 0 || (temp_v3 & g_battleMaskPresets) != 0) &&
         ((DAT_00570d90 & temp_v3) == 0 && (DAT_00570d94 & temp_v5) == 0)) &&
        ((temp_v3 & DAT_00570d80) != 0 || (temp_v5 & DAT_00570d84) != 0)) &&
       ((*(char *)((int)puVar7 + 0x23a) != '\0' && (*(unsigned short *)((int)puVar7 + 0x166) == temp_v1))))
    break;
    temp_v6 = temp_v6 + 1;
    if (temp_v6 >= 0x36) {
      FUN_003f2638(temp_v2,(int)temp_v0,temp_v4,0);
      return 1;
    }
  }
  temp_v4 = *(int *)(temp_v2 + 0x1ed4) + temp_v6 * 0x1d0;
  FUN_003f2638(temp_v2,(int)temp_v0,temp_v4,0);
  return 1;
}

} /* extern "C" */
