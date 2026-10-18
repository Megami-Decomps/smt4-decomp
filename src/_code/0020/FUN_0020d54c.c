/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d54c` (_code @ 0x20d54c, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00447a78; /* 0x447a78 */
extern unsigned int DAT_0049fbe4; /* 0x49fbe4 */
extern unsigned int DAT_0049fbe8; /* 0x49fbe8 */
extern unsigned int DAT_0049fbec; /* 0x49fbec */
extern unsigned int DAT_0049fbf0; /* 0x49fbf0 */

/* Supplied declaration required: FUN_002533fc. */
extern unsigned int FUN_0025be50(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a06c8. */


void FUN_0020d54c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned char *puVar4;
  unsigned int temp_v2;
  
  temp_v0 = DAT_00447a78;
  puVar4 = (unsigned char *)(DAT_00447a78 + 0xcc70);
  temp_v1 = FUN_0025be50(DAT_0049fbe4,DAT_0049fbe8,7);
  *(unsigned int *)(temp_v0 + 0xcc90) = temp_v1;
  FUN_002a06c8(temp_v1,1);
  puVar3 = *(unsigned int **)(temp_v0 + 0xcc90);
  temp_v2 = 0;
  *puVar3 = *puVar3 | 2;
  *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
  *puVar4 = 1;
  *(unsigned char *)(temp_v0 + 0xcc71) = 0;
  *(unsigned char *)(temp_v0 + 0xcc72) = 0;
  *(unsigned int *)(temp_v0 + 0xcc74) = 0;
  *(unsigned int *)(temp_v0 + 0xcc78) = 0;
  *(unsigned int *)(temp_v0 + 0xcc7c) = 0;
  *(unsigned int *)(temp_v0 + 0xcc80) = 0;
  *(unsigned int *)(temp_v0 + 0xcc84) = 0;
  *(unsigned int *)(temp_v0 + 0xcc88) = 0;
  *(unsigned int *)(temp_v0 + 0xcc8c) = 0;
  FUN_002533fc(puVar4);
  temp_v1 = FUN_0025be50(DAT_0049fbec,DAT_0049fbf0,7);
  *(unsigned int *)(temp_v0 + 0xccb4) = temp_v1;
  FUN_002a06c8(temp_v1,1);
  puVar3 = *(unsigned int **)(temp_v0 + 0xccb4);
  *puVar3 = *puVar3 | 2;
  *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
  *(unsigned char *)(temp_v0 + 0xcc94) = 1;
  *(unsigned char *)(temp_v0 + 0xcc95) = 0;
  *(unsigned char *)(temp_v0 + 0xcc96) = 0;
  *(unsigned int *)(temp_v0 + 0xcc98) = 0;
  *(unsigned int *)(temp_v0 + 0xcc9c) = 0;
  *(unsigned int *)(temp_v0 + 0xcca0) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xcca4) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xcca8) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xccac) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xccb0) = 0;
  FUN_002533fc((unsigned char *)(temp_v0 + 0xcc94));
  return;
}
