/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e9b8` (_code @ 0x34e9b8, 0x1c8 bytes) from smt4_v1.2.0.cxi.
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
/* Supplied declaration required: FUN_0010fc60. */
/* Supplied declaration required: FUN_0010fc90. */
/* Supplied declaration required: FUN_0010ff4c. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002bd430. */
/* Supplied declaration required: FUN_002c3f5c. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_os_Thread_FinalizeImpl(unsigned int);
extern void nn_snd_CTR_Voice_SetState(unsigned int, int);


void FUN_0034e9b8(void)

{
/* irregular: 1 goto(s); 10 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int *piVar4;
  int iStack_20;
  unsigned char temp_v2 [8];
  
  if (DAT_0044d0fc == (int *)0x0) {
    return;
  }
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004c40f8);
  temp_v1 = 0;
  if (temp_v1 < DAT_0044d10c) {
    do {
      temp_v0 = *(int *)(DAT_0044d100 + temp_v1 * 0x70);
      if (temp_v0 != 0) {
        nn_snd_CTR_Voice_SetState(temp_v0,1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_0044d10c);
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004c40f8);
  DAT_0044d0f8 = 0;
  iStack_20 = DAT_0044d128;
  puVar2 = temp_v2;
  FUN_002c40f8(puVar2,&iStack_20,1,0,0xffffffff,0xffffffff);
  if ((int)puVar2 < 0) {
    FUN_002c526c();
  }
  DAT_0044d12c = 1;
  nn_os_Thread_FinalizeImpl((unsigned int)&DAT_0044d128);
  if (DAT_0044d128 != 0) {
    software_interrupt(0x23);
    DAT_0044d128 = 0;
  }
  FUN_002c3f5c(DAT_0044d108);
  temp_v0 = DAT_0044d108;
  if (DAT_0044d108 != 0) {
    FUN_002c3f5c(DAT_0044d108);
    FUN_002b2368(temp_v0);
  }
  DAT_0044d108 = 0;
  FUN_002c415c(DAT_0044d104);
  DAT_0044d104 = 0;
  temp_v1 = 0;
  if (DAT_0044d10c == 0) {
LAB_0034eb38:
    DAT_004c4100 = 0xffffffff;
    (**(romwright_code **)(*DAT_0044d0fc + 4))(DAT_0044d0fc,DAT_0044d100);
    DAT_0044d0fc = (int *)0x0;
    FUN_0010ff4c();
    FUN_0010fc60();
    FUN_0010fc90();
    return;
  }
  do {
    if (temp_v1 < DAT_0044d10c) {
      nn_os_CriticalSection_Enter((unsigned int)&DAT_004c40f8);
      piVar4 = (int *)(DAT_0044d100 + temp_v1 * 0x70);
      if (*piVar4 != 0) {
        FUN_002bd430();
        *piVar4 = 0;
      }
      if (piVar4[1] != 0) {
        (**(romwright_code **)(*DAT_0044d0fc + 4))();
        piVar4[1] = 0;
      }
      nn_os_CriticalSection_Leave((unsigned int)&DAT_004c40f8);
    }
    do {
      temp_v1 = temp_v1 + 1;
      if (DAT_0044d10c <= temp_v1) goto LAB_0034eb38;
    } while ((int)temp_v1 < 0);
  } while( 1 );
}
