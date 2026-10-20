/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ca748` (_code @ 0x2ca748, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152bec(unsigned int);
int FUN_00263588(unsigned int);
int FUN_00275be8(int);
int FUN_002917b8(void);
int FUN_0029c2cc(unsigned int, int);
int FUN_002a46d8(int);
int FUN_002a4d14(void);
int FUN_002a72c0(int);
int FUN_002a775c(unsigned int);
int FUN_002c415c(void);
int FUN_00310098(void);

extern int DAT_0044e300; /* 0x44e300 */

/* Supplied declaration required: FUN_00152bec. */
/* Supplied declaration required: FUN_00263588. */
/* Supplied declaration required: FUN_00275be8. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_0029c2cc. */
/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: FUN_002a4d14. */
/* Supplied declaration required: FUN_002a72c0. */
/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_00310098. */


void FUN_002ca748(void)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044e300;
  *(unsigned char *)(DAT_0044e300 + 4) = 1;
  FUN_002a46d8(0x3a);
  FUN_00310098();
  FUN_00152bec(*(unsigned int *)(temp_v0 + 0x8c));
  FUN_002a775c(*(unsigned int *)(temp_v0 + 0x8c));
  *(unsigned int *)(temp_v0 + 0x8c) = 0;
  FUN_00152bec(*(unsigned int *)(temp_v0 + 0x90));
  FUN_002a775c(*(unsigned int *)(temp_v0 + 0x90));
  *(unsigned int *)(temp_v0 + 0x90) = 0;
  if (*(char *)(temp_v0 + 0x85) != '\0') {
    FUN_002a72c0(0);
    FUN_0029c2cc(*(unsigned int *)(temp_v0 + 0x88),0);
  }
  FUN_00263588(*(unsigned int *)(temp_v0 + 0x88));
  *(unsigned int *)(temp_v0 + 0x88) = 0;
  FUN_002a4d14();
  FUN_00275be8(0);
  FUN_002917b8();
  if (DAT_0044e300 != 0) {
    FUN_002c415c();
    DAT_0044e300 = 0;
  }
  return;
}

} /* extern "C" */
