/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328f60` (_code @ 0x328f60, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} void_stack;

extern unsigned char LAB_00329000; /* 0x329000 */
extern unsigned char LAB_00329014; /* 0x329014 */
extern char s_flar02_02_004332a4[10]; /* 0x4332a4 */

/* Supplied declaration required: FUN_00252538. */
/* Supplied declaration required: FUN_00257e60. */
/* Supplied declaration required: FUN_002bd940. */
extern unsigned int FUN_002c32f0(unsigned char *, unsigned int *, unsigned int);


void FUN_00328f60(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned char temp_v5 [128];
  
  temp_v3 = 0;
  do {
    temp_v0 = temp_v3 * 0x4c;
    piVar5 = (int *)(temp_v0 + 0x4332a0);
    if ((*(char *)(temp_v0 + 0x4332ea) != '\x01') && (*piVar5 == 0)) {
      temp_v1 = 0;
      FUN_002bd940();
      *piVar5 = temp_v1;
      FUN_00252538(temp_v5,0x80,&LAB_00329014,&LAB_00329000,s_flar02_02_004332a4 + temp_v0);
      temp_v2 = FUN_002c32f0(temp_v5,(unsigned int *)&temp_v4,0);
      *(unsigned int *)(temp_v0 + 0x4332e4) = temp_v2;
      FUN_00257e60(*piVar5,temp_v2,temp_v4,0x10000);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x1a);
  return;
}
