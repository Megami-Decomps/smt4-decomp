/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ea634` (_code @ 0x4ea634, 0x430 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlActionClassifyTargetSide(int *, unsigned int, int, unsigned int *, int *);

typedef struct fn_004ea634_arg2 fn_004ea634_arg2;
struct fn_004ea634_arg2 {
    unsigned char pad_0x0[0x20];
    ushort field_0x20; /* +0x20 */
    unsigned char pad_0x22[0x6];
    uint field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x6];
    char field_0x32; /* +0x32 */
    unsigned char pad_0x33[0x5];
    byte field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x1];
    ushort field_0x3a; /* +0x3a */
    uint field_0x3c; /* +0x3c */
    char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x1];
    short field_0x42; /* +0x42 */
    unsigned char pad_0x44[0x13];
    byte field_0x57; /* +0x57 */
};

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */

extern int btlFindEntryValue(int, unsigned int);
/* Supplied declaration required: btlActionClassifyTargetSide. */


unsigned int FUN_004ea634(int *param_1,int param_2,fn_004ea634_arg2 *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  if ((param_3->field_0x28 & 0x1f) == 0xb) {
    temp_v0 = param_3->field_0x3a;
    temp_v4 = (temp_v0 & 0x1000) == 0;
    if (temp_v4) {
      temp_v0 = (unsigned short)param_3->field_0x57;
    }
    if (temp_v4 && temp_v0 == 0) {
      temp_v1 = (int)param_3->field_0x42;
      if (temp_v1 < 1) {
        temp_v1 = (int)param_3->field_0x40;
      }
      if ((((temp_v1 < 1) && ((param_3->field_0x38 & 0x60) == 0)) &&
          ((param_3->field_0x3c & 0x300000) == 0)) && (temp_v0 = param_3->field_0x20, temp_v0 != 0x6f))
      {
        temp_v4 = temp_v0 == 0x73 || temp_v0 == 0x127;
        if (temp_v0 != 0x73 && temp_v0 != 0x127) {
          temp_v4 = temp_v0 == 0x185;
        }
        if (!temp_v4) {
          temp_v5 = 0;
          temp_v6 = 0;
          btlActionClassifyTargetSide(param_1,*(unsigned int *)(param_2 + 0x20),temp_v0,&temp_v5,&temp_v6);
          temp_v5 = (unsigned int)(temp_v5 != 1);
          if (temp_v6 != 2) {
            temp_v2 = 0;
            if (temp_v5 == 0) {
              temp_v1 = 4;
            }
            else {
              temp_v2 = 4;
              temp_v1 = 0x32;
            }
            if (param_3->field_0x32 != -5) {
              if (param_3->field_0x32 != -6) {
                if ((param_3->field_0x38 & 8) != 0) {
                  temp_v3 = temp_v2 + temp_v1;
                  if (temp_v2 < temp_v3) {
                    do {
                      puVar3 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v2 * 0x408);
                      if ((((puVar3[1] & DAT_0057114c) != 0 || (*puVar3 & DAT_00571148) != 0) &&
                          ((*puVar3 & DAT_00571178) == 0 && (puVar3[1] & DAT_0057117c) == 0)) &&
                         (temp_v1 = btlFindEntryValue((int)*(short *)((int)puVar3 + 0x6e),0x14), 0 < temp_v1)
                         ) {
                        return 1;
                      }
                      temp_v2 = temp_v2 + 1;
                    } while ((int)temp_v2 < (int)temp_v3);
                  }
                }
                else if ((param_3->field_0x38 & 0x10) != 0) {
                  temp_v3 = temp_v2 + temp_v1;
                  if (temp_v2 < temp_v3) {
                    do {
                      puVar3 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v2 * 0x408);
                      if ((((DAT_00571148 & *puVar3) != 0 || (DAT_0057114c & puVar3[1]) != 0) &&
                          ((*puVar3 & DAT_00571178) == 0 && (puVar3[1] & DAT_0057117c) == 0)) &&
                         (temp_v1 = btlFindEntryValue((int)*(short *)((int)puVar3 + 0x6e),0x15), 0 < temp_v1)
                         ) {
                        return 1;
                      }
                      temp_v2 = temp_v2 + 1;
                    } while ((int)temp_v2 < (int)temp_v3);
                  }
                }
                else {
                  if ((param_3->field_0x3c & 0x7f) == 0) {
                    return 1;
                  }
                  temp_v3 = temp_v2 + temp_v1;
                  if (temp_v2 < temp_v3) {
                    do {
                      puVar3 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v2 * 0x408);
                      if (((*puVar3 & DAT_00571148) != 0 || (puVar3[1] & DAT_0057114c) != 0) &&
                         ((puVar3[1] & DAT_0057117c) == 0 && (*puVar3 & DAT_00571178) == 0)) {
                        if ((param_3->field_0x3c & 0x7f) != 4) {
                          return 0;
                        }
                        if ((puVar3[0x9d] & 0x10) != 0) {
                          return 1;
                        }
                      }
                      temp_v2 = temp_v2 + 1;
                    } while ((int)temp_v2 < (int)temp_v3);
                  }
                }
              }
              else {
                temp_v3 = temp_v2 + temp_v1;
                if (temp_v2 < temp_v3) {
                  do {
                    puVar3 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v2 * 0x408);
                    if (((DAT_00571148 & *puVar3) != 0 || (DAT_0057114c & puVar3[1]) != 0) &&
                       ((*puVar3 & DAT_00571178) == 0 && (puVar3[1] & DAT_0057117c) == 0)) {
                      temp_v1 = btlFindEntryValue((int)*(short *)((int)puVar3 + 0x6e),7);
                      if (temp_v1 < 0) {
                        return 1;
                      }
                      temp_v1 = btlFindEntryValue((int)*(short *)((int)puVar3 + 0x6e),8);
                      if (temp_v1 < 0) {
                        return 1;
                      }
                      temp_v1 = btlFindEntryValue((int)*(short *)((int)puVar3 + 0x6e),10);
                      if (temp_v1 < 0) {
                        return 1;
                      }
                      temp_v1 = btlFindEntryValue((int)*(short *)((int)puVar3 + 0x6e),9);
                      if (temp_v1 < 0) {
                        return 1;
                      }
                    }
                    temp_v2 = temp_v2 + 1;
                  } while ((int)temp_v2 < (int)temp_v3);
                }
              }
            }
            else {
              temp_v3 = temp_v2 + temp_v1;
              if (temp_v2 < temp_v3) {
                do {
                  puVar3 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v2 * 0x408);
                  if (((DAT_00571148 & *puVar3) != 0 || (DAT_0057114c & puVar3[1]) != 0) &&
                     ((puVar3[1] & DAT_0057117c) == 0 && (DAT_00571178 & *puVar3) == 0)) {
                    temp_v1 = btlFindEntryValue((int)*(short *)((int)puVar3 + 0x6e),7);
                    if (0 < temp_v1) {
                      return 1;
                    }
                    temp_v1 = btlFindEntryValue((int)*(short *)((int)puVar3 + 0x6e),8);
                    if (0 < temp_v1) {
                      return 1;
                    }
                    temp_v1 = btlFindEntryValue((int)*(short *)((int)puVar3 + 0x6e),10);
                    if (0 < temp_v1) {
                      return 1;
                    }
                    temp_v1 = btlFindEntryValue((int)*(short *)((int)puVar3 + 0x6e),9);
                    if (0 < temp_v1) {
                      return 1;
                    }
                  }
                  temp_v2 = temp_v2 + 1;
                } while ((int)temp_v2 < (int)temp_v3);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

} /* extern "C" */
