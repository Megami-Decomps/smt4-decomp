/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1744` (_code @ 0x2e1744, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002e1744_arg0 fn_002e1744_arg0;
struct fn_002e1744_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x7];
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x60];
    byte field_0x74; /* +0x74 */
    unsigned char pad_0x75[0x2b];
    int field_0xa0; /* +0xa0 */
    void *field_0xa4; /* +0xa4 */
    int field_0xa8; /* +0xa8 */
    int field_0xac; /* +0xac */
    unsigned char pad_0xb0[0x60];
    undefined4 field_0x110; /* +0x110 */
    unsigned char pad_0x114[0x10];
    byte field_0x124; /* +0x124 */
    unsigned char pad_0x125[0x4];
    byte field_0x129; /* +0x129 */
};

/* Supplied declaration required: FUN_0024eaac. */
/* Supplied declaration required: FUN_0026f188. */
extern unsigned int FUN_0026f1f0(void);
/* Supplied declaration required: FUN_0026f204. */
/* Supplied declaration required: FUN_0026f784. */
/* Supplied declaration required: FUN_0026f800. */
extern int FUN_0028d594(void);
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_002b8838. */


unsigned int FUN_002e1744(fn_002e1744_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  void *pvVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  if (param_1->field_0x124 == 0) {
    temp_v0 = param_1->field_0x4;
    FUN_0026f784();
    if (temp_v0 != 0) {
      pvVar2 = param_1->field_0xa4;
      temp_v3 = pvVar2 != (void *)0x0;
      temp_v0 = temp_v1;
      if (temp_v3) {
        temp_v0 = param_1->field_0xa8;
      }
      if (temp_v3 && temp_v0 != 0) {
        param_3 = param_1->field_0xac;
      }
      if ((temp_v3 && temp_v0 != 0) && param_3 != 0) {
        if (param_1->field_0x74 == 1) {
          FUN_00297060();
          param_1->field_0xa0 = (int)pvVar2;
          *(unsigned int *)((int)pvVar2 + 0x108) = 2;
          param_1->field_0x124 = 1;
          FUN_0026f800(param_1->field_0x4,1);
          FUN_0026f204(param_1->field_0x10,*(unsigned int *)&param_1->field_0x8,param_1->field_0xac);
          temp_v0 = FUN_0028d594();
          if (temp_v0 == 0) {
            temp_v2 = FUN_0026f1f0();
            FUN_0026f188(temp_v2,0xf);
          }
          if (param_1->field_0x129 == 0) {
            param_1->field_0x110 = 1;
          }
          else {
            FUN_002b8838(0xe2);
            param_1->field_0x110 = 2;
          }
          temp_v2 = 2;
        }
        FUN_0024eaac(param_1,1);
      }
    }
  }
  return temp_v2;
}
