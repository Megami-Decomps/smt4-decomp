/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002442ac` (_code @ 0x2442ac, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00303710(void);
int FUN_00352a14(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern unsigned int *DAT_005806a4; /* 0x5806a4 */

/* Supplied declaration required: FUN_00303710. */
/* Supplied declaration required: FUN_00352a14. */


void FUN_002442ac(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_005806a4;
  *DAT_005806a4 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[0x83] = 0xffffffff;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0x42c80000;
  puVar1[0x43] = 0x435c0000;
  puVar1[0x53] = 0;
  puVar1[99] = 0x442f0000;
  puVar1[0x73] = 0x42280000;
  puVar1[0x2c] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  puVar1[0x27] = 0x3f800000;
  puVar1[0x84] = 0;
  puVar1[0x85] = 0;
  puVar1[0x86] = 0;
  puVar1[0x87] = 0;
  puVar1[0xc3] = 0;
  puVar1[0xc4] = 0;
  *(unsigned char *)(puVar1 + 0x88) = 0;
  *(unsigned char *)(puVar1 + 0xae) = 0;
  *(unsigned char *)(puVar1 + 0xc1) = 0;
  puVar1[0xa7] = 0;
  puVar1[0xa8] = 0;
  puVar1[0xa9] = 0;
  puVar1[0xaa] = 0;
  puVar1[0xab] = 0;
  *(unsigned short *)(puVar1 + 0xac) = 0;
  *(unsigned short *)((int)puVar1 + 0x2b2) = 0;
  *(unsigned short *)(puVar1 + 0xad) = 0;
  *(unsigned short *)((int)puVar1 + 0x2b6) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0x42480000;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0x42200000;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0x42480000;
  puVar1[0x1c] = 0x42c80000;
  puVar1[0xc2] = 0;
  *(unsigned char *)(puVar1 + 0x2d) = 0;
  *(unsigned char *)((int)puVar1 + 0xb5) = 0;
  *(unsigned short *)((int)puVar1 + 0xb6) = 0;
  *(unsigned short *)(puVar1 + 0x2e) = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0x3f800000;
  FUN_00352a14();
  puVar1 = DAT_005806a4;
  DAT_005806a4[0xaf] = 0;
  puVar1[0xc5] = DAT_0056fcc0;
  FUN_00303710();
  return;
}

} /* extern "C" */
