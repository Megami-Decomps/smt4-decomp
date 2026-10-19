/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba2b8` (_code @ 0x2ba2b8, 0x260 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int DAT_004c62a4; /* 0x4c62a4 */
extern signed char DAT_004c62a8; /* 0x4c62a8 */
extern int DAT_004c6330; /* 0x4c6330 */

/* Supplied declaration required: FUN_00142fb8. */
/* Supplied declaration required: FUN_00142fcc. */
/* Supplied declaration required: FUN_00142fec. */
/* Supplied declaration required: FUN_0014300c. */
/* Supplied declaration required: FUN_00147948. */


void FUN_002ba2b8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char *puVar8;
  unsigned short temp_v7;
  unsigned char temp_v8;
  
  temp_v0 = DAT_004c6330;
  if ((DAT_004c62a8 != '\x01') &&
     (temp_v1 = *(int *)(DAT_004c6330 + 0x24), temp_v1 < *(int *)(DAT_004c6330 + 0x20))) {
    do {
      if (DAT_004c62a4 + *(int *)(temp_v0 + 0x28) <= temp_v1) {
        return;
      }
      puVar8 = (unsigned char *)(*(int *)(temp_v0 + 0x18) + temp_v1 * 0x1c);
      switch(*puVar8) {
      case 0:
        FUN_00142fb8(*(unsigned int *)(puVar8 + 8),*(unsigned int *)(puVar8 + 4),
                     *(unsigned int *)(puVar8 + 0xc),~*(unsigned int *)(puVar8 + 0x10) & 1);
        break;
      case 1:
        FUN_00147948(*(unsigned int *)(puVar8 + 4),*(unsigned int *)(puVar8 + 8),
                     ~(*(unsigned int *)(puVar8 + 0xc) >> 2) & 1,*(unsigned int *)(puVar8 + 0xc) & 1);
        break;
      case 2:
        FUN_00142fec(*(int *)(puVar8 + 4),
                     *(int *)(puVar8 + 4) + (*(unsigned int *)(puVar8 + 0xc) & 0x7fffff),
                     *(unsigned int *)(puVar8 + 8),((*(unsigned int *)(puVar8 + 0xc) >> 0xf) & 0x300) | 1,
                     *(int *)(puVar8 + 0x10),
                     (*(unsigned int *)(puVar8 + 0x18) & 0x7fffff) + *(int *)(puVar8 + 0x10),
                     *(unsigned int *)(puVar8 + 0x14),((*(unsigned int *)(puVar8 + 0x18) >> 0xf) & 0x300) | 1)
        ;
        break;
      case 3:
        temp_v2 = *(unsigned int *)(puVar8 + 0x14);
        temp_v4 = *(unsigned int *)(puVar8 + 0xc);
        temp_v5 = *(unsigned int *)(puVar8 + 0x10);
        temp_v6 = temp_v2 << 0x19;
        temp_v7 = temp_v5;
        temp_v8 = (temp_v4 & 0xffff) <= temp_v7;
        temp_v3 = (temp_v2 & 0x7f) >> 6;
        if (temp_v8) {
          temp_v6 = temp_v5 >> 0x10;
        }
        if (!temp_v8 || temp_v6 < temp_v4 >> 0x10) {
          temp_v3 = temp_v3 | 4;
        }
        FUN_00142fcc(*(unsigned int *)(puVar8 + 4),temp_v4 & 0xffff,temp_v4 >> 0x10,
                     *(unsigned int *)(puVar8 + 8),temp_v7,temp_v5 >> 0x10,
                     ((temp_v2 >> 6) & 0x20) |
                     ((temp_v2 & 0x200) << 7) |
                     ((temp_v2 & 0x180) << 0x11) | temp_v3 | ((temp_v2 & 7) << 8) | ((temp_v2 & 0x38) << 9)
                     | ((temp_v2 >> 9) & 2));
        break;
      case 4:
        temp_v6 = *(unsigned int *)(puVar8 + 0x10);
        if (((temp_v6 & 0xffff) != 0) || (temp_v3 = 0, (*(unsigned int *)(puVar8 + 0x14) & 0xffff) != 0)) {
          temp_v3 = 4;
        }
        FUN_0014300c(*(unsigned int *)(puVar8 + 4),*(unsigned int *)(puVar8 + 8),
                     *(unsigned int *)(puVar8 + 0xc),temp_v6 >> 0x10,temp_v6 & 0xffff,
                     *(unsigned int *)(puVar8 + 0x14) >> 0x10,*(unsigned int *)(puVar8 + 0x14) & 0xffff,temp_v3 | 8);
      }
      temp_v1 = *(int *)(temp_v0 + 0x24) + 1;
      *(int *)(temp_v0 + 0x24) = temp_v1;
      if (puVar8[2] == '\x01') {
        DAT_004c62a8 = 1;
        return;
      }
    } while (temp_v1 < *(int *)(temp_v0 + 0x20));
  }
  return;
}
