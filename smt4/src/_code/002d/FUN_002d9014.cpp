/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d9014` (_code @ 0x2d9014, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026b5a8(int);
int FUN_0029963c(int, int);
int FUN_002996d8(int);
int FUN_0029a0e8(unsigned int);
int FUN_0029c4c8(int);
int FUN_0029dfc0(...);
int FUN_0029e874(int);
int libc_strcpy(...);
int rt_memcpy_w(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int g_saveLoadUI; /* 0x44de2c */
extern int DAT_0044de30; /* 0x44de30 */

/* Supplied declaration required: FUN_0026b5a8. */
/* Supplied declaration required: FUN_0029963c. */
/* Supplied declaration required: FUN_002996d8. */
/* Supplied declaration required: FUN_0029a0e8. */
/* Supplied declaration required: FUN_0029c4c8. */
/* Supplied declaration required: FUN_0029dfc0. */
/* Supplied declaration required: FUN_0029e874. */
extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: libc_strcpy. */
extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002d9014(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  
  temp_v1 = DAT_0044de30;
  temp_v0 = g_saveLoadUI;
  if (((*(int *)(g_saveLoadUI + 0x18) != DAT_0044de30) && (*(char *)(g_saveLoadUI + 0x28) == '\0'))
     && (*(char *)(g_saveLoadUI + 0x355) == '\0')) {
    *(int *)(g_saveLoadUI + 0x18) = DAT_0044de30;
    if (*(char *)(temp_v1 + temp_v0 + 0x34c) != '\0') {
      *(unsigned char *)(temp_v0 + 0x355) = 1;
      FUN_0029dfc0();
      FUN_0029e874(1);
      FUN_002996d8(0);
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
      rt_memcpy_w(puVar5 + 7,temp_v1 + 0x27c,0xe);
      *(unsigned short *)((int)puVar5 + 0x2a) = *(unsigned short *)(temp_v1 + 0x270);
      *(unsigned short *)(puVar5 + 0xb) = *(unsigned short *)(temp_v1 + 0x272);
      puVar5[0xc] = *(unsigned int *)(temp_v1 + 0x26c);
      libc_strcpy(puVar5 + 0x13,temp_v1 + 0x24c);
      *(unsigned char *)((int)puVar5 + 0x76) = *(unsigned char *)(temp_v1 + 0x298);
      temp_v2 = gameDataBlocksGetSaveData();
      libc_strcpy(temp_v2 + 0x54,temp_v1 + 0x24c);
      FUN_0029a0e8(*(unsigned int *)(temp_v0 + 0x350));
      temp_v1 = temp_v0 + DAT_0044de30 * 0x80;
      if (temp_v1 != -0x24c) {
        FUN_0026b5a8(*(char *)(temp_v1 + 0x2b0) != '\0');
      }
      FUN_0029c4c8(0);
      temp_v3 = gameGetPlayerData();
      rt_memcpy_w(temp_v3,*(unsigned int *)(temp_v0 + 0x350),0xe);
      FUN_0029963c(1,*(unsigned short *)(*(int *)(temp_v0 + 0x350) + 8));
      FUN_0029963c(2,*(unsigned short *)(*(int *)(temp_v0 + 0x350) + 10));
      FUN_0029963c(0,*(unsigned short *)(*(int *)(temp_v0 + 0x350) + 6));
      return;
    }
    FUN_0029dfc0(0);
    FUN_0029e874(1);
    FUN_002996d8(0);
    return;
  }
  return;
}

} /* extern "C" */
