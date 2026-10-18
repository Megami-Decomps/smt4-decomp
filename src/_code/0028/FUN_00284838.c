/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00284838` (_code @ 0x284838, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cd88; /* 0x44cd88 */

/* Supplied declaration required: FUN_002524bc. */
extern int FUN_00253154(int);


void FUN_00284838(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  do {
    temp_v2 = DAT_0044cd88 + temp_v3 * 0x4c;
    if (*(char *)(temp_v2 + 0x58) != '\0') {
      temp_v0 = *(short *)(temp_v2 + 0x7c);
      if ((!(temp_v0 == 3 || temp_v0 == 4)) && (!(temp_v0 == 5 || temp_v0 == 7))) {
        if (*(int *)(temp_v2 + 0x5c) == 1) {
          if (*(short *)(DAT_0044cd88 + 4) < 100) {
            if (temp_v0 != 1) {
              FUN_002524bc(0,0x1d,0xffffffff,(int)*(short *)(temp_v2 + 0x7a));
            }
            else {
              FUN_002524bc(0,0x1e,0xffffffff,(int)*(short *)(temp_v2 + 0x7a));
            }
          }
          else {
            FUN_002524bc(0,0x26,0xffffffff,(int)*(short *)(temp_v2 + 0x7a));
          }
        }
      }
      else {
        temp_v1 = FUN_00253154((int)(short)*(unsigned int *)(temp_v2 + 0x80));
        if (temp_v1 == 0) {
          if (*(short *)(DAT_0044cd88 + 4) < 100) {
            if (*(short *)(temp_v2 + 0x7c) == 7) {
              FUN_002524bc(0,0x1f,0xffffffff,(int)*(short *)(temp_v2 + 0x7a));
            }
            else {
              FUN_002524bc(0,0x1e,0xffffffff,(int)*(short *)(temp_v2 + 0x7a));
            }
          }
          else {
            FUN_002524bc(0,0x25,0xffffffff,(int)*(short *)(temp_v2 + 0x7a));
          }
        }
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x20) {
      return;
    }
  } while( 1 );
}
