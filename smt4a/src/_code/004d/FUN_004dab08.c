/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dab08` (_code @ 0x4dab08, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004dab08_arg0 fn_004dab08_arg0;
struct fn_004dab08_arg0 {
    unsigned char pad_0x0[0x148];
    byte field_0x148; /* +0x148 */
    unsigned char pad_0x149[0x1];
    ushort field_0x14a; /* +0x14a */
    byte field_0x14c; /* +0x14c */
    unsigned char pad_0x14d[0x1];
    ushort field_0x14e; /* +0x14e */
    byte field_0x150; /* +0x150 */
    unsigned char pad_0x151[0x3];
    undefined4 field_0x154; /* +0x154 */
    unsigned char pad_0x158[0x16];
    byte field_0x16e; /* +0x16e */
    unsigned char pad_0x16f[0x1];
    short field_0x170; /* +0x170 */
    short field_0x172; /* +0x172 */
    byte field_0x174; /* +0x174 */
    unsigned char pad_0x175[0x1];
    short field_0x176; /* +0x176 */
    short field_0x178; /* +0x178 */
    byte field_0x17a; /* +0x17a */
    unsigned char pad_0x17b[0x39];
    byte field_0x1b4; /* +0x1b4 */
    byte field_0x1b5; /* +0x1b5 */
};

/* Supplied declaration required: FUN_00184310. */
extern int FUN_0019e4d4(unsigned short);
extern int FUN_001ab854(void);
extern int FUN_002a4b28(unsigned short);
extern unsigned int FUN_002c277c(void);


/* WARNING: Type propagation algorithm not settling */

unsigned short FUN_004dab08(fn_004dab08_arg0 *param_1,unsigned int param_2,unsigned int param_3,short *param_4)

{
/* irregular: 9 unstructured edge(s); 3 goto(s); 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  FUN_00184310();
  if ((param_4[5] & 1U) == 0) {
    return param_4[5] & 1;
  }
  if (param_1->field_0x148 != 0) {
    if (*param_4 == param_1->field_0x14a) goto LAB_004dac50;
    return 0;
  }
  if ((param_1->field_0x14c != 0) && ((unsigned short)(unsigned char)param_4[1] != param_1->field_0x14e)) {
    return 0;
  }
  if (param_1->field_0x150 != 0) {
    temp_v0 = (unsigned int)(unsigned short)param_4[3];
    switch(param_1->field_0x154) {
    case 0:
      goto LAB_004dac50;
    case 1:
      break;
    case 2:
      temp_v0 = temp_v0 - 10;
      break;
    case 3:
      temp_v0 = temp_v0 - 0x14;
      break;
    case 4:
      temp_v0 = temp_v0 - 0x1e;
      break;
    case 5:
      temp_v0 = temp_v0 - 0x28;
      break;
    case 6:
      temp_v0 = temp_v0 - 0x32;
      break;
    case 7:
      temp_v0 = temp_v0 - 0x3c;
      break;
    case 8:
      temp_v0 = temp_v0 - 0x46;
      break;
    case 9:
      temp_v0 = temp_v0 - 0x50;
      break;
    case 10:
      if (temp_v0 >= 0x5a) goto LAB_004dac50;
      return 0;
    default:
      return 0;
    }
    if (temp_v0 >= 10) {
      return 0;
    }
  }
LAB_004dac50:
  if ((((param_1->field_0x1b5 == 0) || (temp_v0 = FUN_002c277c(), (unsigned short)param_4[3] <= temp_v0)) &&
      ((param_1->field_0x1b4 == 0 || (temp_v1 = FUN_002a4b28(*param_4), temp_v1 == 0)))) &&
     ((param_1->field_0x1b5 == 0 || (temp_v1 = FUN_0019e4d4(*param_4), temp_v1 == 0)))) {
    temp_v2 = param_2;
    FUN_00184310();
    temp_v0 = param_3;
    FUN_00184310();
    if (param_1->field_0x17a == 0) {
      temp_v3 = *(char *)(temp_v2 + 2) != '&';
      if (temp_v3) {
        temp_v0 = (unsigned int)*(unsigned char *)(temp_v0 + 2);
      }
      if (!temp_v3 || temp_v0 == 0x26) {
        return 0;
      }
    }
    if (((param_1->field_0x16e == 0) ||
        ((((unsigned short)param_1->field_0x170 >= 0x18 ||
          (temp_v1 = FUN_001ab854(),
          *(unsigned short *)(temp_v1 + 0x62) == param_2 || *(unsigned short *)(temp_v1 + 0x62) == param_3)) &&
         (((unsigned short)param_1->field_0x172 >= 0x18 ||
          (temp_v1 = FUN_001ab854(),
          *(unsigned short *)(temp_v1 + 0x62) == param_2 || *(unsigned short *)(temp_v1 + 0x62) == param_3)))))) &&
       ((param_1->field_0x174 == 0 ||
        ((((unsigned short)param_1->field_0x176 >= 0x18 ||
          (temp_v1 = FUN_001ab854(),
          *(unsigned short *)(temp_v1 + 0x62) != param_2 && *(unsigned short *)(temp_v1 + 0x62) != param_3)) &&
         (((unsigned short)param_1->field_0x178 >= 0x18 ||
          (temp_v1 = FUN_001ab854(),
          *(unsigned short *)(temp_v1 + 0x62) != param_2 && *(unsigned short *)(temp_v1 + 0x62) != param_3)))))))) {
      return 1;
    }
  }
  return 0;
}
