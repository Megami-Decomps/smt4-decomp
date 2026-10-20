/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee878` (_code @ 0x2ee878, 0xba bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010a058(unsigned int *);
int FUN_0010e290(unsigned int *);
int FUN_0010e6a4(unsigned int *);
int FUN_00119d74(unsigned int *);
int FUN_0012cf84(int);
int asdOperatorDeleteArray(void);
int FUN_002eb744(unsigned int *);
int FUN_002ecf40(void);
int FUN_002f28bc(int);
int FUN_002f33b4(int);
int FUN_002f8da8(void);

typedef int romwright_code(...);
extern unsigned char DAT_0055918c; /* 0x55918c */

/* Supplied declaration required: FUN_0010a058. */
extern int FUN_0010b89c(int);
/* Supplied declaration required: FUN_0010e290. */
/* Supplied declaration required: FUN_0010e6a4. */
extern int FUN_0011571c(int);
/* Supplied declaration required: FUN_00119d74. */
extern int FUN_001210e0(unsigned int *);
extern int destroyObj0055afbc(int);
/* Supplied declaration required: FUN_0012cf84. */
/* Supplied declaration required: asdOperatorDeleteArray. */
extern int FUN_002eb728(int);
/* Supplied declaration required: FUN_002eb744. */
/* Supplied declaration required: FUN_002ecf40. */
/* Supplied declaration required: FUN_002f28bc. */
/* Supplied declaration required: FUN_002f33b4. */
/* Supplied declaration required: FUN_002f8da8. */
extern int FUN_002f9ef8(int);


void FUN_002ee878(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055918c;
  FUN_0010e6a4(param_1);
  if (param_1[0x2f] != 0) {
    FUN_0010a058(param_1);
  }
  FUN_0010e290(param_1);
  if (param_1[0xb4] != 0) {
    FUN_002f8da8();
    asdOperatorDeleteArray();
    param_1[0xb4] = 0;
  }
  (**(romwright_code **)(*(int *)param_1[0x7d] + 8))();
  if ((int *)param_1[0x7d] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x7d] + 4))();
  }
  FUN_00119d74(param_1 + 0x7e);
  FUN_002eb744(param_1 + 0x75);
  FUN_002ecf40();
  temp_v0 = FUN_001210e0(param_1 + 0xa5);
  temp_v0 = destroyObj0055afbc(temp_v0 - 0x10);
  temp_v0 = temp_v0 - 0x74;
  FUN_002f28bc(temp_v0);
  temp_v0 = temp_v0 - 0x18;
  FUN_0012cf84(temp_v0);
  temp_v0 = FUN_002eb728(temp_v0 - 0x24);
  temp_v0 = FUN_0010b89c(temp_v0 - 8);
  temp_v0 = FUN_0011571c(temp_v0 - 0x5c);
  temp_v0 = FUN_002f9ef8(temp_v0 - 0xc);
  FUN_002f33b4(temp_v0 - 0x164);
  return;
}

} /* extern "C" */
