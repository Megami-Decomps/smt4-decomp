/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f8a64` (_code @ 0x4f8a64, 0x2f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_001568f8(int, int);
int FUN_00178b04(int, unsigned char *, int);
int FUN_0040aa90(void);
int FUN_004f7520(int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char LAB_004f8d5c; /* 0x4f8d5c */

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: FUN_00178b04. */
extern int FUN_003ef9e0(unsigned int, int);
/* Supplied declaration required: FUN_0040aa90. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_004f7520. */


void FUN_004f8a64(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  int temp_v5;
  unsigned short *puVar8;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  char *pcVar13;
  unsigned char temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  FUN_004f7520(param_1,param_3);
  temp_v1 = FUN_0014aa78();
  temp_v6 = *(int *)(temp_v1 + 0x1ed4) + param_3 * 0x1d0;
  temp_v1 = (int)*(short *)(temp_v6 + 0x6a);
  if (*(int *)(param_1 + param_3 * 8 + 0x1034) < 0) {
    temp_v2 = FUN_0014aa78();
    temp_v6 = FUN_003ef9e0(temp_v2,temp_v6);
    if (temp_v6 < 0) {
      temp_v6 = 0;
    }
    temp_v3 = FUN_0014aa78();
    FUN_001568f8(temp_v3,temp_v1);
    if (temp_v3 != 0) {
      temp_v7 = 0;
      while( 1 ) {
        temp_v5 = param_1 + temp_v7 * 0x28;
        if ((*(int *)(temp_v3 + temp_v6 * 4 + 0xc) == *(int *)(temp_v5 + 0x194)) &&
           (temp_v4 = FUN_0014aa78(),
           *(int *)(*(int *)(temp_v4 + 0x1ed4) + param_3 * 0x1d0 + 100) == *(int *)(temp_v5 + 0x198)))
        break;
        temp_v7 = temp_v7 + 1;
        if (temp_v7 >= 0x32) {
          return;
        }
      }
      temp_v6 = 0x20;
      FUN_00178b04(0x20,&LAB_004f8d5c,0x65c);
      temp_v2 = 0;
      if (temp_v6 != 0) {
        temp_v2 = FUN_0040ac08();
      }
      temp_v6 = param_1 + param_3 * 0x10;
      *(unsigned int *)(temp_v6 + 0x960) = temp_v2;
      FUN_0040aa90();
      temp_v3 = 0;
      temp_v12 = (unsigned int)*(unsigned short *)(*(int *)(*(int *)(*(int *)(temp_v5 + 400) + 4) + 0x210) + 0x38);
      if (temp_v12 != 0) {
        do {
          temp_v7 = 0;
          puVar6 = (unsigned short *)
                   (*(int *)(*(int *)(*(int *)(temp_v6 + 0x960) + 4) + 0x10c) + temp_v3 * 0x158);
          puVar8 = (unsigned short *)(*(int *)(*(int *)(*(int *)(temp_v5 + 400) + 4) + 0x10c) + temp_v3 * 0x158)
          ;
          do {
            temp_v11 = 0;
            temp_v4 = param_1 + temp_v7 * 0x20c;
            if (0 < *(int *)(temp_v4 + 0x381c)) {
              pcVar13 = (char *)(temp_v4 + 0x3820);
              do {
                temp_v8 = temp_v4 + temp_v11 * 4;
                temp_v9 = (int)*(short *)(temp_v8 + 0x371e);
                if (*(short *)(temp_v8 + 0x371c) == temp_v3) {
                  if (temp_v9 != 0) {
                    if (temp_v9 != 1) {
                      if (temp_v9 == 2) {
                        if ((*puVar8 & 0x4000) != 0) {
                          *puVar6 = *puVar6 | 0x4000;
                        }
                        temp_v0 = *pcVar13;
                        temp_v2 = *(unsigned int *)(puVar8 + 0xaa);
                        *(unsigned int *)(puVar6 + 0xa8) = *(unsigned int *)(puVar8 + 0xa8);
                        *(unsigned int *)(puVar6 + 0xaa) = temp_v2;
                        if (temp_v0 == '\f') {
                          temp_v10 = (unsigned char)puVar6[1] | 4;
                        }
                        else {
                          temp_v10 = (unsigned char)puVar6[1] & 0xfb;
                        }
                        *(unsigned char *)(puVar6 + 1) = temp_v10;
                      }
                    }
                    else {
                      if ((*puVar8 & 0x2000) != 0) {
                        *puVar6 = *puVar6 | 0x2000;
                      }
                      temp_v0 = *pcVar13;
                      temp_v2 = *(unsigned int *)(puVar8 + 0xa6);
                      *(unsigned int *)(puVar6 + 0xa4) = *(unsigned int *)(puVar8 + 0xa4);
                      *(unsigned int *)(puVar6 + 0xa6) = temp_v2;
                      if (temp_v0 == '\f') {
                        temp_v10 = (unsigned char)puVar6[1] | 2;
                      }
                      else {
                        temp_v10 = (unsigned char)puVar6[1] & 0xfd;
                      }
                      *(unsigned char *)(puVar6 + 1) = temp_v10;
                    }
                  }
                  else {
                    if ((*puVar8 & 0x1000) != 0) {
                      *puVar6 = *puVar6 | 0x1000;
                    }
                    temp_v0 = *pcVar13;
                    temp_v2 = *(unsigned int *)(puVar8 + 0xa2);
                    *(unsigned int *)(puVar6 + 0xa0) = *(unsigned int *)(puVar8 + 0xa0);
                    *(unsigned int *)(puVar6 + 0xa2) = temp_v2;
                    if (temp_v0 == '\f') {
                      temp_v10 = (unsigned char)puVar6[1] | 1;
                    }
                    else {
                      temp_v10 = (unsigned char)puVar6[1] & 0xfe;
                    }
                    *(unsigned char *)(puVar6 + 1) = temp_v10;
                  }
                  temp_v2 = *(unsigned int *)(puVar8 + temp_v9 * 0xc + 0x78);
                  temp_v13 = *(unsigned int *)(puVar8 + temp_v9 * 0xc + 0x7a);
                  temp_v14 = *(unsigned int *)(puVar8 + temp_v9 * 0xc + 0x7c);
                  temp_v15 = *(unsigned int *)(puVar8 + temp_v9 * 0xc + 0x7e);
                  temp_v16 = *(unsigned int *)(puVar8 + temp_v9 * 0xc + 0x80);
                  *(unsigned int *)(puVar6 + temp_v9 * 0xc + 0x76) =
                       *(unsigned int *)(puVar8 + temp_v9 * 0xc + 0x76);
                  *(unsigned int *)(puVar6 + temp_v9 * 0xc + 0x78) = temp_v2;
                  *(unsigned int *)(puVar6 + temp_v9 * 0xc + 0x7a) = temp_v13;
                  *(unsigned int *)(puVar6 + temp_v9 * 0xc + 0x7c) = temp_v14;
                  *(unsigned int *)(puVar6 + temp_v9 * 0xc + 0x7e) = temp_v15;
                  *(unsigned int *)(puVar6 + temp_v9 * 0xc + 0x80) = temp_v16;
                }
                temp_v11 = temp_v11 + 1;
              } while (temp_v11 < *(int *)(temp_v4 + 0x381c));
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 0x32);
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < (int)temp_v12);
      }
      *(int *)(temp_v6 + 0x964) = temp_v1;
    }
  }
  return;
}

} /* extern "C" */
