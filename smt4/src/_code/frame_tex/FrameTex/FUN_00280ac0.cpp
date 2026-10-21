/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280ac0` (_code @ 0x280ac0, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTextureCreate(void);
int asdMemoryAlloc(int, int, int, unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int g_frameTex; /* 0x43e278 */

extern unsigned int osVirtToPhysAddress(void);
/* Supplied declaration required: asdTextureCreate. */
/* Supplied declaration required: asdMemoryAlloc. */


void FUN_00280ac0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = g_frameTex;
  temp_v1 = 0;
  asdTextureCreate();
  if (*(int *)(temp_v0 + 0xfdc) == 0) {
    if (param_1 != 0) {
      *(unsigned char *)(temp_v0 + 0xfe0) = 0;
      *(unsigned int *)(temp_v1 + 0x28) = 0x64000;
      *(unsigned int *)(temp_v1 + 0x10) = 0;
      *(unsigned int *)(temp_v1 + 0x34) = 3;
      *(unsigned int *)(temp_v1 + 0x14) = 0x200;
      *(unsigned int *)(temp_v1 + 0x18) = 400;
      *(unsigned int *)(temp_v1 + 0x1c) = 0x8d62;
      *(unsigned int *)(temp_v1 + 0x20) = 0x1403;
      temp_v2 = 0x30000;
      asdMemoryAlloc(0x30000,0x100,0,*(unsigned int *)(temp_v1 + 0x28),1);
      *(unsigned int *)(temp_v1 + 0x24) = temp_v2;
      temp_v2 = osVirtToPhysAddress();
      *(unsigned int *)(temp_v1 + 0x30) = temp_v2;
      *(int *)(temp_v0 + 0xfdc) = temp_v1;
    }
    else {
      *(unsigned char *)(temp_v0 + 0xfe0) = 1;
      *(unsigned int *)(temp_v1 + 0x28) = 0x64000;
      *(unsigned int *)(temp_v1 + 0x10) = 0;
      *(unsigned int *)(temp_v1 + 0x34) = 3;
      *(unsigned int *)(temp_v1 + 0x14) = 0x200;
      *(unsigned int *)(temp_v1 + 0x18) = 400;
      *(unsigned int *)(temp_v1 + 0x1c) = 0x8d62;
      *(unsigned int *)(temp_v1 + 0x20) = 0x1403;
      temp_v2 = 0x20000;
      asdMemoryAlloc(0x20000,0x100,0,*(unsigned int *)(temp_v1 + 0x28),1);
      *(unsigned int *)(temp_v1 + 0x24) = temp_v2;
      temp_v2 = osVirtToPhysAddress();
      *(unsigned int *)(temp_v1 + 0x30) = temp_v2;
      temp_v3 = 0;
      *(int *)(temp_v0 + 0xfdc) = temp_v1;
      asdTextureCreate();
      *(unsigned int *)(temp_v3 + 0x14) = 0x100;
      *(unsigned int *)(temp_v3 + 0x28) = 0x20000;
      *(unsigned int *)(temp_v3 + 0x10) = 0;
      *(unsigned int *)(temp_v3 + 0x34) = 3;
      *(unsigned int *)(temp_v3 + 0x18) = 0x100;
      *(unsigned int *)(temp_v3 + 0x1c) = 0x8d62;
      *(unsigned int *)(temp_v3 + 0x20) = 0x1403;
      temp_v2 = 0x20000;
      asdMemoryAlloc(0x20000,0x100,0,*(unsigned int *)(temp_v3 + 0x28),1);
      *(unsigned int *)(temp_v3 + 0x24) = temp_v2;
      temp_v2 = osVirtToPhysAddress();
      *(unsigned int *)(temp_v3 + 0x30) = temp_v2;
      temp_v1 = 0;
      *(int *)(temp_v0 + 0xfe4) = temp_v3;
      asdTextureCreate();
      *(unsigned int *)(temp_v1 + 0x14) = 0x80;
      *(unsigned int *)(temp_v1 + 0x28) = 0x8000;
      *(unsigned int *)(temp_v1 + 0x10) = 0;
      *(unsigned int *)(temp_v1 + 0x34) = 3;
      *(unsigned int *)(temp_v1 + 0x18) = 0x80;
      *(unsigned int *)(temp_v1 + 0x1c) = 0x8d62;
      *(unsigned int *)(temp_v1 + 0x20) = 0x1403;
      temp_v2 = 0x20000;
      asdMemoryAlloc(0x20000,0x100,0,*(unsigned int *)(temp_v1 + 0x28),1);
      *(unsigned int *)(temp_v1 + 0x24) = temp_v2;
      temp_v2 = osVirtToPhysAddress();
      *(unsigned int *)(temp_v1 + 0x30) = temp_v2;
      *(int *)(temp_v0 + 0xfe8) = temp_v1;
    }
    *(unsigned char *)(temp_v0 + 0xfd8) = 0;
    *(unsigned char *)(temp_v0 + 0xe96) = 0;
    *(unsigned char *)(temp_v0 + 0xe95) = 0;
  }
  return;
}

} /* extern "C" */
