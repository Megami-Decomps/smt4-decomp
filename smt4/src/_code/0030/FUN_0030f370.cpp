/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f370` (_code @ 0x30f370, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024f8a4(void);
int effEmitterCreateSmall(void);
int FUN_002691d8(unsigned int, unsigned int, int);
int objectBufferFree(void);
int FUN_0030f214(unsigned int *, int);

typedef struct fn_0030f370_arg0 fn_0030f370_arg0;
struct fn_0030f370_arg0 {
    uint field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xe];
    ushort field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0x2e];
    undefined4 field_0x4c; /* +0x4c */
};

extern int FUN_0024c3d8(fn_0030f370_arg0 *);
extern int FUN_0024c3f8(void);
/* Supplied declaration required: FUN_0024f8a4. */
/* Supplied declaration required: effEmitterCreateSmall. */
/* Supplied declaration required: FUN_002691d8. */
/* Supplied declaration required: objectBufferFree. */
/* Supplied declaration required: FUN_0030f214. */


unsigned int * FUN_0030f370(fn_0030f370_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0024c3f8();
  puVar2 = (unsigned int *)(temp_v0 + 0x1c);
  effEmitterCreateSmall();
  FUN_0024f8a4();
  temp_v1 = (unsigned int)param_1->field_0xc;
  if (puVar2[0xc] != 0) {
    objectBufferFree();
  }
  FUN_002691d8(temp_v1,*puVar2,temp_v0 + 0x1c);
  puVar2[0xc] = temp_v1;
  temp_v0 = FUN_0024c3d8(param_1);
  if (temp_v0 != 0) {
    FUN_0030f214(puVar2,param_1->field_0x1c);
  }
  return puVar2;
}

} /* extern "C" */
