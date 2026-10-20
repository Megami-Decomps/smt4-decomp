/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003336dc` (_code @ 0x3336dc, 0x2d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable1bOr1cGetRecord(void);

typedef struct fn_003336dc_arg0 fn_003336dc_arg0;
struct fn_003336dc_arg0 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x3];
    byte field_0x6; /* +0x6 */
    byte field_0x7; /* +0x7 */
    unsigned char pad_0x8[0x6];
    unsigned char field_0xe; /* +0xe */
    unsigned char pad_0xf[0x15d];
    ushort field_0x16c; /* +0x16c */
    unsigned char pad_0x16e[0x6];
    ushort field_0x174; /* +0x174 */
    unsigned char pad_0x176[0x6];
    ushort field_0x17c; /* +0x17c */
    unsigned char pad_0x17e[0x6];
    ushort field_0x184; /* +0x184 */
};

extern int FUN_00240cd4(void);
/* Supplied declaration required: dataTable1bOr1cGetRecord. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_003336dc(fn_003336dc_arg0 *param_1,unsigned char param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v3 = FUN_00240cd4();
  dataTable1bOr1cGetRecord();
  if (param_1 != (fn_003336dc_arg0 *)0x0) {
    if (((*(unsigned char *)(temp_v3 + 2) & param_2) == 0) && ((param_1->field_0x7 & 0x20) != 0)) {
      return 0x11;
    }
    if ((param_1->field_0x7 & 0x10) != 0) {
      return 0xffffffff;
    }
    temp_v1 = param_1->field_0x16c;
    temp_v3 = 0;
    temp_v2 = param_1->field_0x174;
    temp_v5 = (unsigned int)(temp_v1 != 0);
    temp_v4 = 2;
    puVar5 = &param_1->field_0x16c;
    do {
      if (temp_v2 != 0) {
        temp_v5 = temp_v5 + 1;
      }
      temp_v2 = puVar5[0xc];
      if (puVar5[8] != 0) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v4 = temp_v4 - 1;
      puVar5 = puVar5 + 8;
    } while (temp_v4 != 0);
    temp_v3 = temp_v5 + temp_v3;
    temp_v0 = param_1->field_0x6;
    if (*(short *)&param_1[1].field_0xe != 0) {
      temp_v3 = temp_v3 + 1;
    }
    if (temp_v0 != 0) {
      if (temp_v0 == 1) {
        if (temp_v3 == 1) {
          return 0x16;
        }
        if (temp_v3 == 2) {
          return 0x17;
        }
        if (temp_v3 == 3) {
          return 0x18;
        }
        if (temp_v3 == 4) {
          return 0x19;
        }
        return 0xffffffff;
      }
      if (temp_v0 != 3) {
        if (temp_v0 != 7) {
          return 0xffffffff;
        }
        if (temp_v3 == 1) {
          return 0x34;
        }
        if (temp_v3 == 2) {
          return 0x35;
        }
        if (temp_v3 != 3) {
          if (temp_v3 == 4) {
            return 0x37;
          }
          return 0xffffffff;
        }
        return 0x36;
      }
      if ((temp_v1 == 1) || (temp_v1 == 7)) {
        if (temp_v3 == 1) {
          return 0x1a;
        }
        if (temp_v3 == 2) {
          return 0x1b;
        }
        if (temp_v3 == 3) {
          return 0x1c;
        }
        if (temp_v3 == 4) {
          return 0x1d;
        }
        return 0xffffffff;
      }
      if (temp_v1 == 2) {
        if (temp_v3 == 1) {
          return 0x1e;
        }
        if (temp_v3 == 2) {
          return 0x1f;
        }
        if (temp_v3 == 3) {
          return 0x20;
        }
        if (temp_v3 == 4) {
          return 0x21;
        }
        return 0xffffffff;
      }
    }
    else {
      if ((temp_v1 == 1) || (temp_v1 == 7)) {
        if (temp_v3 == 1) {
          return 0x12;
        }
        if (temp_v3 == 2) {
          return 0x13;
        }
        if (temp_v3 == 3) {
          return 0x14;
        }
        if (temp_v3 == 4) {
          return 0x15;
        }
        return 0xffffffff;
      }
      if (temp_v1 == 2) {
        if (temp_v3 == 1) {
          return 0x2e;
        }
        if (temp_v3 == 2) {
          return 0x2f;
        }
        if (temp_v3 == 3) {
          return 0x30;
        }
        if (temp_v3 == 4) {
          return 0x31;
        }
        return 0xffffffff;
      }
    }
    if (temp_v1 == 6) {
      return 0x29;
    }
    if (temp_v1 == 5) {
      if (temp_v3 == 1) {
        return 0x2a;
      }
      if (temp_v3 == 2) {
        return 0x2b;
      }
      if (temp_v3 == 3) {
        return 0x2c;
      }
      if (temp_v3 == 4) {
        return 0x2d;
      }
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
