/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248114` (_code @ 0x248114, 0x7c bytes) from smt4_v1.2.0.cxi.
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

extern unsigned char LAB_00248194; /* 0x248194 */
extern int g_mapIf; /* 0x447a78 */

/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: FUN_002a0428. */


void FUN_00248114(void)

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
  puVar3 = (unsigned int *)(g_mapIf + 0xcc3c);
  *(unsigned char *)(g_mapIf + 0xcc30) = 1;
  *(unsigned int *)(temp_v0 + 0xcc34) = 0;
  *(unsigned int *)(temp_v0 + 0xcc38) = 0;
  puVar2 = &LAB_00248194;
  *puVar3 = in_s0;
  *(unsigned int *)(temp_v0 + 0xcc40) = in_s1;
  *(unsigned int *)(temp_v0 + 0xcc44) = in_s2;
  *(unsigned int *)(temp_v0 + 0xcc48) = in_s3;
  asdMdlManagerCreateLoaded(&LAB_00248194,7);
  *(unsigned char **)(temp_v0 + 0xcc4c) = puVar2;
  FUN_002a0428();
  nodeSetTranslation(*(unsigned int *)(*(int *)(temp_v0 + 0xcc4c) + 8),0,temp_v0 + 0xcc3c);
  FUN_0028c618(*(unsigned int *)(*(int *)(temp_v0 + 0xcc4c) + 8),0);
  return;
}

} /* extern "C" */
