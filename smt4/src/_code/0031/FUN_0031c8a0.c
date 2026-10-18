/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c8a0` (_code @ 0x31c8a0, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int FUN_00247004(void);
extern int FUN_002499b4(void);
/* Supplied declaration required: FUN_002499fc. */
extern unsigned int FUN_00249a54(void);
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_0031c8a0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5 [3];
  
  FUN_00296cc8(0);
  temp_v0 = FUN_00249a54();
  FUN_002499fc(temp_v0,temp_v5,&temp_v4);
  temp_v3 = temp_v5[0];
  if (temp_v5[0] < temp_v4 + temp_v5[0]) {
    do {
      temp_v1 = FUN_002939f4();
      temp_v2 = *(unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v3 * 0x288);
      if (((((temp_v2 & 0x10) == 0) && ((temp_v2 & 1) != 0)) && ((temp_v2 & 0x40) == 0)) &&
         (temp_v1 = FUN_00247004(), temp_v1 != 0)) {
        FUN_0028dcb0(1);
        return 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v5[0] + temp_v4);
  }
  temp_v3 = FUN_002939f4();
  if (*(char *)(temp_v3 + 0x49c5) != '\0') {
    FUN_002939f4();
    temp_v3 = FUN_002499b4();
    if ((temp_v3 != 0) && (temp_v3 = FUN_00247004(), temp_v3 != 0)) {
      FUN_0028dcb0(1);
      return 1;
    }
  }
  FUN_0028dcb0(0);
  return 1;
}
