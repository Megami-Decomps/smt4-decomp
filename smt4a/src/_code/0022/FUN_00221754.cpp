/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221754` (_code @ 0x221754, 0x290 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int dataTable08Sub2GetRecord(void);
int dataTable00FindById(void);
int dataTable04FindById(void);

typedef struct fn_00221754_arg0 fn_00221754_arg0;
struct fn_00221754_arg0 {
    unsigned char pad_0x0[0x166];
    ushort field_0x166; /* +0x166 */
    unsigned char pad_0x168[0x290];
    void *field_0x3f8; /* +0x3f8 */
    int field_0x3fc; /* +0x3fc */
    unsigned char pad_0x400[0x4];
    int field_0x404; /* +0x404 */
};

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: dataTable08Sub2GetRecord. */
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: dataTable04FindById. */


unsigned int FUN_00221754(fn_00221754_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  if (param_1 != (fn_00221754_arg0 *)0x0) {
    if (param_1->field_0x3f8 != (unsigned short *)0x0) {
      if (param_3 == 0) {
        temp_v1 = (unsigned int)*(unsigned short *)param_1->field_0x3f8;
        dataTable08Sub2GetRecord();
        if (temp_v1 != 0) {
          if (*(unsigned char *)(temp_v1 + 0x2b) == param_2) {
            return 1;
          }
          if ((param_2 == 0xc) && (*(char *)(temp_v1 + 0x2d) != '\0')) {
            return 1;
          }
        }
        temp_v1 = (unsigned int)*(unsigned short *)((int)param_1->field_0x3f8 + 4);
        dataTable08Sub2GetRecord();
        if (temp_v1 != 0) {
          if (*(unsigned char *)(temp_v1 + 0x2b) == param_2) {
            return 1;
          }
          if ((param_2 == 0xc) && (*(char *)(temp_v1 + 0x2d) != '\0')) {
            return 1;
          }
        }
      }
      temp_v3 = 0;
      do {
        temp_v1 = (unsigned int)*(unsigned short *)((int)param_1->field_0x3f8 + temp_v3 * 2 + 0x34);
        dataTable04FindById();
        if (temp_v1 != 0) {
          if (param_3 != 0) {
            if (*(char *)(temp_v1 + 0x23) == '\x02') {
              if (*(unsigned char *)(temp_v1 + 0x2f) == param_2) {
                return 1;
              }
              if (param_2 == 0xc) {
                temp_v0 = *(char *)(temp_v1 + 0x31);
                if (temp_v0 != '\0') {
                  return 1;
                }
              }
            }
          }
          else {
            if (*(unsigned char *)(temp_v1 + 0x2f) == param_2) {
              return 1;
            }
            if (param_2 == 0xc) {
              temp_v0 = *(char *)(temp_v1 + 0x31);
              if (temp_v0 != '\0') {
                return 1;
              }
            }
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 8);
    }
    if (param_1->field_0x3fc != 0) {
      if (param_3 == 0) {
        temp_v1 = (unsigned int)param_1->field_0x166;
        FUN_00184310();
        if ((*(unsigned char *)(temp_v1 + 0xe) == param_2) ||
           ((param_2 == 0xc && (*(char *)(temp_v1 + 0x11) != '\0')))) {
          return 1;
        }
      }
      temp_v3 = 0;
      do {
        temp_v1 = (unsigned int)*(unsigned short *)(param_1->field_0x3fc + temp_v3 * 2 + 0x34);
        dataTable04FindById();
        if (temp_v1 != 0) {
          if (param_3 != 0) {
            if (*(char *)(temp_v1 + 0x23) == '\x02') {
              if (*(unsigned char *)(temp_v1 + 0x2f) == param_2) {
                return 1;
              }
              if (param_2 == 0xc) {
                temp_v0 = *(char *)(temp_v1 + 0x31);
                if (temp_v0 != '\0') {
                  return 1;
                }
              }
            }
          }
          else {
            if (*(unsigned char *)(temp_v1 + 0x2f) == param_2) {
              return 1;
            }
            if (param_2 == 0xc) {
              temp_v0 = *(char *)(temp_v1 + 0x31);
              if (temp_v0 != '\0') {
                return 1;
              }
            }
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 8);
    }
    if (param_1->field_0x404 != 0) {
      temp_v1 = (unsigned int)param_1->field_0x166;
      dataTable00FindById();
      temp_v3 = 0;
      do {
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x50);
        dataTable04FindById();
        if (temp_v2 != 0) {
          if (param_3 != 0) {
            if (*(char *)(temp_v2 + 0x23) == '\x02') {
              if (*(unsigned char *)(temp_v2 + 0x2f) == param_2) {
                return 1;
              }
              if (param_2 == 0xc) {
                temp_v0 = *(char *)(temp_v2 + 0x31);
                if (temp_v0 != '\0') {
                  return 1;
                }
              }
            }
          }
          else {
            if (*(unsigned char *)(temp_v2 + 0x2f) == param_2) {
              return 1;
            }
            if (param_2 == 0xc) {
              temp_v0 = *(char *)(temp_v2 + 0x31);
              if (temp_v0 != '\0') {
                return 1;
              }
            }
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 8);
    }
  }
  return 0;
}

} /* extern "C" */
