#include "romwright_types.h"

extern "C" {

int FUN_004fdcd8(int, int, int, int, int, int, int, int);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_004fdcd8. */


unsigned int FUN_003358b4(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_004fdcd8(0,0,0,0,7,0,6,0);
                    /* WARNING: Treating indirect jump as return */
  return 1;
}

} /* extern "C" */
