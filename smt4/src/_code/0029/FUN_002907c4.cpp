/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002907c4` (_code @ 0x2907c4, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_sprintf(int, unsigned char *);
int textFormatBuffer(int, unsigned char *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_0029096c; /* 0x29096c */
extern unsigned char LAB_00290970; /* 0x290970 */
extern unsigned char LAB_00290974; /* 0x290974 */
extern unsigned char LAB_00290978; /* 0x290978 */
extern unsigned char LAB_0029097c; /* 0x29097c */
extern unsigned char LAB_00290980; /* 0x290980 */
extern unsigned char LAB_00290984; /* 0x290984 */
extern unsigned char LAB_00290988; /* 0x290988 */
extern unsigned char LAB_0029098c; /* 0x29098c */
extern unsigned char LAB_00290990; /* 0x290990 */

/* Supplied declaration required: libc_sprintf. */
/* Supplied declaration required: textFormatBuffer. */
extern int __aeabi_idivmod(int, int);


void FUN_002907c4(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int unaff_r4;
  int temp_v2;
  int temp_v3;
  int unaff_r10;
  
  if (param_2 != 0) {
    unaff_r4 = 100000000;
    unaff_r10 = 0x66666667;
  }
  temp_v2 = 0;
  temp_v3 = param_2;
  if (param_2 != 0) {
    do {
      if (unaff_r4 <= param_2) {
        temp_v0 = __aeabi_idivmod(temp_v3,unaff_r4);
        if (temp_v0 != 0) {
          if (temp_v0 != 1) {
            if (temp_v0 != 2) {
              if (temp_v0 != 3) {
                if (temp_v0 != 4) {
                  if (temp_v0 != 5) {
                    if (temp_v0 != 6) {
                      if (temp_v0 != 7) {
                        if (temp_v0 != 8) {
                          if (temp_v0 == 9) {
                            temp_v1 = param_1 + temp_v2;
                            textFormatBuffer(temp_v1,&LAB_00290990);
                            temp_v2 = temp_v2 + temp_v1;
                          }
                        }
                        else {
                          temp_v1 = param_1 + temp_v2;
                          textFormatBuffer(temp_v1,&LAB_0029098c);
                          temp_v2 = temp_v2 + temp_v1;
                        }
                      }
                      else {
                        temp_v1 = param_1 + temp_v2;
                        textFormatBuffer(temp_v1,&LAB_00290988);
                        temp_v2 = temp_v2 + temp_v1;
                      }
                    }
                    else {
                      temp_v1 = param_1 + temp_v2;
                      textFormatBuffer(temp_v1,&LAB_00290984);
                      temp_v2 = temp_v2 + temp_v1;
                    }
                  }
                  else {
                    temp_v1 = param_1 + temp_v2;
                    textFormatBuffer(temp_v1,&LAB_00290980);
                    temp_v2 = temp_v2 + temp_v1;
                  }
                }
                else {
                  temp_v1 = param_1 + temp_v2;
                  textFormatBuffer(temp_v1,&LAB_0029097c);
                  temp_v2 = temp_v2 + temp_v1;
                }
              }
              else {
                temp_v1 = param_1 + temp_v2;
                textFormatBuffer(temp_v1,&LAB_00290978);
                temp_v2 = temp_v2 + temp_v1;
              }
            }
            else {
              temp_v1 = param_1 + temp_v2;
              textFormatBuffer(temp_v1,&LAB_00290974);
              temp_v2 = temp_v2 + temp_v1;
            }
          }
          else {
            temp_v1 = param_1 + temp_v2;
            textFormatBuffer(temp_v1,&LAB_00290970);
            temp_v2 = temp_v2 + temp_v1;
          }
        }
        else {
          temp_v1 = param_1 + temp_v2;
          textFormatBuffer(temp_v1,&LAB_0029096c);
          temp_v2 = temp_v2 + temp_v1;
        }
        temp_v3 = temp_v3 - unaff_r4 * temp_v0;
      }
      temp_v0 = (int)((unsigned long long)((long long)unaff_r10 * (long long)unaff_r4) >> 0x20);
      unaff_r4 = (temp_v0 >> 2) - (temp_v0 >> 0x1f);
    } while (0 < unaff_r4);
    return;
  }
  libc_sprintf(param_1,&LAB_0029096c);
  return;
}

} /* extern "C" */
