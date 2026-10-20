/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3f08` (_code @ 0x3f3f08, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003f3f08_arg0 fn_003f3f08_arg0;
struct fn_003f3f08_arg0 {
    unsigned char pad_0x0[0x1c];
    int field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x3];
    byte field_0x23; /* +0x23 */
    unsigned char pad_0x24[0x10];
    void *field_0x34; /* +0x34 */
};

extern int FUN_001801a4(void);
extern unsigned int FUN_0019e130(int);
extern int FUN_001ab854(void);
extern int FUN_002919a4(void);


unsigned int FUN_003f3f08(fn_003f3f08_arg0 *param_1)

{
  void *pvVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  if (param_1->field_0x23 != 0) {
    return 0xffffffff;
  }
  pvVar1 = param_1->field_0x34;
  if (pvVar1 != (void *)0xffffffff) {
    if (pvVar1 != (void *)0xfffffffe) {
      if (-1 < (int)pvVar1) {
        temp_v0 = FUN_001ab854();
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 0x60);
      }
    }
    else {
      temp_v0 = FUN_002919a4();
      if (temp_v0 != 0) {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 0x60);
      }
    }
  }
  else {
    temp_v0 = FUN_001801a4();
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 0x5e);
  }
  temp_v1 = 1;
  temp_v0 = 0;
  while( 1 ) {
    if ((temp_v3 & (1 << (temp_v1 & 0xff))) != 0) {
      if (param_1->field_0x1c == temp_v0) {
        temp_v2 = FUN_0019e130((int)(short)temp_v1);
        return temp_v2;
      }
      temp_v0 = temp_v0 + 1;
    }
    temp_v1 = temp_v1 + 1;
    if ((int)temp_v1 >= 0xe) break;
    while (temp_v1 == 2) {
      temp_v1 = 3;
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
