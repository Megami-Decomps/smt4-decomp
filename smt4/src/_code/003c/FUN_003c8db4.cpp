/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8db4` (_code @ 0x3c8db4, 0x1a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int devilGetRecord(void);

typedef struct fn_003c8db4_arg0 fn_003c8db4_arg0;
struct fn_003c8db4_arg0 {
    unsigned char pad_0x0[0x118];
    byte field_0x118; /* +0x118 */
    unsigned char pad_0x119[0x1];
    ushort field_0x11a; /* +0x11a */
    byte field_0x11c; /* +0x11c */
    unsigned char pad_0x11d[0x1];
    ushort field_0x11e; /* +0x11e */
    unsigned char pad_0x120[0x16];
    byte field_0x136; /* +0x136 */
    unsigned char pad_0x137[0x1];
    short field_0x138; /* +0x138 */
    short field_0x13a; /* +0x13a */
    byte field_0x13c; /* +0x13c */
    unsigned char pad_0x13d[0x1];
    short field_0x13e; /* +0x13e */
    short field_0x140; /* +0x140 */
    byte field_0x142; /* +0x142 */
    unsigned char pad_0x143[0x39];
    byte field_0x17c; /* +0x17c */
    byte field_0x17d; /* +0x17d */
};

extern unsigned int FUN_0029dde0(void);
extern int FUN_0029ea68(unsigned short);
extern int gameGetUnitRecord(void);
extern int FUN_002b066c(unsigned short);
/* Supplied declaration required: devilGetRecord. */


unsigned short FUN_003c8db4(fn_003c8db4_arg0 *param_1,unsigned int param_2,unsigned int param_3,short *param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  devilGetRecord();
  if ((param_4[3] & 1U) == 0) {
    return param_4[3] & 1;
  }
  if (param_1->field_0x118 != 0) {
    if (*param_4 != param_1->field_0x11a) {
      return 0;
    }
  }
  else if ((param_1->field_0x11c != 0) && ((unsigned short)(unsigned char)param_4[1] != param_1->field_0x11e)) {
    return 0;
  }
  if ((((param_1->field_0x17d == 0) ||
       (temp_v0 = FUN_0029dde0(), *(unsigned char *)((int)param_4 + 3) <= temp_v0)) &&
      ((param_1->field_0x17c == 0 || (temp_v1 = FUN_0029ea68(*param_4), temp_v1 == 0)))) &&
     ((param_1->field_0x17d == 0 || (temp_v1 = FUN_002b066c(*param_4), temp_v1 == 0)))) {
    temp_v2 = param_2;
    devilGetRecord();
    temp_v0 = param_3;
    devilGetRecord();
    if (param_1->field_0x142 == 0) {
      temp_v3 = *(char *)(temp_v2 + 2) != '&';
      if (temp_v3) {
        temp_v0 = (unsigned int)*(unsigned char *)(temp_v0 + 2);
      }
      if (!temp_v3 || temp_v0 == 0x26) {
        return 0;
      }
    }
    if (((param_1->field_0x136 == 0) ||
        ((((unsigned short)param_1->field_0x138 >= 0x18 ||
          (temp_v1 = gameGetUnitRecord(),
          *(unsigned short *)(temp_v1 + 0x46) == param_2 || *(unsigned short *)(temp_v1 + 0x46) == param_3)) &&
         (((unsigned short)param_1->field_0x13a >= 0x18 ||
          (temp_v1 = gameGetUnitRecord(),
          *(unsigned short *)(temp_v1 + 0x46) == param_2 || *(unsigned short *)(temp_v1 + 0x46) == param_3)))))) &&
       ((param_1->field_0x13c == 0 ||
        ((((unsigned short)param_1->field_0x13e >= 0x18 ||
          (temp_v1 = gameGetUnitRecord(),
          *(unsigned short *)(temp_v1 + 0x46) != param_2 && *(unsigned short *)(temp_v1 + 0x46) != param_3)) &&
         (((unsigned short)param_1->field_0x140 >= 0x18 ||
          (temp_v1 = gameGetUnitRecord(),
          *(unsigned short *)(temp_v1 + 0x46) != param_2 && *(unsigned short *)(temp_v1 + 0x46) != param_3)))))))) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
