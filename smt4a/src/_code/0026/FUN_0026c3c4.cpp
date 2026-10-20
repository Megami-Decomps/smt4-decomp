/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c3c4` (_code @ 0x26c3c4, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int slotRecordFindById(...);
int FUN_002f01e0(int, unsigned int);
int FUN_0035da20(unsigned int *, int);
int rt_memcpy(int, unsigned int, unsigned int);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: slotRecordFindById. */
/* Supplied declaration required: FUN_002f01e0. */
/* Supplied declaration required: FUN_0035da20. */
extern unsigned int countUnlockedSlots(void);
extern char FUN_004bcaa8(unsigned short, unsigned short, int, unsigned int *, unsigned char);
extern unsigned int getUnlockedSlotCount(void);
/* Supplied declaration required: rt_memcpy. */


void FUN_0026c3c4(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v3 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  temp_v4 = 8;
  if (*(short *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1390) < 0) {
    temp_v4 = countUnlockedSlots();
  }
  else if ((0 < *(short *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1390)) && (*(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2017) != '\a')) {
    slotRecordFindById(*(unsigned short *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1390));
    temp_v4 = getUnlockedSlotCount();
  }
  temp_v1 = temp_v3 + 0x13e0;
  rt_memcpy(temp_v1,param_1,temp_v4 << 1);
  FUN_002f01e0(temp_v1,temp_v4 & 0xff);
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  if ((*(short *)(temp_v3 + 0x1390) >= 1) &&
     (!(*(char *)(temp_v3 + 0x2017) == '\a' || *(char *)(temp_v3 + 0x2017) == '\x10'))) {
    temp_v2 = slotRecordFindById(*(unsigned short *)(temp_v3 + 0x1390));
    temp_v0 = *(char *)(temp_v3 + 0x2017);
    if ((temp_v0 == '\x02' || temp_v0 == '\x11') || temp_v0 == '\x03') {
      temp_v2 = slotRecordFindById();
    }
    temp_v0 = '\0';
    if (temp_v2 != 0) {
      temp_v0 = *(char *)(temp_v2 + 0x67);
    }
    temp_v0 = FUN_004bcaa8(*(unsigned short *)(temp_v3 + 0x1390),*(unsigned short *)(temp_v3 + 0x1392),temp_v1,
                         (unsigned int *)&temp_v5,temp_v2 != 0 && temp_v0 != '\0');
    temp_v3 = (int)temp_v0;
    puVar4 = (unsigned int *)&temp_v5;
  }
  else {
    temp_v3 = -1;
    puVar4 = (unsigned int *)0x0;
  }
  FUN_0035da20(puVar4,temp_v3);
  return;
}

} /* extern "C" */
