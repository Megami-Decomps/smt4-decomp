/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fa760` (_code @ 0x1fa760, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_001fa7e0; /* 0x1fa7e0 */
extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_0029bb3c. */
/* Supplied declaration required: FUN_002a0428. */


void FUN_001fa760(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 8 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  temp_v0 = DAT_00447a78;
  puVar3 = (unsigned int *)(DAT_00447a78 + 0xcbfc);
  *(unsigned char *)(DAT_00447a78 + 0xcbf0) = 1;
  *(unsigned int *)(temp_v0 + 0xcbf4) = 0;
  *(unsigned int *)(temp_v0 + 0xcbf8) = 0;
  puVar2 = &LAB_001fa7e0;
  *puVar3 = in_s0;
  *(unsigned int *)(temp_v0 + 0xcc00) = in_s1;
  *(unsigned int *)(temp_v0 + 0xcc04) = in_s2;
  *(unsigned int *)(temp_v0 + 0xcc08) = in_s3;
  FUN_0029bb3c(&LAB_001fa7e0,7);
  *(unsigned char **)(temp_v0 + 0xcc0c) = puVar2;
  FUN_002a0428();
  FUN_0028c640(*(unsigned int *)(*(int *)(temp_v0 + 0xcc0c) + 8),0,temp_v0 + 0xcbfc);
  FUN_0028c618(*(unsigned int *)(*(int *)(temp_v0 + 0xcc0c) + 8),0);
  return;
}
