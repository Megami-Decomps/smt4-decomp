/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b88e0` (_code @ 0x4b88e0, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [132], unsigned char *, int, int);
int FUN_001695a0(void);
int FUN_0019a5a0(...);
int FUN_0019c364(int);
int FUN_0020214c(void);
int FUN_00275bc8(int, unsigned char *);
int FUN_00275f44(int, unsigned int);
int FUN_004b75d0(void);

typedef struct fn_004b88e0_arg0 fn_004b88e0_arg0;
struct fn_004b88e0_arg0 {
    unsigned char pad_0x0[0x28];
    undefined4 field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x1140];
    undefined4 field_0x1170; /* +0x1170 */
    void *field_0x1174; /* +0x1174 */
    int field_0x1178; /* +0x1178 */
};

extern unsigned char LAB_004b89f8; /* 0x4b89f8 */
extern unsigned char LAB_004b8a10; /* 0x4b8a10 */
extern unsigned short DAT_005f1794; /* 0x5f1794 */
extern short DAT_005f1796; /* 0x5f1796 */
extern unsigned char DAT_005f1798; /* 0x5f1798 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_0020214c. */
extern int FUN_00224880(int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_004b75d0. */


void FUN_004b88e0(fn_004b88e0_arg0 *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v1;
  unsigned char temp_v2 [132];
  
  puVar2 = temp_v2;
  puVar3 = temp_v2;
  FUN_004b75d0();
  if (param_1->field_0x2c != 0) {
    if ((param_1->field_0x2c == 1) && (temp_v0 = FUN_00224880(param_1->field_0x1178), temp_v0 == 2)) {
      FUN_0019c364(param_1->field_0x1178);
      param_1->field_0x1178 = 0;
      FUN_0019a5a0(param_1->field_0x1170);
      param_1->field_0x1170 = 0;
      FUN_0019a5a0(param_1->field_0x1174);
      param_1->field_0x1174 = (void *)0x0;
      param_1->field_0x28 = 5;
      param_1->field_0x2c = 0;
    }
    return;
  }
  DAT_005f1794 = 0;
  FUN_001695a0();
  FUN_00100388(temp_v2,&LAB_004b89f8,(int)DAT_005f1796,(int)DAT_005f1796);
  FUN_0020214c();
  param_1->field_0x1170 = (undefined4)puVar2;
  FUN_00100388(temp_v2,&LAB_004b8a10,(int)DAT_005f1796,(int)DAT_005f1796);
  FUN_0020214c();
  param_1->field_0x1174 = puVar3;
  temp_v0 = param_1->field_0x1170;
  FUN_00275bc8(temp_v0,puVar3);
  param_1->field_0x1178 = temp_v0;
  *(unsigned int *)(temp_v0 + 0x108) = 2;
  temp_v1 = FUN_00357bc8(param_1->field_0x1170,&DAT_005f1798);
  FUN_00275f44(param_1->field_0x1178,temp_v1);
  param_1->field_0x2c = param_1->field_0x2c + 1;
  return;
}

} /* extern "C" */
