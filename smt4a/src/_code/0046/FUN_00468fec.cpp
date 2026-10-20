/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00468fec` (_code @ 0x468fec, 0x3cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00214da4(void);
int FUN_002a4b74(void);
int FUN_002e6234(void);
int FUN_0034913c(void);
int FUN_0037c8b4(int, int);
int FUN_0037c8e4(int, int);
int FUN_0037d6e4(int);
int FUN_00388758(int);
int FUN_003a7630(int);
int FUN_003c5fc4(int);
int FUN_003fe86c(int, int);

extern unsigned char DAT_005333bb; /* 0x5333bb */

extern int FUN_0018719c(unsigned int);
extern unsigned int FUN_0019de98(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00214da4. */
extern int FUN_00224880(unsigned int);
extern int FUN_002a4b60(void);
/* Supplied declaration required: FUN_002a4b74. */
/* Supplied declaration required: FUN_002e6234. */
extern int FUN_0031d62c(void);
/* Supplied declaration required: FUN_0034913c. */
extern int FUN_0034919c(void);
extern int FUN_003491b8(void);
/* Supplied declaration required: FUN_0037c8b4. */
/* Supplied declaration required: FUN_0037c8e4. */
/* Supplied declaration required: FUN_0037d6e4. */
/* Supplied declaration required: FUN_00388758. */
/* Supplied declaration required: FUN_003a7630. */
/* Supplied declaration required: FUN_003c5fc4. */
/* Supplied declaration required: FUN_003fe86c. */
extern int FUN_00467df8(void);
extern unsigned int FUN_0046bba0(int, unsigned char);


void FUN_00468fec(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = FUN_00224880(*(unsigned int *)param_1[0xad]);
  if (temp_v0 != 2) {
    temp_v0 = FUN_0031d62c();
    if (temp_v0 != 0) {
      temp_v0 = FUN_002a4b60();
      if ((char)param_1[6] == '\0') {
        temp_v4 = *(unsigned char *)(temp_v0 + 0x5333b8);
      }
      else {
        temp_v4 = (&DAT_005333bb)[temp_v0];
        if ((temp_v0 == 0) && (temp_v1 = FUN_00467df8(), temp_v1 == 0)) {
          temp_v4 = 7;
        }
      }
      temp_v2 = FUN_0046bba0((int)param_1 + 0x19,temp_v4);
      temp_v3 = FUN_0019de98(temp_v2,0xf4f4f4ff);
      if (temp_v0 != -1) {
        temp_v3 = (unsigned int)(unsigned char)param_1[6];
      }
      if (temp_v0 != -1 && temp_v3 != 0) {
        if (temp_v0 != 0) {
          temp_v1 = FUN_003491b8();
          if (temp_v1 != 0) {
            FUN_00388758(0);
          }
        }
        else {
          temp_v1 = FUN_0034919c();
          if (temp_v1 == 0) {
            FUN_0037c8e4(1,0);
            temp_v1 = FUN_00467df8();
            if (temp_v1 != 0) {
              FUN_0037c8b4(-temp_v1,0);
            }
            FUN_003c5fc4(1);
          }
        }
        if (((char)param_1[4] == '\x0e') && (temp_v1 = FUN_0018719c(0x491), temp_v1 == 0)) {
          if (temp_v0 != 3) {
            if (param_1[0x338] != 0) {
              param_1[0x338] = 0;
              temp_v3 = *(unsigned int *)(*(int *)(param_1[0x293] + 4) + 4);
              if ((temp_v3 & 1) == 0) {
                *(unsigned int *)(*(int *)(param_1[0x293] + 4) + 4) = temp_v3 | 1;
              }
            }
            temp_v0 = *(int *)(param_1[0x293] + 4);
            if ((*(unsigned int *)(temp_v0 + 4) & 1) == 0) {
              temp_v3 = *(unsigned int *)(temp_v0 + 4) | 1;
              *(unsigned int *)(temp_v0 + 4) = temp_v3;
              return;
            }
          }
          else {
            if (param_1[0x338] != 7) {
              param_1[0x338] = 7;
            }
            temp_v0 = *(int *)(param_1[0x293] + 4);
            if ((*(unsigned int *)(temp_v0 + 4) & 1) != 0) {
              temp_v3 = *(unsigned int *)(temp_v0 + 4) & 0xfffffffe;
              *(unsigned int *)(temp_v0 + 4) = temp_v3;
              return;
            }
          }
        }
      }
    }
  }
  else {
    if ((char)param_1[6] == '\0') {
      FUN_003a7630(0);
      *param_1 = *param_1 | 0x200;
      FUN_0037d6e4(1);
      temp_v0 = 1;
      *(unsigned short *)(param_1 + 0x33d) = 1;
      FUN_002e6234();
      if (temp_v0 != 0) {
        *(unsigned char *)((int)param_1 + 0xe4a) = *(unsigned char *)(temp_v0 + 0x52);
        *(unsigned short *)(param_1 + 0x393) = *(unsigned short *)(temp_v0 + 8);
        *(unsigned char *)((int)param_1 + 0xe4e) = *(unsigned char *)(temp_v0 + 0x53);
        *(unsigned char *)(param_1 + 0x395) = *(unsigned char *)(temp_v0 + 0xa6);
        *(unsigned short *)((int)param_1 + 0xe56) = *(unsigned short *)(temp_v0 + 0x5c);
        *(unsigned char *)(param_1 + 0x396) = *(unsigned char *)(temp_v0 + 0xa7);
        *(unsigned char *)((int)param_1 + 0xe5e) = *(unsigned char *)(temp_v0 + 0xfa);
        *(unsigned short *)(param_1 + 0x398) = *(unsigned short *)(temp_v0 + 0xb0);
        *(unsigned char *)((int)param_1 + 0xe62) = *(unsigned char *)(temp_v0 + 0xfb);
        *(unsigned char *)(param_1 + 0x39a) = *(unsigned char *)(temp_v0 + 0x14e);
        *(unsigned short *)((int)param_1 + 0xe6a) = *(unsigned short *)(temp_v0 + 0x104);
        *(unsigned char *)(param_1 + 0x39b) = *(unsigned char *)(temp_v0 + 0x14f);
      }
      FUN_00214da4();
      param_1[1] = 8;
      param_1[2] = 0;
      return;
    }
    FUN_003a7630(0);
    temp_v2 = FUN_002a4b74();
    switch(temp_v2) {
    case 0:
      FUN_00214da4();
      param_1[2] = 0;
      param_1[1] = 7;
      break;
    case 1:
      temp_v0 = FUN_0034919c();
      if (temp_v0 != 0) {
        FUN_00388758(0);
      }
      FUN_00214da4();
      param_1[1] = 8;
      param_1[2] = 0;
      break;
    case 2:
      temp_v0 = FUN_0034919c();
      if (temp_v0 != 0) {
        FUN_00388758(0);
      }
      FUN_00214da4();
      param_1[1] = 9;
      param_1[2] = 0;
      FUN_00388758(0);
      break;
    case 3:
      temp_v0 = FUN_0034919c();
      if (temp_v0 != 0) {
        FUN_00388758(0);
      }
      FUN_00214da4();
      param_1[1] = 10;
      param_1[2] = 0;
      temp_v0 = *(int *)(param_1[0x28a] + 4);
      FUN_003fe86c(temp_v0,0);
      *(unsigned int *)(temp_v0 + 0x1fc) = 0x3f800000;
      temp_v3 = *(unsigned int *)(*(int *)(param_1[0x293] + 4) + 4);
      if ((temp_v3 & 1) == 0) {
        *(unsigned int *)(*(int *)(param_1[0x293] + 4) + 4) = temp_v3 | 1;
      }
      break;
    case 0xffffffff:
      temp_v0 = FUN_0034919c();
      if (temp_v0 != 0) {
        FUN_00388758(0);
      }
      FUN_0034913c();
      param_1[1] = 0x11;
      param_1[2] = 0;
    }
    temp_v0 = FUN_002a4b74();
    if (temp_v0 != -1) {
      temp_v3 = FUN_002a4b74();
      param_1[0x33b] = temp_v3;
      return;
    }
    param_1[0x33b] = 0;
  }
  return;
}

} /* extern "C" */
