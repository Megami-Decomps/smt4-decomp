/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8fac` (_code @ 0x2d8fac, 0x1a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0044de2c; /* 0x44de2c */
extern int DAT_0044de30; /* 0x44de30 */

/* Supplied declaration required: FUN_0026b810. */
/* Supplied declaration required: FUN_002998d8. */
/* Supplied declaration required: FUN_00299974. */
/* Supplied declaration required: FUN_0029a384. */
/* Supplied declaration required: FUN_0029c768. */
/* Supplied declaration required: FUN_0029e260. */
/* Supplied declaration required: FUN_0029eb14. */
extern unsigned int FUN_002b66ec(void);
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002bf86c. */
extern int FUN_002c0b94(void);


void FUN_002d8fac(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  
  temp_v1 = DAT_0044de30;
  temp_v0 = DAT_0044de2c;
  if (((*(int *)(DAT_0044de2c + 0x18) != DAT_0044de30) && (*(char *)(DAT_0044de2c + 0x28) == '\0'))
     && (*(char *)(DAT_0044de2c + 0x355) == '\0')) {
    *(int *)(DAT_0044de2c + 0x18) = DAT_0044de30;
    if (*(char *)(temp_v1 + temp_v0 + 0x34c) != '\0') {
      *(unsigned char *)(temp_v0 + 0x355) = 1;
      FUN_0029e260();
      FUN_0029eb14(1);
      FUN_00299974(0);
      puVar5 = *(unsigned int **)(temp_v0 + 0x350);
      temp_v1 = temp_v0 + DAT_0044de30 * 0x80;
      *puVar5 = *(unsigned int *)(temp_v1 + 0x25e);
      puVar5[1] = *(unsigned int *)(temp_v1 + 0x262);
      puVar5[2] = *(unsigned int *)(temp_v1 + 0x266);
      *(unsigned short *)(puVar5 + 3) = *(unsigned short *)(temp_v1 + 0x26a);
      *(unsigned int *)((int)puVar5 + 0xe) = *(unsigned int *)(temp_v1 + 0x28a);
      *(unsigned int *)((int)puVar5 + 0x12) = *(unsigned int *)(temp_v1 + 0x28e);
      *(unsigned int *)((int)puVar5 + 0x16) = *(unsigned int *)(temp_v1 + 0x292);
      *(unsigned short *)((int)puVar5 + 0x1a) = *(unsigned short *)(temp_v1 + 0x296);
      FUN_002bcf58(puVar5 + 7,temp_v1 + 0x27c,0xe);
      *(unsigned short *)((int)puVar5 + 0x2a) = *(unsigned short *)(temp_v1 + 0x270);
      *(unsigned short *)(puVar5 + 0xb) = *(unsigned short *)(temp_v1 + 0x272);
      puVar5[0xc] = *(unsigned int *)(temp_v1 + 0x26c);
      FUN_002bf86c(puVar5 + 0x13,temp_v1 + 0x24c);
      *(unsigned char *)((int)puVar5 + 0x76) = *(unsigned char *)(temp_v1 + 0x298);
      temp_v2 = FUN_002c0b94();
      FUN_002bf86c(temp_v2 + 0x54,temp_v1 + 0x24c);
      FUN_0029a384(*(unsigned int *)(temp_v0 + 0x350));
      temp_v1 = temp_v0 + DAT_0044de30 * 0x80;
      if (temp_v1 != -0x24c) {
        FUN_0026b810(*(char *)(temp_v1 + 0x2b0) != '\0');
      }
      FUN_0029c768(0);
      temp_v3 = FUN_002b66ec();
      FUN_002bcf58(temp_v3,*(unsigned int *)(temp_v0 + 0x350),0xe);
      FUN_002998d8(1,*(unsigned short *)(*(int *)(temp_v0 + 0x350) + 8));
      FUN_002998d8(2,*(unsigned short *)(*(int *)(temp_v0 + 0x350) + 10));
      FUN_002998d8(0,*(unsigned short *)(*(int *)(temp_v0 + 0x350) + 6));
      return;
    }
    FUN_0029e260(0);
    FUN_0029eb14(1);
    FUN_00299974(0);
    return;
  }
  return;
}
