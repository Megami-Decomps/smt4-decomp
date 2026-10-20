/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00244acc` (_code @ 0x244acc, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_00580c90; /* 0x580c90 */
extern unsigned int DAT_00580c94; /* 0x580c94 */
extern unsigned int DAT_005f1638; /* 0x5f1638 */
extern unsigned char DAT_005f32a0; /* 0x5f32a0 */


void FUN_00244acc(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int temp_v5;
  
  temp_v5 = 0;
  DAT_00580c90 = 0;
  do {
    temp_v3 = 0;
    temp_v4 = 8;
    temp_v0 = temp_v5 * 0x17c;
    do {
      temp_v4 = temp_v4 - 1;
      puVar5 = (unsigned int *)(&DAT_005f32a0 + temp_v3 * 0xc + temp_v0);
      temp_v3 = temp_v3 + 1;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
    } while (temp_v4 != 0);
    *(unsigned int *)(temp_v0 + 0x5f330c) = 0;
    *(unsigned int *)(temp_v0 + 0x5f3310) = 0;
    temp_v3 = 0;
    temp_v4 = 6;
    *(unsigned int *)(temp_v0 + 0x5f3314) = 0;
    do {
      temp_v1 = temp_v3 * 4;
      temp_v2 = temp_v3 * 0xc + temp_v0;
      temp_v4 = temp_v4 - 1;
      *(unsigned int *)(&DAT_005f32a0 + temp_v2 + 0x7c) = 0;
      *(unsigned int *)(&DAT_005f32a0 + temp_v2 + 0x80) = 0;
      *(unsigned int *)(&DAT_005f32a0 + temp_v2 + 0x84) = 0;
      temp_v3 = temp_v3 + 1;
      *(unsigned int *)(&DAT_005f32a0 + temp_v1 + temp_v0 + 0xc4) = 0;
    } while (temp_v4 != 0);
    temp_v5 = temp_v5 + 1;
    *(unsigned short *)(temp_v0 + 0x5f3418) = 0;
    *(unsigned short *)(temp_v0 + 0x5f341a) = 0;
    *(unsigned short *)(temp_v0 + 0x5f33fc) = 0;
    *(unsigned short *)(temp_v0 + 0x5f3406) = 0;
    *(unsigned short *)(temp_v0 + 0x5f3408) = 0;
    *(unsigned short *)(temp_v0 + 0x5f340a) = 0;
    *(unsigned char *)(temp_v0 + 0x5f340c) = 0;
    *(unsigned char *)(temp_v0 + 0x5f340d) = 0;
    *(unsigned int *)(temp_v0 + 0x5f3414) = 0;
  } while (temp_v5 < 0xa0);
  DAT_00580c94 = 0;
  DAT_005f1638 = 0xffffffff;
  return;
}

} /* extern "C" */
