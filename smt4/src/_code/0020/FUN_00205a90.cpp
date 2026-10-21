/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00205a90` (_code @ 0x205a90, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlItemComputeValues(...);
int FUN_00292be4(unsigned int, int, unsigned int);
int FUN_00298d28(unsigned int, unsigned int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int g_partyPanel; /* 0x43dcf0 */

/* Supplied declaration required: btlItemComputeValues. */
/* Supplied declaration required: FUN_00292be4. */
/* Supplied declaration required: FUN_00298d28. */
extern int gameGetSlotTable(void);


void FUN_00205a90(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [2];
  
  temp_v0 = g_partyPanel;
  temp_v1 = gameGetSlotTable();
  temp_v4 = 0;
  temp_v5[0] = 0;
  if (*(char *)(temp_v0 + 0x678) != '\0') {
    btlItemComputeValues(0xffffffff,*(unsigned short *)(temp_v0 + 0x36),&temp_v4,temp_v5);
    FUN_00292be4(*(unsigned int *)(temp_v0 + 0x6c8),temp_v4,temp_v5[0]);
  }
  temp_v3 = 0;
  do {
    temp_v2 = (int)*(char *)(temp_v1 + temp_v3 + 0x9108);
    if (-1 < temp_v2) {
      btlItemComputeValues(temp_v2,*(unsigned short *)(temp_v0 + 0x36),&temp_v4,temp_v5);
      FUN_00292be4(*(unsigned int *)(temp_v0 + temp_v3 * 4 + 0x6cc),temp_v4,temp_v5[0]);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  temp_v1 = 0;
  do {
    temp_v3 = *(int *)(temp_v0 + temp_v1 * 8 + 0x738);
    if (-1 < temp_v3) {
      btlItemComputeValues(temp_v3,*(unsigned short *)(temp_v0 + 0x36),&temp_v4,temp_v5);
      FUN_00292be4(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x6d8),temp_v4,temp_v5[0]);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  if (*(short *)(temp_v0 + 0x38) < 0) {
    FUN_00298d28(*(unsigned int *)(*(int *)(temp_v0 + 0x6c8) + 0x40),
                 *(unsigned int *)(*(int *)(temp_v0 + 0x6c8) + 0x44));
    return;
  }
  temp_v1 = 0;
  do {
    if (*(int *)(temp_v0 + temp_v1 * 8 + 0x738) == (int)*(short *)(temp_v0 + 0x38)) {
      temp_v3 = temp_v0 + temp_v1 * 4;
      FUN_00298d28(*(unsigned int *)(*(int *)(temp_v3 + 0x6d8) + 0x40),
                   *(unsigned int *)(*(int *)(temp_v3 + 0x6d8) + 0x44));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}

} /* extern "C" */
