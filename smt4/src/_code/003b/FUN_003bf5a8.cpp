/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf5a8` (_code @ 0x3bf5a8, 0xa60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "battle/BtlMainAccess.h"
#include "romwright_types.h"

extern "C" {

int btlAdjustPropertyClamped(...);
int btlMainFindEntryByListedId(...);
int dataTable40FindById(void);

typedef struct fn_003bf5a8_arg0 fn_003bf5a8_arg0;
typedef struct fn_003bf5a8_arg1 fn_003bf5a8_arg1;
struct fn_003bf5a8_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x2e];
    unsigned char field_0x32; /* +0x32 */
    unsigned char field_0x33; /* +0x33 */
    unsigned char field_0x34; /* +0x34 */
    unsigned char field_0x35; /* +0x35 */
    unsigned char pad_0x36[0x2];
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0xd];
    unsigned char field_0x46; /* +0x46 */
    unsigned char pad_0x47[0x8];
    unsigned char field_0x4f; /* +0x4f */
    unsigned char pad_0x50[0x74];
    undefined4 field_0xc4; /* +0xc4 */
    unsigned char pad_0xc8[0xee];
    short field_0x1b6; /* +0x1b6 */
    unsigned char pad_0x1b8[0xc0];
    void *field_0x278; /* +0x278 */
    unsigned char pad_0x27c[0x3a];
    short field_0x2b6; /* +0x2b6 */
    unsigned char pad_0x2b8[0xc4];
    void *field_0x37c; /* +0x37c */
    unsigned char pad_0x380[0x36];
    short field_0x3b6; /* +0x3b6 */
    unsigned char pad_0x3b8[0xcc];
    void *field_0x484; /* +0x484 */
    unsigned char pad_0x488[0x4018];
    undefined4 field_0x44a0; /* +0x44a0 */
};
struct fn_003bf5a8_arg1 {
    unsigned char pad_0x0[0x32];
    char field_0x32; /* +0x32 */
    char field_0x33; /* +0x33 */
    char field_0x34; /* +0x34 */
    byte field_0x35; /* +0x35 */
    unsigned char pad_0x36[0x2];
    uint field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0xa];
    byte field_0x46; /* +0x46 */
    unsigned char pad_0x47[0x8];
    byte field_0x4f; /* +0x4f */
};

extern unsigned short FUN_00245cc0(unsigned int);
/* Supplied declaration required: btlAdjustPropertyClamped. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: dataTable40FindById. */


int FUN_003bf5a8(fn_003bf5a8_arg0 *param_1,fn_003bf5a8_arg1 *param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v5 = 0;
  puVar2 = (unsigned int *)reinterpret_cast<int>(btlGetMainState());
  dataTable40FindById();
  if (param_2 == (fn_003bf5a8_arg1 *)0x0) {
    return 0;
  }
  temp_v3 = (int)param_2->field_0x32;
  if (temp_v3 != 0) {
    if (temp_v3 != -5) {
      if (temp_v3 != -6) {
        if (temp_v3 != -7) {
          if (temp_v3 != -9) {
            temp_v5 = btlAdjustPropertyClamped(param_1,7,temp_v3,param_3);
            if (temp_v5 < 0) {
              temp_v5 = -temp_v5;
            }
            btlAdjustPropertyClamped(param_1,8,(int)param_2->field_0x32,param_3);
          }
          else {
            temp_v0 = FUN_00245cc0(7);
            temp_v3 = reinterpret_cast<int>(btlGetMainState());
            btlMainFindEntryByListedId(temp_v3,param_1);
            if (temp_v3 != 0) {
              *(unsigned short *)(temp_v3 + 0x80) = temp_v0;
            }
            temp_v0 = FUN_00245cc0(8);
            temp_v3 = reinterpret_cast<int>(btlGetMainState());
            btlMainFindEntryByListedId(temp_v3,param_1);
            if (temp_v3 != 0) {
              *(unsigned short *)(temp_v3 + 0x82) = temp_v0;
            }
          }
        }
        else {
          temp_v1 = reinterpret_cast<int>(btlGetMainState());
          btlMainFindEntryByListedId(temp_v1,param_1);
          temp_v3 = 0;
          if (temp_v1 != 0) {
            temp_v3 = (int)*(short *)(temp_v1 + 0x80);
          }
          temp_v6 = temp_v3 != 0;
          if (temp_v3 < 0) {
            temp_v3 = -temp_v3;
          }
          if (temp_v1 != 0 && temp_v6) {
            temp_v1 = reinterpret_cast<int>(btlGetMainState());
            btlMainFindEntryByListedId(temp_v1,param_1);
            temp_v5 = temp_v3;
            if (temp_v1 != 0) {
              *(unsigned short *)(temp_v1 + 0x80) = 0;
            }
          }
          temp_v3 = reinterpret_cast<int>(btlGetMainState());
          btlMainFindEntryByListedId(temp_v3,param_1);
          temp_v2 = 0;
          if (temp_v3 != 0) {
            temp_v2 = *(short *)(temp_v3 + 0x82);
          }
          if (temp_v3 != 0 && temp_v2 != 0) {
            temp_v3 = reinterpret_cast<int>(btlGetMainState());
            btlMainFindEntryByListedId(temp_v3,param_1);
            if (temp_v3 != 0) {
              *(unsigned short *)(temp_v3 + 0x82) = 0;
            }
          }
        }
      }
      else {
        temp_v3 = reinterpret_cast<int>(btlGetMainState());
        btlMainFindEntryByListedId(temp_v3,param_1);
        if ((temp_v3 != 0) && (*(short *)(temp_v3 + 0x80) < 0)) {
          temp_v5 = -(int)*(short *)(temp_v3 + 0x80);
          temp_v3 = reinterpret_cast<int>(btlGetMainState());
          btlMainFindEntryByListedId(temp_v3,param_1);
          if (temp_v3 != 0) {
            *(unsigned short *)(temp_v3 + 0x80) = 0;
          }
        }
        temp_v3 = reinterpret_cast<int>(btlGetMainState());
        btlMainFindEntryByListedId(temp_v3,param_1);
        if ((temp_v3 != 0) && (*(short *)(temp_v3 + 0x82) < 0)) {
          temp_v3 = reinterpret_cast<int>(btlGetMainState());
          btlMainFindEntryByListedId(temp_v3,param_1);
          if (temp_v3 != 0) {
            *(unsigned short *)(temp_v3 + 0x80) = 0;
          }
        }
      }
    }
    else {
      temp_v1 = reinterpret_cast<int>(btlGetMainState());
      btlMainFindEntryByListedId(temp_v1,param_1);
      temp_v3 = 0;
      if (temp_v1 != 0) {
        temp_v3 = (int)*(short *)(temp_v1 + 0x80);
      }
      if ((temp_v1 != 0 && temp_v3 != 0) && -1 < temp_v3) {
        temp_v1 = reinterpret_cast<int>(btlGetMainState());
        btlMainFindEntryByListedId(temp_v1,param_1);
        temp_v5 = temp_v3;
        if (temp_v1 != 0) {
          *(unsigned short *)(temp_v1 + 0x80) = 0;
        }
      }
      temp_v3 = reinterpret_cast<int>(btlGetMainState());
      btlMainFindEntryByListedId(temp_v3,param_1);
      temp_v2 = 0;
      if (temp_v3 != 0) {
        temp_v2 = *(short *)(temp_v3 + 0x82);
      }
      if ((temp_v3 != 0 && temp_v2 != 0) && -1 < temp_v2) {
        temp_v3 = reinterpret_cast<int>(btlGetMainState());
        btlMainFindEntryByListedId(temp_v3,param_1);
        if (temp_v3 != 0) {
          *(unsigned short *)(temp_v3 + 0x82) = 0;
        }
      }
    }
  }
  temp_v3 = (int)param_2->field_0x34;
  if (temp_v3 != 0) {
    if (temp_v3 != -5) {
      if (temp_v3 != -6) {
        if (temp_v3 != -7) {
          if (param_2->field_0x32 != -9) {
            temp_v3 = btlAdjustPropertyClamped(param_1,0xb,temp_v3,param_3);
            if (temp_v3 < 0) {
              temp_v3 = -temp_v3;
            }
            temp_v5 = temp_v5 + temp_v3;
            btlAdjustPropertyClamped(param_1,9,(int)param_2->field_0x34,param_3);
          }
          else {
            temp_v0 = FUN_00245cc0(0xb);
            temp_v3 = reinterpret_cast<int>(btlGetMainState());
            btlMainFindEntryByListedId(temp_v3,param_1);
            if (temp_v3 != 0) {
              *(unsigned short *)(temp_v3 + 0x88) = temp_v0;
            }
            temp_v0 = FUN_00245cc0(9);
            temp_v3 = reinterpret_cast<int>(btlGetMainState());
            btlMainFindEntryByListedId(temp_v3,param_1);
            if (temp_v3 != 0) {
              *(unsigned short *)(temp_v3 + 0x84) = temp_v0;
            }
          }
        }
        else {
          temp_v1 = reinterpret_cast<int>(btlGetMainState());
          btlMainFindEntryByListedId(temp_v1,param_1);
          temp_v3 = 0;
          if (temp_v1 != 0) {
            temp_v3 = (int)*(short *)(temp_v1 + 0x88);
          }
          temp_v6 = temp_v3 != 0;
          if (temp_v3 < 0) {
            temp_v3 = -temp_v3;
          }
          if (temp_v1 != 0 && temp_v6) {
            temp_v5 = temp_v5 + temp_v3;
            temp_v3 = reinterpret_cast<int>(btlGetMainState());
            btlMainFindEntryByListedId(temp_v3,param_1);
            if (temp_v3 != 0) {
              *(unsigned short *)(temp_v3 + 0x88) = 0;
            }
          }
          temp_v3 = reinterpret_cast<int>(btlGetMainState());
          btlMainFindEntryByListedId(temp_v3,param_1);
          temp_v2 = 0;
          if (temp_v3 != 0) {
            temp_v2 = *(short *)(temp_v3 + 0x84);
          }
          if (temp_v3 != 0 && temp_v2 != 0) {
            temp_v3 = reinterpret_cast<int>(btlGetMainState());
            btlMainFindEntryByListedId(temp_v3,param_1);
            if (temp_v3 != 0) {
              *(unsigned short *)(temp_v3 + 0x84) = 0;
            }
          }
        }
      }
      else {
        temp_v3 = reinterpret_cast<int>(btlGetMainState());
        btlMainFindEntryByListedId(temp_v3,param_1);
        if ((temp_v3 != 0) && (*(short *)(temp_v3 + 0x88) < 0)) {
          temp_v5 = temp_v5 - *(short *)(temp_v3 + 0x88);
          temp_v3 = reinterpret_cast<int>(btlGetMainState());
          btlMainFindEntryByListedId(temp_v3,param_1);
          if (temp_v3 != 0) {
            *(unsigned short *)(temp_v3 + 0x88) = 0;
          }
        }
        temp_v3 = reinterpret_cast<int>(btlGetMainState());
        btlMainFindEntryByListedId(temp_v3,param_1);
        if ((temp_v3 != 0) && (*(short *)(temp_v3 + 0x84) < 0)) {
          temp_v3 = reinterpret_cast<int>(btlGetMainState());
          btlMainFindEntryByListedId(temp_v3,param_1);
          if (temp_v3 != 0) {
            *(unsigned short *)(temp_v3 + 0x84) = 0;
          }
        }
      }
    }
    else {
      temp_v1 = reinterpret_cast<int>(btlGetMainState());
      btlMainFindEntryByListedId(temp_v1,param_1);
      temp_v3 = 0;
      if (temp_v1 != 0) {
        temp_v3 = (int)*(short *)(temp_v1 + 0x88);
      }
      if ((temp_v1 != 0 && temp_v3 != 0) && -1 < temp_v3) {
        temp_v5 = temp_v5 + temp_v3;
        temp_v3 = reinterpret_cast<int>(btlGetMainState());
        btlMainFindEntryByListedId(temp_v3,param_1);
        if (temp_v3 != 0) {
          *(unsigned short *)(temp_v3 + 0x88) = 0;
        }
      }
      temp_v3 = reinterpret_cast<int>(btlGetMainState());
      btlMainFindEntryByListedId(temp_v3,param_1);
      temp_v2 = 0;
      if (temp_v3 != 0) {
        temp_v2 = *(short *)(temp_v3 + 0x84);
      }
      if ((temp_v3 != 0 && temp_v2 != 0) && -1 < temp_v2) {
        temp_v3 = reinterpret_cast<int>(btlGetMainState());
        btlMainFindEntryByListedId(temp_v3,param_1);
        if (temp_v3 != 0) {
          *(unsigned short *)(temp_v3 + 0x84) = 0;
        }
      }
    }
  }
  temp_v3 = (int)param_2->field_0x33;
  if (temp_v3 != 0) {
    if (temp_v3 != -5) {
      if (temp_v3 != -6) {
        if (temp_v3 != -7) {
          if (param_2->field_0x32 != -9) {
            temp_v3 = btlAdjustPropertyClamped(param_1,10,temp_v3,param_3);
            if (temp_v3 < 0) {
              temp_v3 = -temp_v3;
            }
            temp_v5 = temp_v5 + temp_v3;
          }
          else {
            temp_v0 = FUN_00245cc0(10);
            temp_v3 = reinterpret_cast<int>(btlGetMainState());
            btlMainFindEntryByListedId(temp_v3,param_1);
            if (temp_v3 != 0) {
              *(unsigned short *)(temp_v3 + 0x86) = temp_v0;
            }
          }
        }
        else {
          temp_v1 = reinterpret_cast<int>(btlGetMainState());
          btlMainFindEntryByListedId(temp_v1,param_1);
          temp_v3 = 0;
          if (temp_v1 != 0) {
            temp_v3 = (int)*(short *)(temp_v1 + 0x86);
          }
          temp_v6 = temp_v3 != 0;
          if (temp_v3 < 0) {
            temp_v3 = -temp_v3;
          }
          if (temp_v1 != 0 && temp_v6) {
            temp_v1 = reinterpret_cast<int>(btlGetMainState());
            btlMainFindEntryByListedId(temp_v1,param_1);
            temp_v5 = temp_v5 + temp_v3;
            if (temp_v1 != 0) {
              *(unsigned short *)(temp_v1 + 0x86) = 0;
            }
          }
        }
      }
      else {
        temp_v3 = reinterpret_cast<int>(btlGetMainState());
        btlMainFindEntryByListedId(temp_v3,param_1);
        if ((temp_v3 != 0) && (*(short *)(temp_v3 + 0x86) < 0)) {
          temp_v3 = -(int)*(short *)(temp_v3 + 0x86);
          temp_v1 = reinterpret_cast<int>(btlGetMainState());
          btlMainFindEntryByListedId(temp_v1,param_1);
          temp_v5 = temp_v5 + temp_v3;
          if (temp_v1 != 0) {
            *(unsigned short *)(temp_v1 + 0x86) = 0;
          }
        }
      }
    }
    else {
      temp_v1 = reinterpret_cast<int>(btlGetMainState());
      btlMainFindEntryByListedId(temp_v1,param_1);
      temp_v3 = 0;
      if (temp_v1 != 0) {
        temp_v3 = (int)*(short *)(temp_v1 + 0x86);
      }
      if ((temp_v1 != 0 && temp_v3 != 0) && -1 < temp_v3) {
        temp_v1 = reinterpret_cast<int>(btlGetMainState());
        btlMainFindEntryByListedId(temp_v1,param_1);
        temp_v5 = temp_v5 + temp_v3;
        if (temp_v1 != 0) {
          *(unsigned short *)(temp_v1 + 0x86) = 0;
        }
      }
    }
  }
  if ((param_2->field_0x35 & 1) != 0) {
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      temp_v2 = *(short *)(temp_v3 + 0x80);
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      *(short *)(temp_v3 + 0x80) = -temp_v2;
    }
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      temp_v2 = *(short *)(temp_v3 + 0x82);
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      *(short *)(temp_v3 + 0x82) = -temp_v2;
    }
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      temp_v2 = *(short *)(temp_v3 + 0x84);
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      *(short *)(temp_v3 + 0x84) = -temp_v2;
    }
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      temp_v2 = *(short *)(temp_v3 + 0x86);
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      *(short *)(temp_v3 + 0x86) = -temp_v2;
    }
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      temp_v2 = *(short *)(temp_v3 + 0x88);
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      *(short *)(temp_v3 + 0x88) = -temp_v2;
    }
  }
  if ((param_2->field_0x35 & 2) != 0) {
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    temp_v2 = 0;
    if (temp_v3 != 0) {
      temp_v2 = *(short *)(temp_v3 + 0x8c);
    }
    if (temp_v3 == 0 || temp_v2 == 0) {
      temp_v3 = reinterpret_cast<int>(btlGetMainState());
      btlMainFindEntryByListedId(temp_v3,param_1);
      if (temp_v3 != 0) {
        *(unsigned short *)(temp_v3 + 0x8c) = 3;
      }
    }
  }
  if ((param_2->field_0x38 & 0x8000000) != 0) {
    temp_v3 = btlAdjustPropertyClamped(param_1,0xe,(param_2->field_0x38 & 0xfffffff) >> 0x1b,param_3);
    if (temp_v3 < 0) {
      temp_v3 = -temp_v3;
    }
    temp_v5 = temp_v5 + temp_v3;
  }
  if ((param_2->field_0x38 & 0x10000000) != 0) {
    temp_v3 = btlAdjustPropertyClamped(param_1,0xf,(param_2->field_0x38 & 0x1fffffff) >> 0x1c,param_3);
    if (temp_v3 < 0) {
      temp_v3 = -temp_v3;
    }
    temp_v5 = temp_v5 + temp_v3;
  }
  if ((param_2->field_0x38 & 0x80) != 0) {
    temp_v3 = btlAdjustPropertyClamped(param_1,0x10,(param_2->field_0x38 & 0xff) >> 7,param_3);
    if (temp_v3 < 0) {
      temp_v3 = -temp_v3;
    }
    temp_v5 = temp_v5 + temp_v3;
  }
  if ((param_2->field_0x38 & 0x100) != 0) {
    temp_v3 = btlAdjustPropertyClamped(param_1,0x11,(param_2->field_0x38 & 0x1ff) >> 8,param_3);
    if (temp_v3 < 0) {
      temp_v3 = -temp_v3;
    }
    temp_v5 = temp_v5 + temp_v3;
  }
  if ((param_2->field_0x38 & 0x1000000) != 0) {
    temp_v3 = btlAdjustPropertyClamped(param_1,0x12,(param_2->field_0x38 & 0x1ffffff) >> 0x18,param_3);
    if (temp_v3 < 0) {
      temp_v3 = -temp_v3;
    }
    temp_v5 = temp_v5 + temp_v3;
  }
  if ((param_2->field_0x38 & 0x2000000) != 0) {
    temp_v3 = btlAdjustPropertyClamped(param_1,0x13,(param_2->field_0x38 & 0x3ffffff) >> 0x19,param_3);
    if (temp_v3 < 0) {
      temp_v3 = -temp_v3;
    }
    temp_v5 = temp_v5 + temp_v3;
  }
  if ((param_2->field_0x35 & 0x40) != 0) {
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      *(unsigned short *)(temp_v3 + 0x96) = 0;
    }
  }
  if ((char)param_2->field_0x35 < '\0') {
    temp_v3 = reinterpret_cast<int>(btlGetMainState());
    btlMainFindEntryByListedId(temp_v3,param_1);
    if (temp_v3 != 0) {
      *(unsigned short *)(temp_v3 + 0x98) = 0;
    }
  }
  if ((param_2->field_0x38 & 0x4000000) != 0) {
    temp_v3 = btlAdjustPropertyClamped(param_1,0x14,(param_2->field_0x38 & 0x7ffffff) >> 0x1a,param_3);
    if (temp_v3 < 0) {
      temp_v3 = -temp_v3;
    }
    temp_v5 = temp_v5 + temp_v3;
  }
  if (param_2->field_0x46 != 0) {
    puVar4 = puVar2;
    btlMainFindEntryByListedId(puVar2,param_1);
    puVar4[0x31] = (unsigned int)param_2->field_0x46;
  }
  if ((param_2->field_0x35 & 0x10) != 0) {
    puVar2[0x1128] = puVar2[0x1128] | 0x400;
  }
  if (param_2->field_0x4f == 0) {
    return temp_v5;
  }
  btlMainFindEntryByListedId(puVar2,param_1);
  if (puVar2 == (unsigned int *)0x0) {
    return temp_v5;
  }
  temp_v4 = *puVar2;
  if ((temp_v4 & 2) != 0) {
    if (puVar2[0x9e] == 0) {
      return temp_v5;
    }
    temp_v3 = (int)*(short *)(puVar2[0x9e] + 0x1c);
    if (*(short *)((int)puVar2 + 0x1b6) != temp_v3) {
      return temp_v5;
    }
  }
  else {
    if ((temp_v4 & 8) == 0) {
      if ((temp_v4 & 0x10) == 0) {
        return temp_v5;
      }
      if (puVar2[0xa1] == 0) {
        return temp_v5;
      }
      temp_v3 = *(int *)(puVar2[0xa1] + 4);
      if (*(short *)((int)puVar2 + 0x1b6) != temp_v3) {
        return temp_v5;
      }
      temp_v2 = (short)((temp_v3 * (unsigned int)param_2->field_0x4f) / 100);
      *(short *)((int)puVar2 + 0x1b6) = temp_v2;
      return temp_v5;
    }
    if (puVar2[0x9f] == 0) {
      return temp_v5;
    }
    temp_v3 = (int)*(short *)(puVar2[0x9f] + 0xe);
    if (*(short *)((int)puVar2 + 0x1b6) != temp_v3) {
      return temp_v5;
    }
  }
  temp_v3 = temp_v3 * (unsigned int)param_2->field_0x4f;
  temp_v2 = ((short)(temp_v3 / 100) + (short)(temp_v3 >> 0x1f)) -
          (short)((long long)temp_v3 * 0x51eb851f >> 0x3f);
  *(short *)((int)puVar2 + 0x1b6) = temp_v2;
  return temp_v5;
}

} /* extern "C" */
