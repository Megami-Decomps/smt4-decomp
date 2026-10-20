/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ee28` (_code @ 0x35ee28, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_00236038(int);
int FUN_00301a08(unsigned int, int [5], int [2]);
int FUN_003283ac(void);
int FUN_003eaf20(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

/* Supplied declaration required: FUN_0014aa78. */
extern unsigned int FUN_00232388(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00301a08. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_0035ee28(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2 [2];
  int temp_v3 [5];
  
  FUN_00236038(0);
  FUN_00236038(1);
  temp_v0 = FUN_00232388();
  FUN_00301a08(temp_v0,temp_v3,temp_v2);
  temp_v1 = temp_v3[0];
  if (temp_v3[0] < temp_v2[0] + temp_v3[0]) {
    do {
      FUN_0014aa78();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v3[0] + temp_v2[0]);
  }
  temp_v1 = FUN_0014aa78();
  if (*(char *)(temp_v1 + 0x4cd1) != '\0') {
    FUN_0014aa78();
    FUN_003eaf20();
  }
  FUN_003283ac();
  return 1;
}

} /* extern "C" */
