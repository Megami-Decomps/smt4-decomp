/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034ebc8` (_code @ 0x34ebc8, 0x1c8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_0044d0f8; /* 0x44d0f8 */
extern int *DAT_0044d0fc; /* 0x44d0fc */
extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d104; /* 0x44d104 */
extern int DAT_0044d108; /* 0x44d108 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */
extern int DAT_0044d128; /* 0x44d128 */
extern unsigned char DAT_0044d12c; /* 0x44d12c */
extern unsigned int DAT_004c40f8; /* 0x4c40f8 */
extern unsigned int DAT_004c4100; /* 0x4c4100 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0010fb6c. */
/* Supplied declaration required: FUN_0010fb9c. */
/* Supplied declaration required: FUN_0010fe58. */
/* Supplied declaration required: FUN_0015a3f4. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002bd620. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c4160. */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c5468. */


void FUN_0034ebc8(void)

{
/* irregular: 1 goto(s); 14 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int *piVar4;
  int iStack_20;
  unsigned char temp_v2 [8];
  
  if (DAT_0044d0fc == (int *)0x0) {
    return;
  }
  FUN_002c3aa8(&DAT_004c40f8);
  temp_v1 = 0;
  if (temp_v1 < DAT_0044d10c) {
    do {
      temp_v0 = *(int *)(DAT_0044d100 + temp_v1 * 0x70);
      if (temp_v0 != 0) {
        FUN_0015a3f4(temp_v0,1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_0044d10c);
  }
  FUN_002c3a24(&DAT_004c40f8);
  DAT_0044d0f8 = 0;
  iStack_20 = DAT_0044d128;
  puVar2 = temp_v2;
  FUN_002c42fc(puVar2,&iStack_20,1,0,0xffffffff,0xffffffff);
  if ((int)puVar2 < 0) {
    FUN_002c5468();
  }
  DAT_0044d12c = 1;
  FUN_002c41e8(&DAT_0044d128);
  if (DAT_0044d128 != 0) {
    software_interrupt(0x23);
    DAT_0044d128 = 0;
  }
  FUN_002c4160(DAT_0044d108);
  temp_v0 = DAT_0044d108;
  if (DAT_0044d108 != 0) {
    FUN_002c4160(DAT_0044d108);
    FUN_002b2520(temp_v0);
  }
  DAT_0044d108 = 0;
  FUN_002c4360(DAT_0044d104);
  DAT_0044d104 = 0;
  temp_v1 = 0;
  if (DAT_0044d10c == 0) {
LAB_0034ed48:
    DAT_004c4100 = 0xffffffff;
    (**(romwright_code **)(*DAT_0044d0fc + 4))(DAT_0044d0fc,DAT_0044d100);
    DAT_0044d0fc = (int *)0x0;
    FUN_0010fe58();
    FUN_0010fb6c();
    FUN_0010fb9c();
    return;
  }
  do {
    if (temp_v1 < DAT_0044d10c) {
      FUN_002c3aa8(&DAT_004c40f8);
      piVar4 = (int *)(DAT_0044d100 + temp_v1 * 0x70);
      if (*piVar4 != 0) {
        FUN_002bd620();
        *piVar4 = 0;
      }
      if (piVar4[1] != 0) {
        (**(romwright_code **)(*DAT_0044d0fc + 4))();
        piVar4[1] = 0;
      }
      FUN_002c3a24(&DAT_004c40f8);
    }
    do {
      temp_v1 = temp_v1 + 1;
      if (DAT_0044d10c <= temp_v1) goto LAB_0034ed48;
    } while ((int)temp_v1 < 0);
  } while( 1 );
}
