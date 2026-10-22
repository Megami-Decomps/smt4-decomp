/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c23cc` (_code @ 0x2c23cc, 0x1f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAlloc(int, int, int, unsigned int, int);
int asdTextureCreate(void);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int g_frameTex; /* 0x57f65c */

/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: asdTextureCreate. */
extern unsigned int asdGxGetPhysicalAddress(void);


void FUN_002c23cc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar5;
  
  temp_v0 = g_frameTex;
  temp_v1 = 0;
  asdTextureCreate();
  piVar5 = (int *)(temp_v0 + 0x1490);
  if (*piVar5 == 0) {
    if (param_1 != 0) {
      *(unsigned char *)(temp_v0 + 0x1494) = 0;
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
      temp_v2 = asdGxGetPhysicalAddress();
      *(unsigned int *)(temp_v1 + 0x30) = temp_v2;
      *piVar5 = temp_v1;
    }
    else {
      *(unsigned char *)(temp_v0 + 0x1494) = 1;
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
      temp_v2 = asdGxGetPhysicalAddress();
      *(unsigned int *)(temp_v1 + 0x30) = temp_v2;
      temp_v3 = 0;
      *piVar5 = temp_v1;
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
      temp_v2 = asdGxGetPhysicalAddress();
      *(unsigned int *)(temp_v3 + 0x30) = temp_v2;
      *(int *)(temp_v0 + 0x1498) = temp_v3;
      temp_v1 = 0;
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
      temp_v2 = asdGxGetPhysicalAddress();
      *(unsigned int *)(temp_v1 + 0x30) = temp_v2;
      *(int *)(temp_v0 + 0x149c) = temp_v1;
    }
    *(unsigned char *)(temp_v0 + 0x148c) = 0;
    *(unsigned char *)(temp_v0 + 0xfae) = 0;
    *(unsigned char *)(temp_v0 + 0xfad) = 0;
  }
  return;
}

} /* extern "C" */
