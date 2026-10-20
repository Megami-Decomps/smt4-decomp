/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0380` (_code @ 0x1a0380, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00195fc8(void);

typedef int romwright_code(...);
extern int *DAT_005893a0; /* 0x5893a0 */
extern unsigned char DAT_0062d410; /* 0x62d410 */

/* Supplied declaration required: FUN_00195fc8. */


unsigned int FUN_001a0380(int param_1)

{
/* irregular: 3 unstructured edge(s); 3 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  char acStack_18 [12];
  
  temp_v4 = 0;
  do {
    temp_v1 = *(char *)(param_1 + temp_v4);
    if (temp_v1 == '\0' || temp_v1 == ':') {
      temp_v3 = 0;
      acStack_18[temp_v4] = ':';
      temp_v2 = 0;
      temp_v4 = 0;
      do {
        temp_v5 = (unsigned int)acStack_18[temp_v4];
        if (temp_v5 == 0x3a) goto LAB_001a0438;
        temp_v0 = temp_v3 >> 0x18;
        temp_v4 = temp_v4 + 1;
        temp_v3 = temp_v5 | (temp_v3 << 8);
        temp_v2 = (temp_v2 << 8) | temp_v0 | ((int)temp_v5 >> 0x1f);
        if (temp_v4 >= 8) goto LAB_001a0430;
      } while( 1 );
    }
    acStack_18[temp_v4] = temp_v1;
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 8);
  FUN_00195fc8();
  temp_v3 = 0;
  temp_v2 = 0;
  temp_v4 = 0;
LAB_001a03c4:
  temp_v5 = (unsigned int)*(char *)(temp_v4 + 0x536d10);
  if (temp_v5 != 0x3a) {
    temp_v0 = temp_v3 >> 0x18;
    temp_v4 = temp_v4 + 1;
    temp_v3 = temp_v5 | (temp_v3 << 8);
    temp_v2 = (temp_v2 << 8) | temp_v0 | ((int)temp_v5 >> 0x1f);
    if (temp_v4 < 8) goto LAB_001a03c4;
LAB_001a0430:
    temp_v3 = 0;
    temp_v2 = 0;
  }
LAB_001a0438:
  temp_v5 = 0;
  do {
    if (*(unsigned int *)(temp_v5 * 0x10 + 0x62d414) == temp_v2 &&
        *(unsigned int *)(&DAT_0062d410 + temp_v5 * 0x10) == temp_v3) {
      temp_v4 = temp_v5 * 0x10;
      piVar7 = *(int **)(temp_v4 + 0x62d418);
      temp_v1 = *(char *)(temp_v4 + 0x62d41d);
      *(unsigned int *)(temp_v4 + 0x62d418) = 0;
      *(unsigned int *)(&DAT_0062d410 + temp_v4) = 0;
      *(unsigned int *)(temp_v4 + 0x62d414) = 0;
      if (piVar7 != (int *)0x0) {
        if ((temp_v1 == '\0') && ((**(romwright_code **)(*piVar7 + 0x30))(piVar7), piVar7 == DAT_005893a0)) {
          DAT_005893a0 = (int *)0x0;
        }
        return 0;
      }
      return 0xc8804465;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x20);
  return 0xc8804465;
}

} /* extern "C" */
