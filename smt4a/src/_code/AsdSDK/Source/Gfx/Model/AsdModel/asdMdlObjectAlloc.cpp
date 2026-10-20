/* NON_MATCHING: romwright 0.5.0 decompilation of `asdMdlObjectAlloc` (_code @ 0x2bd97c, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAlloc(int, int, int, int, int);
int asdListAdd(unsigned char *, int, int);
int sysMemClear(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char g_gfxSettings; /* 0x5b3bf4 */
extern unsigned char DAT_00636ec8; /* 0x636ec8 */

/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: asdListAdd. */
/* Supplied declaration required: sysMemClear. */


int asdMdlObjectAlloc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,0xa8,1);
  sysMemClear();
  *(unsigned int *)(temp_v0 + 0xc) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x10) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(unsigned int *)(temp_v0 + 8) = 7;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  *(unsigned int *)(temp_v0 + 0x54) = 0;
  *(unsigned int *)(temp_v0 + 0x58) = 0;
  *(unsigned int *)(temp_v0 + 0x5c) = 0;
  *(unsigned int *)(temp_v0 + 100) = 0;
  *(unsigned int *)(temp_v0 + 0x68) = 0;
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0x3f800000;
  *(unsigned int *)(temp_v0 + 0x78) = 0x3f800000;
  *(unsigned int *)(temp_v0 + 0x7c) = 0x3f800000;
  *(unsigned int *)(temp_v0 + 0x80) = 0x3f800000;
  *(unsigned char *)(temp_v0 + 0x90) = 0;
  *(unsigned int *)(temp_v0 + 0x8c) = 0;
  *(unsigned int *)(temp_v0 + 0x88) = 0;
  *(unsigned int *)(temp_v0 + 0x84) = 0;
  asdListAdd(&DAT_00636ec8,temp_v0,0);
  (*(int *)((unsigned char *)&g_gfxSettings + 0x3c)) = (*(int *)((unsigned char *)&g_gfxSettings + 0x3c)) + 1;
  return temp_v0;
}

} /* extern "C" */
