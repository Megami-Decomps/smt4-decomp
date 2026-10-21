/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324b68` (_code @ 0x324b68, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014f0dc(unsigned char *, unsigned char [20], float *, int);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_005806a0; /* 0x5806a0 */
extern unsigned char g_localCamera; /* 0x5f10cc */

/* Supplied declaration required: FUN_0014f0dc. */


void FUN_00324b68(void)

{
/* irregular: irregular input(s): in_s3, in_s4, in_s5; 5 native warning(s); review required */
  float in_s3;
  float in_s4;
  float in_s5;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  unsigned char temp_v3 [20];
  
  temp_v0 = in_s3 + *(float *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x29c);
  temp_v1 = in_s4 + *(float *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2a0);
  temp_v2 = in_s5 + *(float *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2a4);
  FUN_0014f0dc(&g_localCamera,temp_v3,&temp_v0,(*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x20);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
