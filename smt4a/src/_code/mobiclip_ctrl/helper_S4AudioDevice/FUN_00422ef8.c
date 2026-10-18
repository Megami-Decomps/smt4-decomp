/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00422ef8` (_code @ 0x422ef8, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_005880d0; /* 0x5880d0 */
extern signed char DAT_005880d1; /* 0x5880d1 */
extern int *DAT_005880d4; /* 0x5880d4 */
extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880dc; /* 0x5880dc */
extern int DAT_005880e0; /* 0x5880e0 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */
extern int DAT_005880f0; /* 0x5880f0 */
extern unsigned char uRam005880f4; /* 0x5880f4 */
extern unsigned int DAT_00618518; /* 0x618518 */
extern unsigned int DAT_00618520; /* 0x618520 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001469a8. */
/* Supplied declaration required: FUN_00146dc8. */
/* Supplied declaration required: FUN_00146e30. */
/* Supplied declaration required: FUN_00147120. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_001afdc4. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetState. */


void FUN_00422ef8(void)

{
/* irregular: 1 goto(s); 13 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  
  if (DAT_005880d4 == (int *)0x0) {
    return;
  }
  nn_os_CriticalSection_Enter(&DAT_00618518);
  temp_v1 = 0;
  if (temp_v1 < DAT_005880e4) {
    do {
      temp_v0 = *(int *)(DAT_005880d8 + temp_v1 * 0x70);
      if (temp_v0 != 0) {
        nn_snd_CTR_Voice_SetState(temp_v0,1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_005880e4);
  }
  nn_os_CriticalSection_Leave(&DAT_00618518);
  DAT_005880d0 = 0;
  if (DAT_005880d1 != '\0') {
    software_interrupt(0x24);
    if (DAT_005880f0 < 0) {
      FUN_002e3140();
    }
    uRam005880f4 = 1;
    FUN_001a0d08(&DAT_005880f0);
    if (DAT_005880f0 != 0) {
      software_interrupt(0x23);
      DAT_005880f0 = 0;
    }
  }
  FUN_001469a8(DAT_005880e0);
  temp_v0 = DAT_005880e0;
  if (DAT_005880e0 != 0) {
    FUN_001469a8(DAT_005880e0);
    FUN_002e3328(temp_v0);
  }
  DAT_005880e0 = 0;
  FUN_0019a5a0(DAT_005880dc);
  DAT_005880dc = 0;
  temp_v1 = 0;
  if (DAT_005880e4 == 0) {
LAB_00423070:
    DAT_00618520 = 0xffffffff;
    (**(romwright_code **)(*DAT_005880d4 + 4))(DAT_005880d4,DAT_005880d8);
    DAT_005880d4 = (int *)0x0;
    FUN_00147120();
    FUN_00146dc8();
    FUN_00146e30();
    return;
  }
  do {
    if (temp_v1 < DAT_005880e4) {
      nn_os_CriticalSection_Enter(&DAT_00618518);
      piVar3 = (int *)(DAT_005880d8 + temp_v1 * 0x70);
      if (*piVar3 != 0) {
        FUN_001afdc4();
        *piVar3 = 0;
      }
      if (piVar3[1] != 0) {
        (**(romwright_code **)(*DAT_005880d4 + 4))();
        piVar3[1] = 0;
      }
      nn_os_CriticalSection_Leave(&DAT_00618518);
    }
    do {
      temp_v1 = temp_v1 + 1;
      if (DAT_005880e4 <= temp_v1) goto LAB_00423070;
    } while ((int)temp_v1 < 0);
  } while( 1 );
}
