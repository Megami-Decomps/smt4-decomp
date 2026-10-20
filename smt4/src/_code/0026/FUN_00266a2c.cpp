/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00266a2c` (_code @ 0x266a2c, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026f9b4(void);
int FUN_00287328(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00447060; /* 0x447060 */
extern unsigned int DAT_0049f944; /* 0x49f944 */
extern signed char DAT_0049fa39; /* 0x49fa39 */
extern signed char DAT_0049fa61; /* 0x49fa61 */

/* Supplied declaration required: FUN_0026f9b4. */
/* Supplied declaration required: FUN_00287328. */
extern int FUN_00287468(unsigned int);
extern int FUN_00287894(void);
extern int FUN_002903f0(void);


void FUN_00266a2c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_0049fa61 == '\0') && (DAT_0049fa39 != '\0')) &&
     (*(char *)(DAT_00447060 + 0x999) == '\0')) {
    if (*(int *)(DAT_00447060 + 0x40) == 0x66) {
      DAT_0049f944 = 0x1000055;
    }
    else if (*(int *)(DAT_00447060 + 0x40) == 0x67) {
      DAT_0049f944 = 0x1000056;
    }
    else if (*(int *)(DAT_00447060 + 0x48) == 5) {
      DAT_0049f944 = 0x1000054;
    }
    else {
      DAT_0049f944 = 0x1000053;
    }
    if ((*(int *)(DAT_00447060 + 0x994) != 1 && *(int *)(DAT_00447060 + 0x994) != 2) &&
       (temp_v0 = FUN_002903f0(), temp_v0 != 0)) {
      temp_v0 = FUN_00287894();
      if (temp_v0 == 1) {
        DAT_0049f944 = 0x1000037;
      }
      else if (temp_v0 == 0) {
        DAT_0049f944 = 0x1000038;
      }
    }
    temp_v0 = FUN_00287468(DAT_0049f944);
    if (temp_v0 != 0) {
      if (temp_v0 == 1 || temp_v0 == 2) {
        return;
      }
    }
    else {
      FUN_0026f9b4();
    }
    FUN_00287328(DAT_0049f944);
    return;
  }
  FUN_0026f9b4();
  DAT_0049fa39 = 1;
  return;
}

} /* extern "C" */
