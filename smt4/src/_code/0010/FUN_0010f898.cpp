/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f898` (_code @ 0x10f898, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bb7c4(unsigned char *, unsigned int, int, unsigned int, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_00471b48; /* 0x471b48 */

/* Supplied declaration required: FUN_002bb7c4. */


void FUN_0010f898(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned char temp_v1 [4];
  
  temp_v0 = (*(unsigned int *)((unsigned char *)&DAT_00471b48 + 0x8));
  if ((param_1 & 0xfff) == 0) {
    if ((*(unsigned int *)((unsigned char *)&DAT_00471b48 + 0x8)) < param_1) {
      puVar2 = temp_v1;
      FUN_002bb7c4(puVar2,(*(unsigned int *)((unsigned char *)&DAT_00471b48 + 0x8)) + 0x8000000,0,param_1 - (*(unsigned int *)((unsigned char *)&DAT_00471b48 + 0x8)),3,3);
      temp_v0 = param_1;
      if ((int)puVar2 < 0) {
        return;
      }
    }
    else {
      puVar2 = temp_v1;
      FUN_002bb7c4(puVar2,param_1 + 0x8000000,0,(*(unsigned int *)((unsigned char *)&DAT_00471b48 + 0x8)) - param_1,1,0);
      temp_v0 = param_1;
      if ((int)puVar2 < 0) {
        return;
      }
    }
  }
  (*(unsigned int *)((unsigned char *)&DAT_00471b48 + 0x8)) = temp_v0;
  return;
}

} /* extern "C" */
