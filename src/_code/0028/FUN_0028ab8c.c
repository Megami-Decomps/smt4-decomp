/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ab8c` (_code @ 0x28ab8c, 0xec8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_001a7c38. */
/* Supplied declaration required: FUN_001d12b0. */
/* Supplied declaration required: FUN_0020592c. */
/* Supplied declaration required: FUN_0025452c. */
/* Supplied declaration required: FUN_0026ba2c. */
/* Supplied declaration required: FUN_0026c8c0. */
/* Supplied declaration required: FUN_0026c97c. */
/* Supplied declaration required: FUN_0026cad4. */
/* Supplied declaration required: FUN_0026cc2c. */
/* Supplied declaration required: FUN_0026d3b0. */
/* Supplied declaration required: FUN_0026d64c. */
/* Supplied declaration required: FUN_00292e88. */
/* Supplied declaration required: FUN_002935ec. */
/* Supplied declaration required: FUN_00293a30. */
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_0029eb14. */
/* Supplied declaration required: FUN_0029eb58. */
extern unsigned int FUN_0029eba8(void);
/* Supplied declaration required: FUN_0029edfc. */
extern unsigned int FUN_0029f248(int);
/* Supplied declaration required: FUN_002a89e4. */
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002b4854. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002c4450. */
/* Supplied declaration required: FUN_002e3684. */
/* Supplied declaration required: FUN_002eff60. */


void FUN_0028ab8c(int param_1,unsigned int param_2,unsigned short param_3)

{
/* irregular: 13 goto(s); 27 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned char temp_v14;
  unsigned long long temp_v15;
  
  temp_v0 = DAT_0043dcf0;
  temp_v2 = FUN_002a8a08();
  *(char *)(temp_v0 + 0x66c) = (char)param_1;
  FUN_002c4450(temp_v0 + 0x678,4,1);
  temp_v3 = 0;
  temp_v9 = 0;
  do {
    temp_v4 = temp_v3 + 1;
    temp_v9 = temp_v9 + 2;
    *(unsigned short *)(temp_v0 + temp_v3 * 8 + 0x73c) = 1;
    temp_v3 = temp_v3 + 2;
    *(unsigned short *)(temp_v0 + temp_v4 * 8 + 0x73c) = 1;
  } while (temp_v9 < 0x18);
  temp_v3 = 0;
  do {
    temp_v9 = temp_v0 + temp_v3 * 4;
    *(unsigned char *)(*(int *)(temp_v9 + 0x6c8) + 0x25) = 0;
    *(unsigned char *)(*(int *)(temp_v9 + 0x6c8) + 0x27) = 0;
    *(unsigned char *)(*(int *)(temp_v9 + 0x6c8) + 0x26) = 0;
    FUN_00292e88(*(unsigned int *)(temp_v9 + 0x6c8),0);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 4);
  temp_v3 = 0;
  do {
    temp_v9 = temp_v0 + temp_v3 * 4;
    *(unsigned char *)(*(int *)(temp_v9 + 0x6d8) + 0x25) = 0;
    *(unsigned char *)(*(int *)(temp_v9 + 0x6d8) + 0x27) = 0;
    *(unsigned char *)(*(int *)(temp_v9 + 0x6d8) + 0x26) = 0;
    FUN_00292e88(*(unsigned int *)(temp_v9 + 0x6d8),0);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x18);
  switch(param_1) {
  case 1:
    temp_v2 = 0;
    temp_v3 = 0;
    *(unsigned int *)(temp_v0 + 0x678) = 0;
    do {
      temp_v9 = temp_v2 + 1;
      temp_v3 = temp_v3 + 2;
      *(unsigned short *)(temp_v0 + temp_v2 * 8 + 0x73c) = 0;
      temp_v2 = temp_v2 + 2;
      *(unsigned short *)(temp_v0 + temp_v9 * 8 + 0x73c) = 0;
    } while (temp_v3 < 0x18);
  case 0:
    *(unsigned int *)(temp_v0 + 0x20) = 1;
    FUN_0029eb14(0);
    break;
  case 2:
  case 4:
  case 0xf:
    *(unsigned short *)(temp_v0 + 0x38) = 0xffff;
    temp_v3 = 0;
    *(unsigned char *)(temp_v0 + 0x678) = 0;
    do {
      temp_v9 = temp_v0 + temp_v3 * 8;
      if ((*(int *)(temp_v9 + 0x738) < 0) ||
         (((temp_v4 = FUN_002a89e4(), param_1 != 0xf && ((*(unsigned short *)(temp_v4 + 0x44) & 2) != 0)) ||
          ((*(unsigned short *)(temp_v4 + 0x44) & 0x400) != 0 || (*(unsigned short *)(temp_v4 + 0x44) & 4) != 0)))) {
        *(unsigned short *)(temp_v9 + 0x73c) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    temp_v3 = 0;
    do {
      temp_v9 = 0;
      temp_v4 = 0x18;
      do {
        temp_v13 = temp_v0 + temp_v9 * 8;
        temp_v9 = temp_v9 + 1;
        if ((int)*(char *)(temp_v2 + temp_v3 + 0x9108) == *(int *)(temp_v13 + 0x738)) {
          *(unsigned short *)(temp_v13 + 0x73c) = 0;
        }
        temp_v4 = temp_v4 - 1;
      } while (temp_v4 != 0);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
  case 0xc:
  case 0xd:
  case 0xe:
    *(unsigned int *)(temp_v0 + 0x20) = 8;
    goto LAB_0028b4cc;
  case 3:
    temp_v3 = 0;
    *(unsigned int *)(temp_v0 + 0x670) = param_2;
    *(unsigned short *)(temp_v0 + 0x38) = param_3;
    do {
      temp_v9 = temp_v0 + temp_v3 * 8;
      if ((*(int *)(temp_v9 + 0x738) < 0) ||
         (temp_v4 = FUN_002a89e4(), (*(unsigned short *)(temp_v4 + 0x44) & 0x406) != 0)) {
        *(unsigned short *)(temp_v9 + 0x73c) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    temp_v3 = 0;
    do {
      if ((*(int *)(temp_v0 + 0x670) - 1 != temp_v3) && (-1 < *(char *)(temp_v2 + temp_v3 + 0x9108))) {
        temp_v9 = FUN_002a89e4();
        temp_v4 = 0;
        do {
          if ((-1 < *(int *)(temp_v0 + temp_v4 * 8 + 0x738)) &&
             (temp_v13 = FUN_002a89e4(), *(short *)(temp_v13 + 0x46) == *(short *)(temp_v9 + 0x46))) {
            *(unsigned short *)(temp_v0 + temp_v4 * 8 + 0x73c) = 0;
            break;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x18);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    FUN_002eff60(1);
    FUN_001d12b0();
    *(unsigned int *)(temp_v0 + 0x20) = 6;
    FUN_0026cad4();
    if (*(int *)(temp_v0 + 0x1c) != 0x17) {
      return;
    }
    FUN_002935ec(*(unsigned int *)(temp_v0 + 0x20),1);
    return;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    *(short *)(temp_v0 + 0x36) = (short)param_2;
    temp_v3 = 0;
    *(unsigned short *)(temp_v0 + 0x38) = param_3;
    do {
      temp_v9 = 0;
      temp_v4 = 0x18;
      do {
        temp_v13 = temp_v0 + temp_v9 * 8;
        temp_v9 = temp_v9 + 1;
        if ((int)*(char *)(temp_v2 + temp_v3 + 0x9108) == *(int *)(temp_v13 + 0x738)) {
          *(unsigned short *)(temp_v13 + 0x73c) = 0;
        }
        temp_v4 = temp_v4 - 1;
      } while (temp_v4 != 0);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    temp_v3 = 0;
    do {
      temp_v9 = temp_v0 + temp_v3 * 8;
      if ((*(int *)(temp_v9 + 0x738) < 0) ||
         (temp_v4 = FUN_002a89e4(), (*(unsigned short *)(temp_v4 + 0x44) & 0x404) != 0)) {
        *(unsigned short *)(temp_v9 + 0x73c) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    if (!(param_1 == 8 || param_1 == 9)) {
      temp_v6 = param_2 & 0xffff;
LAB_0028afd8:
      temp_v5 = temp_v6;
      if ((param_1 != 5 && param_1 != 6) && param_1 != 7) goto LAB_0028afe8;
    }
    else {
      temp_v12 = param_2;
      FUN_002b4854();
      temp_v5 = 0;
      if (temp_v12 != 0) {
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v12 + 0x62);
      }
      temp_v6 = 0;
      if (temp_v12 == 0 || temp_v5 == 0) goto LAB_0028afd8;
      *(short *)(temp_v0 + 0x36) = (short)temp_v5;
      if (param_1 == 8) {
        temp_v1 = 5;
      }
      else {
        temp_v6 = temp_v5;
        if (param_1 != 9) goto LAB_0028afd8;
        temp_v1 = 6;
      }
      *(unsigned char *)(temp_v0 + 0x66c) = temp_v1;
LAB_0028afe8:
      if (temp_v5 == 0) {
        if ((param_1 == 8) || (param_1 == 9)) {
          if (*(char *)(temp_v2 + 0x9108) < '\0') {
            *(unsigned char *)(temp_v0 + 0x679) = 0;
          }
          if (*(char *)(temp_v2 + 0x9109) < '\0') {
            *(unsigned char *)(temp_v0 + 0x67a) = 0;
          }
          if (*(char *)(temp_v2 + 0x910a) < '\0') {
            *(unsigned char *)(temp_v0 + 0x67b) = 0;
          }
          temp_v6 = param_2;
          FUN_002b4854();
          if ((*(unsigned char *)(temp_v6 + 0x6a) & 0x80) != 0) {
            *(unsigned int *)(temp_v0 + 0x20) = 10;
            temp_v9 = -1;
            FUN_0026c97c(0xffffffff,param_2,1);
            temp_v3 = 0;
            if (temp_v9 == 1) {
              *(unsigned char *)(temp_v0 + 0x678) = 0;
            }
            do {
              temp_v9 = (int)*(char *)(temp_v2 + temp_v3 + 0x9108);
              FUN_0026c97c(temp_v9,param_2,1);
              if (temp_v9 == 1) {
                *(unsigned char *)(temp_v0 + temp_v3 + 0x679) = 0;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 3);
            temp_v2 = 0;
            do {
              temp_v9 = temp_v0 + temp_v2 * 8;
              temp_v3 = *(int *)(temp_v9 + 0x738);
              FUN_0026c97c(temp_v3,param_2,1);
              if (temp_v3 == 1) {
                *(unsigned short *)(temp_v9 + 0x73c) = 0;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 0x18);
            FUN_0020592c();
          }
          else {
            temp_v9 = -1;
            FUN_0026c97c(0xffffffff,param_2,1);
            temp_v3 = 0;
            if (temp_v9 == 1) {
              *(unsigned char *)(temp_v0 + 0x678) = 0;
            }
            do {
              temp_v9 = (int)*(char *)(temp_v2 + temp_v3 + 0x9108);
              FUN_0026c97c(temp_v9,param_2,1);
              if (temp_v9 == 1) {
                *(unsigned char *)(temp_v0 + temp_v3 + 0x679) = 0;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 3);
            temp_v2 = 0;
            do {
              temp_v9 = temp_v0 + temp_v2 * 8;
              temp_v3 = *(int *)(temp_v9 + 0x738);
              FUN_0026c97c(temp_v3,param_2,1);
              if (temp_v3 == 1) {
                *(unsigned short *)(temp_v9 + 0x73c) = 0;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 0x18);
            *(unsigned int *)(temp_v0 + 0x20) = 8;
            if (*(char *)(temp_v0 + 0x42) != '\0') {
              temp_v2 = temp_v0 + 0xa6c;
            }
            else {
              temp_v2 = temp_v0 + 0xa08;
            }
            FUN_0026d64c(temp_v2,0);
          }
        }
        break;
      }
    }
    temp_v6 = temp_v5;
    FUN_002ae3f0();
    if ((*(unsigned char *)(temp_v6 + 0x35) & 8) != 0) {
      *(unsigned char *)(temp_v0 + 0x35) = 1;
      *(unsigned int *)(temp_v0 + 0x20) = 10;
      FUN_0026ba2c();
    }
    else {
      if (((*(unsigned int *)(temp_v6 + 0x28) & 0x1ff) >> 5 != 3) &&
         ((*(unsigned int *)(temp_v6 + 0x28) & 0x1ff) >> 5 != 8)) {
        *(unsigned int *)(temp_v0 + 0x20) = 8;
      }
      else {
        *(unsigned int *)(temp_v0 + 0x20) = 10;
      }
      if (*(char *)(temp_v6 + 0x23) != '\a') {
        if (*(char *)(temp_v2 + 0x9108) < '\0') {
          *(unsigned char *)(temp_v0 + 0x679) = 0;
        }
        if (*(char *)(temp_v2 + 0x9109) < '\0') {
          *(unsigned char *)(temp_v0 + 0x67a) = 0;
        }
        if (*(char *)(temp_v2 + 0x910a) < '\0') {
          *(unsigned char *)(temp_v0 + 0x67b) = 0;
        }
        temp_v3 = (int)*(short *)(temp_v0 + 0x38);
        FUN_0026c8c0(temp_v3,0xffffffff,temp_v5,1);
        if (temp_v3 == 1) {
          *(unsigned char *)(temp_v0 + 0x678) = 0;
          temp_v3 = FUN_00293c98();
          if ((temp_v3 != 0) && (temp_v3 = FUN_00293c98(), (*(unsigned int *)(temp_v3 + 0x44a8) & 0x2000000) != 0)
             ) {
            *(unsigned char *)(temp_v0 + 0x678) = 1;
          }
        }
        temp_v3 = 0;
        do {
          temp_v9 = (int)*(short *)(temp_v0 + 0x38);
          FUN_0026c8c0(temp_v9,(int)*(char *)(temp_v2 + temp_v3 + 0x9108),temp_v5,1);
          if (temp_v9 == 1) {
            *(unsigned char *)(temp_v0 + temp_v3 + 0x679) = 0;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 3);
        temp_v2 = 0;
        do {
          temp_v3 = (int)*(short *)(temp_v0 + 0x38);
          temp_v9 = temp_v0 + temp_v2 * 8;
          FUN_0026c8c0(temp_v3,*(unsigned int *)(temp_v9 + 0x738),temp_v5,1);
          if (temp_v3 == 1) {
            *(unsigned short *)(temp_v9 + 0x73c) = 0;
          }
          temp_v2 = temp_v2 + 1;
          temp_v12 = temp_v11;
        } while (temp_v2 < 0x18);
      }
      else {
        temp_v12 = 2;
        *(unsigned char *)(temp_v0 + 0x66c) = 2;
        *(unsigned char *)(temp_v0 + 0x678) = 0;
        if ((-1 < *(short *)(temp_v0 + 0x38)) && (temp_v5 == 0x7c || temp_v5 == 0x7d)) {
          temp_v2 = -1;
          temp_v3 = 0;
          do {
            temp_v9 = FUN_002a8a08();
            if ((int)*(char *)(temp_v9 + temp_v3 + 0x9108) == (int)*(short *)(temp_v0 + 0x38)) {
              temp_v2 = temp_v3;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 3);
          if (-1 < temp_v2) {
            *(unsigned char *)(temp_v0 + temp_v2 + 0x679) = 0;
            FUN_0025452c(temp_v2);
          }
          FUN_002a89e4((int)*(short *)(temp_v0 + 0x38));
          temp_v12 = temp_v10;
        }
        if ((*(unsigned int *)(temp_v6 + 0x38) & 0x7f) != 1) {
          temp_v2 = 0;
          do {
            temp_v3 = temp_v0 + temp_v2 * 8;
            if (-1 < *(int *)(temp_v3 + 0x738)) {
              temp_v15 = FUN_002a89e4();
              temp_v12 = (unsigned int)((unsigned long long)temp_v15 >> 0x20);
              if ((*(unsigned short *)((int)temp_v15 + 0x44) & 2) != 0) {
                *(unsigned short *)(temp_v3 + 0x73c) = 0;
              }
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x18);
        }
      }
      temp_v14 = (*(unsigned int *)(temp_v6 + 0x28) & 0x1ff) >> 5 != 3;
      if (temp_v14) {
        temp_v12 = 8;
      }
      if (!(temp_v14 && temp_v12 != (*(unsigned int *)(temp_v6 + 0x28) & 0x1ff) >> 5)) {
        FUN_0026ba2c();
      }
      else {
        if (*(char *)(temp_v0 + 0x42) != '\0') {
          temp_v2 = temp_v0 + 0xa6c;
        }
        else {
          temp_v2 = temp_v0 + 0xa08;
        }
        FUN_0026d3b0(temp_v2,0);
      }
    }
    break;
  case 10:
    *(unsigned short *)(temp_v0 + 0x38) = 0xffff;
    *(unsigned int *)(temp_v0 + 0xb34) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0xb38) = 0xffffffff;
    *(unsigned char *)(temp_v0 + 0xb40) = 0xff;
    *(unsigned char *)(temp_v0 + 0xb41) = 0xff;
    *(unsigned int *)(temp_v0 + 0xb3c) = 0;
    FUN_0026cc2c();
    *(unsigned int *)(temp_v0 + 0x20) = 8;
    goto LAB_0028b4cc;
  case 0xb:
    *(short *)(temp_v0 + 0x36) = (short)param_2;
    *(unsigned short *)(temp_v0 + 0x38) = 0xffff;
    FUN_002e3684();
    *(unsigned int *)(temp_v0 + 0x20) = 8;
    if (*(char *)(temp_v0 + 0x42) == '\0') {
      temp_v7 = 0xc4;
    }
    else {
      temp_v7 = 0xc5;
    }
    FUN_002b8b78(temp_v7);
    break;
  case 0x10:
    *(unsigned char *)(temp_v0 + 0x678) = 0;
    temp_v3 = 0;
    *(unsigned int *)(temp_v0 + 0x20) = 8;
    do {
      if (((*(char *)(temp_v2 + temp_v3 + 0x9108) < '\0') ||
          (temp_v9 = FUN_002a89e4(), (*(unsigned short *)(temp_v9 + 0x44) & 0x400) != 0)) ||
         (temp_v9 = FUN_002a89e4((int)*(char *)(temp_v2 + temp_v3 + 0x9108)),
         (*(unsigned short *)(temp_v9 + 0x44) & 2) != 0)) {
        *(unsigned char *)(temp_v0 + temp_v3 + 0x679) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    temp_v2 = 0;
    do {
      temp_v3 = temp_v0 + temp_v2 * 8;
      if ((*(int *)(temp_v3 + 0x738) < 0) ||
         (temp_v9 = FUN_002a89e4(), (*(unsigned short *)(temp_v9 + 0x44) & 0x402) != 0)) {
        *(unsigned short *)(temp_v3 + 0x73c) = 0;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x18);
  }
  if (*(int *)(temp_v0 + 0x20) == 8) {
LAB_0028b4cc:
    if (*(char *)(temp_v0 + 0x42) != '\0') {
      temp_v3 = temp_v0 + 0xa6c;
      temp_v7 = FUN_0029eba8();
      temp_v8 = FUN_0029f248(temp_v3);
      temp_v2 = 0;
      FUN_001a7c38(0,temp_v7,temp_v8,*(unsigned int *)(temp_v0 + 0x2c));
      if (temp_v2 == 0) {
        temp_v2 = 0;
        if (*(char *)(temp_v0 + 0x66c) == '\x04') {
          do {
            temp_v9 = ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v9 != 0) {
              if (*(short *)(DAT_0043dcf0 + (temp_v2 % 4 + (temp_v9 * 4 - 4)) * 8 + 0x73c) != 0) {
LAB_0028b570:
                FUN_0029eb58(temp_v3,temp_v2 % 4);
                FUN_0029edfc(temp_v3,((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1);
                if (temp_v2 < 0x18) goto LAB_0028b938;
                break;
              }
            }
            else if (*(char *)(DAT_0043dcf0 + temp_v2 % 4 + 0x678) != '\0') goto LAB_0028b570;
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x18);
          temp_v2 = 0;
          do {
            if (*(char *)(DAT_0043dcf0 + temp_v2 + 0x678) != '\0') {
              FUN_0029eb58(temp_v3);
              temp_v2 = 0;
              FUN_0029edfc(temp_v3,temp_v2);
              break;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
        }
        else {
          do {
            if (*(char *)(DAT_0043dcf0 + temp_v2 + 0x678) != '\0') {
              FUN_0029eb58(temp_v3,temp_v2);
              FUN_0029edfc(temp_v3,0);
              if (temp_v2 < 4) goto LAB_0028b938;
              break;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
          temp_v2 = 0;
          do {
            temp_v9 = ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v9 != 0) {
              if (*(short *)(DAT_0043dcf0 + (temp_v2 % 4 + (temp_v9 * 4 - 4)) * 8 + 0x73c) != 0) {
                FUN_0029eb58(temp_v3,temp_v2 % 4);
                temp_v2 = ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1;
                FUN_0029edfc(temp_v3,temp_v2);
                break;
              }
            }
            else if (*(char *)(temp_v2 % 4 + DAT_0043dcf0 + 0x678) != '\0') {
              FUN_0029eb58(temp_v3,temp_v2 % 4);
              temp_v2 = ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1;
              FUN_0029edfc(temp_v3,temp_v2);
              break;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x18);
        }
      }
    }
    else {
      temp_v3 = temp_v0 + 0xa08;
      temp_v7 = FUN_0029eba8();
      temp_v8 = FUN_0029f248(temp_v3);
      temp_v2 = 0;
      FUN_001a7c38(0,temp_v7,temp_v8,*(unsigned int *)(temp_v0 + 0x2c));
      if (temp_v2 == 0) {
        temp_v2 = 0;
        if (*(char *)(temp_v0 + 0x66c) == '\x04') {
          do {
            temp_v4 = ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1;
            temp_v9 = temp_v2 % 4 + *(int *)(temp_v0 + 0x2c) * 0xc;
            if (temp_v4 != 0) {
              if (*(short *)(DAT_0043dcf0 + (temp_v9 + (temp_v4 * 4 - 4)) * 8 + 0x73c) != 0) {
LAB_0028b774:
                temp_v9 = temp_v2 + *(int *)(temp_v0 + 0x2c) * 0xc;
                if (temp_v9 < 0xc) {
                  *(unsigned int *)(temp_v0 + 0x2c) = 0;
                  FUN_0029eb58(temp_v3,temp_v2 % 4);
                  FUN_0029edfc(temp_v3,((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1);
                }
                else {
                  temp_v9 = temp_v9 - 0xc;
                  *(unsigned int *)(temp_v0 + 0x2c) = 1;
                  FUN_0029eb58(temp_v3,temp_v9 % 4);
                  FUN_0029edfc(temp_v3,((int)(temp_v9 + ((unsigned int)(temp_v9 >> 0x1f) >> 0x1e)) >> 2) + 1);
                }
                if (temp_v2 < 0x18) goto LAB_0028b938;
                break;
              }
            }
            else if (*(char *)(temp_v9 + DAT_0043dcf0 + 0x678) != '\0') goto LAB_0028b774;
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x18);
          temp_v2 = 0;
          do {
            if (*(char *)(DAT_0043dcf0 + temp_v2 + 0x678) != '\0') {
              FUN_0029eb58(temp_v3);
              temp_v2 = 0;
              FUN_0029edfc(temp_v3,temp_v2);
              break;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
        }
        else {
          do {
            if (*(char *)(DAT_0043dcf0 + temp_v2 + 0x678) != '\0') {
              FUN_0029eb58(temp_v3,temp_v2);
              FUN_0029edfc(temp_v3,0);
              if (temp_v2 < 4) goto LAB_0028b938;
              break;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
          temp_v2 = DAT_0043dcf0;
          temp_v9 = 0;
          do {
            temp_v4 = ((int)(temp_v9 + ((unsigned int)(temp_v9 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v4 != 0) {
              if (*(short *)(DAT_0043dcf0 + ((temp_v4 * 4 - 4) + temp_v9 % 4) * 8 + 0x73c) == 0)
              goto LAB_0028b928;
LAB_0028b8d0:
              if (temp_v9 < 0xc) {
                if (*(int *)(temp_v0 + 0x2c) != 1) {
                  *(unsigned int *)(temp_v0 + 0x2c) = 0;
                }
                else {
                  *(unsigned int *)(DAT_0043dcf0 + 0x2c) = *(unsigned int *)(DAT_0043dcf0 + 0x2c) ^ 1;
                  FUN_002bdac0(temp_v2 + 0x180,5,0);
                  temp_v4 = 0;
                  do {
                    FUN_00293a30(*(unsigned int *)(temp_v2 + temp_v4 * 4 + 0x6c8),
                                 *(unsigned int *)(temp_v2 + 0x2c));
                    temp_v4 = temp_v4 + 1;
                  } while (temp_v4 < 4);
                  temp_v4 = 0;
                  do {
                    FUN_00293a30(*(unsigned int *)(temp_v2 + temp_v4 * 4 + 0x6d8),
                                 *(unsigned int *)(temp_v2 + 0x2c));
                    temp_v4 = temp_v4 + 1;
                  } while (temp_v4 < 0x18);
                }
                FUN_0029eb58(temp_v3,temp_v9 % 4);
                FUN_0029edfc(temp_v3,((int)(temp_v9 + ((unsigned int)(temp_v9 >> 0x1f) >> 0x1e)) >> 2) + 1);
                break;
              }
              if (*(int *)(temp_v0 + 0x2c) != 0) {
                *(unsigned int *)(temp_v0 + 0x2c) = 1;
              }
              else {
                *(unsigned int *)(DAT_0043dcf0 + 0x2c) = *(unsigned int *)(DAT_0043dcf0 + 0x2c) ^ 1;
                FUN_002bdac0(temp_v2 + 0x180,4,0);
                temp_v4 = 0;
                do {
                  FUN_00293a30(*(unsigned int *)(temp_v2 + temp_v4 * 4 + 0x6c8),
                               *(unsigned int *)(temp_v2 + 0x2c));
                  temp_v4 = temp_v4 + 1;
                } while (temp_v4 < 4);
                temp_v4 = 0;
                do {
                  FUN_00293a30(*(unsigned int *)(temp_v2 + temp_v4 * 4 + 0x6d8),
                               *(unsigned int *)(temp_v2 + 0x2c));
                  temp_v4 = temp_v4 + 1;
                } while (temp_v4 < 0x18);
              }
              temp_v9 = temp_v9 - 0xc;
              FUN_0029eb58(temp_v3,temp_v9 % 4);
              temp_v2 = ((int)(temp_v9 + ((unsigned int)(temp_v9 >> 0x1f) >> 0x1e)) >> 2) + 1;
              FUN_0029edfc(temp_v3,temp_v2);
              break;
            }
            if (*(char *)(DAT_0043dcf0 + temp_v9 % 4 + 0x678) != '\0') goto LAB_0028b8d0;
LAB_0028b928:
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < 0x18);
        }
      }
    }
  }
LAB_0028b938:
  FUN_0026cad4();
  if (*(int *)(temp_v0 + 0x1c) != 0x17) {
    return;
  }
  FUN_002935ec(*(unsigned int *)(temp_v0 + 0x20),1);
  return;
}
