/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00422c48` (_code @ 0x422c48, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c76b8(void);
int FUN_001c7c44(unsigned int, unsigned int);
int FUN_001cd5ac(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern signed char DAT_005880d1; /* 0x5880d1 */
extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */
extern unsigned int DAT_005880e8; /* 0x5880e8 */
extern unsigned int DAT_005880ec; /* 0x5880ec */
extern unsigned int DAT_00618518; /* 0x618518 */

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_001c76b8. */
/* Supplied declaration required: FUN_001c7c44. */
/* Supplied declaration required: FUN_001cd5ac. */
extern unsigned int FUN_00439e0c(unsigned int, unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_snd_CTR_InitializeWaveBuffer(unsigned int);


void FUN_00422c48(void)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int unaff_r4;
  unsigned int *puVar6;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_00618518);
  if (DAT_005880d1 != '\0') {
    FUN_001cd5ac();
  }
  temp_v0 = DAT_005880e4;
  if (DAT_005880e4 != 0) {
    unaff_r4 = DAT_005880d8;
  }
  temp_v1 = 0;
  if (DAT_005880e4 != 0) {
    do {
      piVar1 = (int *)(unaff_r4 + temp_v1 * 0x70);
      temp_v2 = 0;
      if (*piVar1 != 0) {
        temp_v2 = piVar1[0x13];
      }
      if ((*piVar1 != 0 && temp_v2 != 0) &&
         (*(char *)(piVar1[1] + piVar1[0x12] * 0x18 + 0x11) == '\x03')) {
        temp_v5 = *(unsigned int *)(piVar1[1] + piVar1[0x12] * 0x18 + 4);
        temp_v3 = piVar1[0x18];
        piVar1[0x18] = temp_v3 + temp_v5;
        piVar1[0x19] = piVar1[0x19] + ((int)temp_v5 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v3,temp_v5);
        piVar1[0x13] = piVar1[0x13] - 1;
        piVar1[0x12] = piVar1[0x12] + 1;
        if (piVar1[0x12] == piVar1[0xe]) {
          piVar1[0x12] = 0;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v0);
  }
  if (DAT_005880ec < DAT_005880e8) {
    do {
      puVar6 = *(unsigned int **)((DAT_005880ec & 0x3f) * 0xc + 0x618524);
      if (puVar6 != (unsigned int *)0x0) {
        if ((unsigned int)puVar6[0xe] <= (unsigned int)puVar6[0x13]) break;
        temp_v6 = *(unsigned int *)((DAT_005880ec & 0x3f) * 0xc + 0x618528);
        temp_v4 = *(unsigned int *)((DAT_005880ec & 0x3f) * 0xc + 0x61852c);
        nn_snd_CTR_InitializeWaveBuffer(puVar6[1] + puVar6[0x11] * 0x18);
        *(unsigned int *)(puVar6[1] + puVar6[0x11] * 0x18) = temp_v6;
        temp_v0 = FUN_00439e0c(temp_v4,1,puVar6[0x10]);
        temp_v1 = puVar6[0x16];
        puVar6[0x16] = temp_v1 + temp_v0;
        puVar6[0x17] = puVar6[0x17] + (unsigned int)romwright_carry_4(temp_v1,temp_v0);
        *(unsigned int *)(puVar6[1] + puVar6[0x11] * 0x18 + 4) = temp_v0;
        *(unsigned char *)(puVar6[1] + puVar6[0x11] * 0x18 + 0x10) = 0;
        FUN_001c7c44(*puVar6,puVar6[1] + puVar6[0x11] * 0x18);
        puVar6[0x13] = puVar6[0x13] + 1;
        puVar6[0x11] = puVar6[0x11] + 1;
        if (puVar6[0x11] == puVar6[0xe]) {
          puVar6[0x11] = 0;
        }
        puVar6[0x14] = puVar6[0x14] - 1;
      }
      DAT_005880ec = DAT_005880ec + 1;
    } while (DAT_005880ec < DAT_005880e8);
  }
  if (DAT_005880d1 != '\0') {
    FUN_001c76b8();
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_00618518);
  return;
}

} /* extern "C" */
