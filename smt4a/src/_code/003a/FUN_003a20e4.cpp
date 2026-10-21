/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a20e4` (_code @ 0x3a20e4, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2d74(unsigned int, unsigned int, int);
int objectBufferFree(void);
int FUN_0038439c(void);
int FUN_003a1ef4(void);
int effHolderSetParams(unsigned int *, int);

typedef struct fn_003a20e4_arg0 fn_003a20e4_arg0;
struct fn_003a20e4_arg0 {
    uint field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xe];
    ushort field_0x1c; /* +0x1c */
};

extern int resourceResolveDataPointer(fn_003a20e4_arg0 *);
/* Supplied declaration required: FUN_002b2d74. */
/* Supplied declaration required: objectBufferFree. */
extern int resourceResolveHeaderPointer(void);
/* Supplied declaration required: FUN_0038439c. */
/* Supplied declaration required: FUN_003a1ef4. */
/* Supplied declaration required: effHolderSetParams. */


unsigned int * FUN_003a20e4(fn_003a20e4_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = resourceResolveHeaderPointer();
  puVar2 = (unsigned int *)(temp_v0 + 0x1c);
  FUN_003a1ef4();
  FUN_0038439c();
  temp_v1 = (unsigned int)param_1->field_0xc;
  if (puVar2[0xc] != 0) {
    objectBufferFree();
  }
  FUN_002b2d74(temp_v1,*puVar2,temp_v0 + 0x1c);
  puVar2[0xc] = temp_v1;
  temp_v0 = resourceResolveDataPointer(param_1);
  if (temp_v0 != 0) {
    effHolderSetParams(puVar2,param_1->field_0x1c);
  }
  return puVar2;
}

} /* extern "C" */
