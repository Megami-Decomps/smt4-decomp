/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b80fc` (_code @ 0x2b80fc, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00234044(...);
int distSpatial(void);
int libc_strcpy(int, int);
int dataTable2aGetEntryWithAoc(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00581280; /* 0x581280 */

/* Supplied declaration required: FUN_00234044. */
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: dataTable2aGetEntryWithAoc. */


void FUN_002b80fc(void)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_s0;
  int temp_v2;
  unsigned long long temp_v3;
  
  temp_v1 = 0;
  temp_v3 = (unsigned long long)in_s0;
  do {
    if (*(char *)(DAT_00581280 + temp_v1 * 0x3c + 0xc) != '\0') {
      temp_v2 = (int)temp_v3;
      distSpatial();
      if (temp_v2 < 0x43480000) {
        temp_v0 = (int)*(short *)(DAT_00581280 + temp_v1 * 0x3c + 0x14);
        dataTable2aGetEntryWithAoc();
        temp_v2 = DAT_00581280;
        *(unsigned char *)(DAT_00581280 + 0xf0c) = 1;
        *(int *)(temp_v2 + 0xf10) = temp_v1;
        *(int *)(temp_v2 + 0xf14) = (int)*(short *)(temp_v2 + temp_v1 * 0x3c + 0x12);
        libc_strcpy(temp_v2 + 0xf20,temp_v0 + 0xc);
        *(unsigned int *)(DAT_00581280 + 0xf1c) = *(unsigned int *)(temp_v0 + 8);
        FUN_00234044(1,temp_v1);
        return;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  FUN_00234044(0);
  *(unsigned char *)(DAT_00581280 + 0xf0c) = 0;
  return;
}

} /* extern "C" */
