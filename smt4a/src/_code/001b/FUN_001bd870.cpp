/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bd870` (_code @ 0x1bd870, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a08d8(int *);
int FUN_001af148(void);
int FUN_001c7598(void);
int FUN_001c76b8(void);
int FUN_001cd5ac(void);
int coproc_moveto_Data_Synchronization(int);
int nn_snd_CTR_MasterManager_GetAuxCallback(...);
int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char DAT_00643380; /* 0x643380 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_001a08d8. */
/* Supplied declaration required: FUN_001af148. */
extern int *FUN_001afa44(void);
/* Supplied declaration required: FUN_001c7598. */
/* Supplied declaration required: FUN_001c76b8. */
/* Supplied declaration required: FUN_001cd5ac. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nn_snd_CTR_MasterManager_GetAuxCallback. */


void FUN_001bd870(void)

{
/* irregular: 10 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int temp_v6;
  int iStack_34;
  unsigned int temp_v7;
  int iStack_2c;
  unsigned char temp_v8 [4];
  unsigned char temp_v9 [12];
  
  piVar2 = (int *)FUN_001afa44();
  *(unsigned char *)((int)piVar2 + 0xd) = 1;
  do {
    puVar6 = (unsigned int *)0x0;
    temp_v5 = 0;
    temp_v7 = 0;
    iStack_2c = 0;
    if ((char)piVar2[2] != '\0') {
      puVar6 = &temp_v7;
      FUN_001c7598();
      software_interrupt(0x28);
      temp_v5 = temp_v3;
    }
    else {
      FUN_001cd5ac();
    }
    temp_v1 = piVar2[10];
    temp_v0 = *(char *)((int)piVar2 + 0xe);
    temp_v2 = 0;
    if ((int)temp_v0 != 0) {
      nn_snd_CTR_MasterManager_GetAuxCallback(&DAT_00643380,0,&temp_v6,temp_v8);
      nn_snd_CTR_MasterManager_GetAuxCallback(&DAT_00643380,1,&iStack_34,temp_v9);
      temp_v2 = 0;
      if (temp_v6 != 0 || iStack_34 != 0) {
        temp_v2 = 1;
      }
    }
    temp_v2 = (int)temp_v0 & (temp_v2 | temp_v1 != 0);
    if (temp_v2 != 0) {
      coproc_moveto_Data_Synchronization(0);
      FUN_001a08d8(piVar2 + 0x10);
    }
    if (((char)piVar2[0xc] == '\0') && ((romwright_code *)piVar2[10] != (romwright_code *)0x0)) {
      (*(romwright_code *)piVar2[10])(piVar2[0xb]);
    }
    if (piVar2[8] != 0) {
      nn_os_CriticalSection_Enter((unsigned int)(piVar2 + 0xd));
      (*(romwright_code *)piVar2[8])(piVar2[9]);
      nn_os_CriticalSection_Leave((unsigned int)(piVar2 + 0xd));
    }
    if (temp_v2 != 0) {
      FUN_001af148();
    }
    nn_os_CriticalSection_Enter((unsigned int)(piVar2 + 0xd));
    FUN_001c76b8();
    nn_os_CriticalSection_Leave((unsigned int)(piVar2 + 0xd));
    puVar5 = (unsigned int *)(unsigned int)*(unsigned char *)(piVar2 + 2);
    if (puVar5 != (unsigned int *)0x0) {
      software_interrupt(0x28);
      piVar2[1] = iStack_2c + (temp_v4 - (temp_v5 + (unsigned int)(puVar5 < puVar6))) +
                  (unsigned int)romwright_carry_4(temp_v7,(int)puVar5 - (int)puVar6);
      *piVar2 = temp_v7 + ((int)puVar5 - (int)puVar6);
    }
  } while (*(char *)((int)piVar2 + 0xd) != '\0');
  return;
}

} /* extern "C" */
