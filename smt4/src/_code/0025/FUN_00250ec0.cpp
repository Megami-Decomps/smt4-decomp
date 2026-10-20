/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00250ec0` (_code @ 0x250ec0, 0x2bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022169c(void);
int FUN_0027d98c(void);
int FUN_00287800(void);
int FUN_0028fb40(int);
int FUN_002a8740(void);
int FUN_002a8764(void);
int FUN_002b63c0(void);

/* Supplied declaration required: FUN_0022169c. */
extern int FUN_0025b6e8(unsigned short);
/* Supplied declaration required: FUN_0027d98c. */
/* Supplied declaration required: FUN_00287800. */
/* Supplied declaration required: FUN_0028fb40. */
extern int FUN_0029bcf0(unsigned short);
/* Supplied declaration required: FUN_002a8740. */
/* Supplied declaration required: FUN_002a8764. */
extern int FUN_002a8778(void);
extern int FUN_002ae3c4(unsigned short);
/* Supplied declaration required: FUN_002b63c0. */
extern int FUN_002b6b38(void);
extern int FUN_00348b7c(int);
extern int FUN_003bc96c(unsigned int, unsigned short);


void FUN_00250ec0(int param_1)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  
  temp_v3 = param_1;
  FUN_002b63c0();
  if (temp_v3 != 0) {
    temp_v0 = *(char *)(temp_v3 + 6);
    if (temp_v0 == '\x04' || temp_v0 == '\x05') {
      temp_v3 = FUN_002b6b38();
      if (temp_v3 != 0) {
        FUN_00287800();
      }
    }
    else if (temp_v0 == '\x06') {
      FUN_0027d98c();
    }
    else {
      temp_v2 = FUN_002b6b38();
      if ((temp_v2 != 2) || (temp_v2 = FUN_00287800(), temp_v2 == 0)) {
        if (*(short *)(temp_v3 + 0x16c) == 5) {
          temp_v2 = FUN_002a8778();
          temp_v10 = FUN_002a8764();
          temp_v9 = 0;
          if (temp_v9 < temp_v2) {
            do {
              if (-1 < *(char *)(temp_v10 + 0x90f0 + temp_v9)) {
                temp_v4 = FUN_002a8740();
                temp_v8 = 0;
                while( 1 ) {
                  temp_v5 = temp_v3 + temp_v8 * 8;
                  temp_v1 = *(short *)(temp_v5 + 0x16c);
                  if (((temp_v1 != 0) && (temp_v1 == 5)) &&
                     (temp_v5 = FUN_003bc96c(temp_v4,*(unsigned short *)(temp_v5 + 0x16e)), temp_v5 == 0))
                  break;
                  temp_v8 = temp_v8 + 1;
                  if (temp_v8 >= 6) {
                    return;
                  }
                }
              }
              temp_v9 = temp_v9 + 1;
            } while (temp_v9 < temp_v2);
          }
        }
        else {
          temp_v2 = 0;
          do {
            temp_v10 = temp_v3 + temp_v2 * 8;
            switch(*(unsigned short *)(temp_v10 + 0x16c)) {
            case 1:
              temp_v7 = FUN_0028fb40(*(unsigned short *)(temp_v10 + 0x16e));
              if (temp_v7 < *(unsigned int *)(temp_v10 + 0x170)) {
                return;
              }
              break;
            case 2:
              if (*(char *)(temp_v3 + 6) == '\x01') {
                temp_v9 = FUN_00348b7c(param_1);
                if ((unsigned int)*(unsigned short *)(temp_v9 + temp_v2 * 2 + 2) < *(unsigned int *)(temp_v10 + 0x170)) {
                  return;
                }
              }
              else {
                temp_v10 = FUN_0029bcf0(*(unsigned short *)(temp_v10 + 0x16e));
                if (temp_v10 < 0) {
                  return;
                }
              }
              break;
            case 3:
              puVar7 = (unsigned int *)FUN_002a8764();
              if (*puVar7 < *(unsigned int *)(temp_v10 + 0x170)) {
                return;
              }
              break;
            case 6:
              temp_v9 = FUN_002a8778();
              temp_v8 = FUN_002a8764();
              temp_v5 = 0;
              if (temp_v9 < 1) {
                return;
              }
              do {
                if (-1 < *(char *)(temp_v8 + 0x90f0 + temp_v5)) {
                  temp_v6 = FUN_002a8740();
                  temp_v7 = temp_v6 + 0x4c;
                  FUN_0022169c();
                  if (*(unsigned int *)(temp_v10 + 0x170) <= temp_v7) break;
                }
                temp_v5 = temp_v5 + 1;
                if (temp_v9 <= temp_v5) {
                  return;
                }
              } while( 1 );
            case 7:
              temp_v9 = FUN_002ae3c4(*(unsigned short *)(temp_v10 + 0x16e));
              if (temp_v9 != 0xb) {
                return;
              }
              temp_v9 = FUN_0025b6e8(*(unsigned short *)(temp_v10 + 0x16e));
              if (temp_v9 == 0) {
                return;
              }
              temp_v10 = FUN_0028fb40(*(unsigned short *)(temp_v10 + 0x16e));
              if (temp_v10 != 0) {
                return;
              }
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 6);
        }
      }
    }
  }
  return;
}

} /* extern "C" */
