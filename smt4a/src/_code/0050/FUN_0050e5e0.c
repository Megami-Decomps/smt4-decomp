/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050e5e0` (_code @ 0x50e5e0, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0041ac24; /* 0x41ac24 */
extern unsigned char LAB_0041bb28; /* 0x41bb28 */
extern unsigned char DAT_00613178; /* 0x613178 */
extern unsigned char DAT_00614d7c; /* 0x614d7c */
extern unsigned char DAT_006160e0; /* 0x6160e0 */

/* Supplied declaration required: FUN_002f5020. */


unsigned char * FUN_0050e5e0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char temp_v1;
  
  FUN_002f5020();
  FUN_002f5020(&DAT_00613178,&LAB_0041ac24,0x1c,0x100);
  FUN_002f5020(&DAT_00614d7c,&LAB_0041bb28,0x7c,0x28);
  temp_v0 = 0x80;
  puVar2 = &DAT_006160e0;
  while (temp_v1 = temp_v0 != 0, temp_v0 = temp_v0 - 1, temp_v1) {
    (*(romwright_code *)0x41d0e0)(puVar2);
    puVar2 = puVar2 + 0x1c;
  }
  return &DAT_006160e0;
}
