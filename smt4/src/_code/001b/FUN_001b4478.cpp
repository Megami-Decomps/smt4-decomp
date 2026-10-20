/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4478` (_code @ 0x1b4478, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028c618(unsigned int, int);
int nodeSetTranslation(unsigned int, int, int);
int asdMdlManagerCreateLoaded(unsigned char *, int);
int FUN_002a0428(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_001b44f8; /* 0x1b44f8 */
extern int g_mapIf; /* 0x447a78 */

/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: FUN_002a0428. */


void FUN_001b4478(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 8 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  temp_v0 = g_mapIf;
  puVar3 = (unsigned int *)(g_mapIf + 0xcc1c);
  *(unsigned char *)(g_mapIf + 0xcc10) = 1;
  *(unsigned int *)(temp_v0 + 0xcc14) = 0;
  *(unsigned int *)(temp_v0 + 0xcc18) = 0;
  puVar2 = &LAB_001b44f8;
  *puVar3 = in_s0;
  *(unsigned int *)(temp_v0 + 0xcc20) = in_s1;
  *(unsigned int *)(temp_v0 + 0xcc24) = in_s2;
  *(unsigned int *)(temp_v0 + 0xcc28) = in_s3;
  asdMdlManagerCreateLoaded(&LAB_001b44f8,7);
  *(unsigned char **)(temp_v0 + 0xcc2c) = puVar2;
  FUN_002a0428();
  nodeSetTranslation(*(unsigned int *)(*(int *)(temp_v0 + 0xcc2c) + 8),0,temp_v0 + 0xcc1c);
  FUN_0028c618(*(unsigned int *)(*(int *)(temp_v0 + 0xcc2c) + 8),0);
  return;
}

} /* extern "C" */
