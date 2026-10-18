/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031fb04` (_code @ 0x31fb04, 0x1f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int *DAT_0057f290; /* 0x57f290 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001469a8. */
/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_001aeafc. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e3328. */
extern int FUN_002e50d4(void);
/* Supplied declaration required: FUN_002f1908. */
/* Supplied declaration required: FUN_0038b3f8. */
/* Supplied declaration required: FUN_003a2ecc. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_004dc6fc. */


void FUN_0031fb04(void)

{
/* irregular: 16 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  
  piVar1 = DAT_0057f290;
  if (DAT_0057f290 == (int *)0x0) {
    return;
  }
  piVar3 = DAT_0057f290 + 0x249b;
  *(unsigned char *)(DAT_0057f290 + 0x2499) = 1;
  software_interrupt(0x24);
  if (*piVar3 < 0) {
    FUN_002e3140();
  }
  *(unsigned char *)(piVar1 + 0x249c) = 1;
  FUN_001a0d08(piVar3);
  if (*piVar3 != 0) {
    software_interrupt(0x23);
    *piVar3 = 0;
  }
  FUN_001469a8(piVar1[0x249a]);
  temp_v0 = piVar1[0x249a];
  if (temp_v0 != 0) {
    FUN_001469a8();
    FUN_002e3328(temp_v0);
  }
  piVar1[0x249a] = 0;
  FUN_0019a5a0(piVar1[0x249d]);
  piVar1[0x249d] = 0;
  temp_v0 = FUN_002e50d4();
  FUN_00408184(0x25,temp_v0 - piVar1[0x107]);
  if ((char)piVar1[0x2496] != '\0') {
    FUN_001aeafc(DAT_0056fcc0);
  }
  if ((int *)piVar1[0x2484] != (int *)0x0) {
    (**(romwright_code **)(*(int *)piVar1[0x2484] + 4))();
    piVar1[0x2484] = 0;
  }
  FUN_002f1908();
  FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(piVar1[0x2482] + 4));
  FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(piVar1[0x2483] + 4));
  if ((int *)piVar1[0x2482] != (int *)0x0) {
    (**(romwright_code **)(*(int *)piVar1[0x2482] + 4))();
    piVar1[0x2482] = 0;
  }
  if ((int *)piVar1[0x2483] != (int *)0x0) {
    (**(romwright_code **)(*(int *)piVar1[0x2483] + 4))();
    piVar1[0x2483] = 0;
  }
  temp_v0 = 0;
  do {
    if (*(short *)((int)piVar1 + temp_v0 * 2 + 0x6688) != 0) {
      FUN_0038b3f8((int)*(short *)((int)piVar1 + temp_v0 * 2 + 0x6688),1);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  FUN_0019c364(piVar1[0x10b]);
  FUN_0019a5a0(piVar1[0x10a]);
  FUN_0019a5a0(piVar1[0x109]);
  if (*piVar1 != 0) {
    FUN_004dc6fc();
    FUN_002e3328();
  }
  *piVar1 = 0;
  FUN_001631d0(piVar1[0xfe],0);
  FUN_0019a5a0(piVar1);
  DAT_0057f290 = (int *)0x0;
  FUN_001add24(0x24);
  FUN_001add24(0x22);
  FUN_003a2ecc(1);
  return;
}
