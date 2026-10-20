/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6e90` (_code @ 0x3e6e90, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_00275f44(unsigned int, int);
int FUN_0031a400(void);
int FUN_00342010(void);
int FUN_0035b304(void);
int FUN_0037b450(void);
int FUN_003b61ec(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0013def0(unsigned int);
extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_001681cc. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_0031a400. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_003b61ec. */
extern unsigned int FUN_003e71a8(unsigned int *);


unsigned int FUN_003e6e90(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0013def0(0);
  if ((temp_v0 == 3) && (temp_v0 = FUN_0013def0(1), temp_v0 == 3)) {
    FUN_0031a400();
    FUN_00342010();
    FUN_003b61ec();
    FUN_001681cc(0xab);
    FUN_00275f44(param_1[5],0);
    *param_1 = 8;
    temp_v0 = FUN_00224880(param_1[5]);
    if (temp_v0 == 2) {
      FUN_0035b304();
      FUN_0037b450();
      temp_v0 = FUN_0014aa78();
      if (*(int *)(temp_v0 + 0x4c80) != 1) {
        *param_1 = 9;
        temp_v1 = FUN_003e71a8(param_1);
        return temp_v1;
      }
      *param_1 = 10;
      return 0xffffffff;
    }
  }
  return 0;
}

} /* extern "C" */
