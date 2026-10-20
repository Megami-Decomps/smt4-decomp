/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333f6c` (_code @ 0x333f6c, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(...);
int FUN_00237210(unsigned int);
int FUN_0037de7c(void);
int FUN_0038b3f8(int, int);
int FUN_0040a244(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern signed char DAT_00588fd0; /* 0x588fd0 */
extern unsigned int *DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00237210. */
/* Supplied declaration required: FUN_0037de7c. */
/* Supplied declaration required: FUN_0038b3f8. */
/* Supplied declaration required: FUN_0040a244. */


void FUN_00333f6c(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_00588fd4;
  DAT_00588fd0 = DAT_00588fd0 - '\x01';
  if ('\0' < DAT_00588fd0) {
    return;
  }
  if (DAT_00588fd4[0x82e] != 0) {
    FUN_0019a5a0();
    puVar1[0x82e] = 0;
  }
  if (puVar1[0x82f] != 0) {
    FUN_0019a5a0();
    puVar1[0x82f] = 0;
  }
  FUN_00237210(puVar1[0x82d]);
  if (puVar1[0x833] != 0) {
    FUN_0019a5a0();
    puVar1[0x833] = 0;
  }
  if (*(short *)(puVar1 + 0x4e3) != 0) {
    FUN_0038b3f8((int)*(short *)(puVar1 + 0x4e3),1);
  }
  if ((0 < *(short *)((int)puVar1 + 0x138e)) && (puVar1[0x80a] != 0)) {
    FUN_0040a244();
    puVar1[0x80a] = 0;
  }
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_00588fd4 = (unsigned int *)0x0;
  DAT_00588fd0 = 0;
  FUN_0037de7c();
  return;
}

} /* extern "C" */
