/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324a20` (_code @ 0x324a20, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern unsigned char LAB_00324b04; /* 0x324b04 */
extern unsigned char LAB_00324b18; /* 0x324b18 */
extern char s_flar02_02_004332a4[10]; /* 0x4332a4 */

/* Supplied declaration required: FUN_002522f8. */
/* Supplied declaration required: FUN_00257c2c. */
/* Supplied declaration required: FUN_002bd540. */
/* Supplied declaration required: FUN_002bd75c. */
extern unsigned int FUN_002c3124(unsigned char *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002c415c. */


void FUN_00324a20(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [132];
  
  temp_v3 = 0;
  do {
    temp_v0 = temp_v3 * 0x4c;
    piVar4 = (int *)(temp_v0 + 0x4332a0);
    if ((*(char *)(temp_v0 + 0x4332ea) != '\0') && (*piVar4 == 0)) {
      temp_v1 = 0;
      FUN_002bd75c();
      *piVar4 = temp_v1;
      FUN_002522f8(temp_v5,0x80,&LAB_00324b18,&LAB_00324b04,s_flar02_02_004332a4 + temp_v0);
      temp_v2 = FUN_002c3124(temp_v5,(unsigned int *)&temp_v4,0);
      *(unsigned int *)(temp_v0 + 0x4332e4) = temp_v2;
      FUN_00257c2c(*piVar4,temp_v2,temp_v4,0x10000);
      *(unsigned int *)(*piVar4 + 0xc) = 0x2000000;
      *(unsigned int *)(*piVar4 + 0x3c) = 1;
      *(unsigned int *)(*piVar4 + 0x40) = 1;
      *(unsigned int *)(*piVar4 + 0x38) = 0;
      FUN_002bd540(*piVar4);
      *(unsigned char *)(temp_v0 + 0x4332e8) = 1;
      FUN_002c415c(*(unsigned int *)(temp_v0 + 0x4332e4));
      *(unsigned int *)(temp_v0 + 0x4332e4) = 0;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x1a);
  return;
}
