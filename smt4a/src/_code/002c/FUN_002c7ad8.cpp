/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7ad8` (_code @ 0x2c7ad8, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} void_stack;

extern int DAT_0057f69c; /* 0x57f69c */


void FUN_002c7ad8(void)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v2 = DAT_0057f69c + 0x29500;
  do {
    temp_v0 = *(int *)(temp_v2 + temp_v3 * 0x28 + 0x10);
    if (temp_v0 != 0) {
      temp_v1 = (int)(short)temp_v0;
      piVar3 = (int *)0x0;
      temp_v0 = 0;
      do {
        piVar2 = (int *)(temp_v2 + temp_v0 * 0x28 + 0x10);
        if (*piVar2 == 0 && piVar3 == (int *)0x0) {
          piVar3 = piVar2;
        }
        if (*piVar2 == temp_v1) {
          if (piVar2 != (int *)0x0) goto LAB_002c7b64;
          break;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x10);
      piVar2 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        piVar2 = piVar3;
      }
LAB_002c7b64:
      if (*piVar2 == 0) {
        *piVar2 = temp_v1;
      }
      piVar2[1] = 0;
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x10) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
