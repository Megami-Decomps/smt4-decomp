/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3ee4` (_code @ 0x1c3ee4, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00290f48(int);
int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_0029c3b0(int);
int FUN_002a46d8(int);
int FUN_002a7218(unsigned int);
int FUN_002ae898(int, int);
int FUN_002c415c(...);
int FUN_002c43b4(unsigned int, int);
int FUN_00323f40(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int *DAT_0044d198; /* 0x44d198 */

/* Supplied declaration required: FUN_00290f48. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_0029c3b0. */
/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_00323f40. */


void FUN_001c3ee4(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0044d198;
  if (DAT_0044d198 != (unsigned int *)0x0) {
    FUN_00323f40();
    if (*(short *)(puVar1 + 0x40) == 0x22) {
      FUN_0029c3b0(0xf);
      FUN_00290f48(0x3c);
    }
    FUN_002ae898(2,*(unsigned short *)((int)puVar1 + 0x102));
    temp_v0 = 0;
    do {
      if (puVar1[temp_v0 + 10] != 0) {
        FUN_002c43b4(puVar1[temp_v0 + 1],0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    FUN_002a7218(puVar1[0x14]);
    FUN_002a7218(puVar1[0x15]);
    FUN_002c415c(puVar1[0x13]);
    FUN_002c415c(puVar1[0x12]);
    FUN_002c43b4(*puVar1,0);
    FUN_002c415c(puVar1);
    DAT_0044d198 = (unsigned int *)0x0;
    FUN_002a46d8(0x35);
    FUN_002a46d8(0x1a);
    FUN_002917b8();
    FUN_00291944();
    return;
  }
  return;
}

} /* extern "C" */
