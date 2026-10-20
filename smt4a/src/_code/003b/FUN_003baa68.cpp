/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003baa68` (_code @ 0x3baa68, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016431c(unsigned int);
int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int);
int eventTexRequestStopAll(void);
int FUN_002deb84(void);
int bustupCutAnimRequestStopSlots(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_0057f588; /* 0x57f588 */

/* Supplied declaration required: FUN_0016431c. */
/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int scrGetArg(unsigned int);
extern unsigned int FUN_002ba85c(void);
/* Supplied declaration required: eventTexRequestStopAll. */
/* Supplied declaration required: FUN_002deb84. */
/* Supplied declaration required: bustupCutAnimRequestStopSlots. */


unsigned int FUN_003baa68(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x4));
  bustupCutAnimRequestStopSlots();
  eventTexRequestStopAll();
  if ((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) + 0x19c5) = 0x15;
  }
  temp_v1 = FUN_002ba85c();
  temp_v2 = scrGetArg(0);
  temp_v3 = FUN_002deb84();
  FUN_0021bdac(temp_v1,temp_v2,temp_v3,6,0,0);
  temp_v4 = FUN_002deb84();
  if (temp_v4 == 0) {
    FUN_0016431c(*(unsigned int *)(temp_v0 + 4));
    *(unsigned char *)(temp_v0 + 0x19c4) = 0;
    *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v0 + 0xc) | 0x20;
  }
  return temp_v1;
}

} /* extern "C" */
