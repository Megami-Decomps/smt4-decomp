/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fff68` (_code @ 0x1fff68, 0x48c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019dfbc(unsigned int);
extern int FUN_00210f94(void);
/* Supplied declaration required: FUN_00254840. */
/* Supplied declaration required: FUN_0025485c. */
/* Supplied declaration required: FUN_0025487c. */
extern int FUN_002597cc(unsigned int);
extern int FUN_002597f4(void);
/* Supplied declaration required: FUN_00259818. */
/* Supplied declaration required: FUN_002599bc. */
/* Supplied declaration required: FUN_002599f8. */
/* Supplied declaration required: FUN_00263194. */
/* Supplied declaration required: FUN_0026e85c. */
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
extern int FUN_00297674(void);
extern int FUN_0029ee4c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a89e4. */
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bd4a4. */
/* Supplied declaration required: FUN_002c3b44. */
/* Supplied declaration required: FUN_002d678c. */
extern int FUN_002e1a88(void);
/* Supplied declaration required: FUN_002f5b58. */


unsigned int FUN_001fff68(int *param_1,int param_2)

{
/* irregular: 14 unstructured edge(s); 17 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v4 = *param_1;
  if (*(char *)(temp_v4 + 0x3d) == '\0') {
    temp_v3 = *(int *)(temp_v4 + 8);
    if (temp_v3 != 0) {
      param_2 = *(int *)(temp_v4 + 0xc);
    }
    if (temp_v3 != 0 && param_2 != 0) {
      FUN_002972f8();
      *(int *)(temp_v4 + 4) = temp_v3;
      *(unsigned int *)(temp_v3 + 0x108) = 2;
      *(unsigned char *)(temp_v4 + 0x3d) = 1;
    }
    if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
       (temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
      *(unsigned char *)(temp_v4 + 0x40) = 1;
    }
    return 0;
  }
  if (*(char *)(temp_v4 + 0x40) != '\0') {
    if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
       (temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
      *(unsigned char *)(temp_v4 + 0x40) = 1;
    }
    return 0;
  }
  if (*(char *)(temp_v4 + 0x3e) != '\0') {
    temp_v3 = FUN_00210f94();
    if (temp_v3 != 0) {
      FUN_002f5b58();
      *(unsigned char *)(temp_v4 + 0x40) = 1;
      return 0;
    }
    return 0;
  }
  if ((*(unsigned char *)(temp_v4 + 0x3c) & 1) != 0) {
    temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4));
    if (temp_v3 == 2) {
      temp_v3 = *(int *)(temp_v4 + 0x38);
      if (temp_v3 != 0) {
        if (temp_v3 == 6 || temp_v3 == 8) {
          FUN_002599f8();
          temp_v1 = FUN_0025487c();
          FUN_002bd4a4(temp_v1,0,0);
          FUN_0025487c();
          FUN_002599bc();
          temp_v3 = FUN_0025487c();
          FUN_002c3b44(temp_v3 + 0x38,0x14);
          FUN_0025487c();
          FUN_00259818();
          FUN_002899c4(0x550,1);
          *(unsigned int *)(temp_v4 + 0x38) = 7;
          *(unsigned char *)(temp_v4 + 0x3c) = (*(unsigned char *)(temp_v4 + 0x3c) & 0xfe) | 2;
          if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
             (temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
            *(unsigned char *)(temp_v4 + 0x40) = 1;
          }
          return 0;
        }
        if (temp_v3 != 9) {
          if (temp_v3 == 7) {
            FUN_002d678c(1);
            *(unsigned char *)(temp_v4 + 0x3e) = 1;
            *(unsigned char *)(temp_v4 + 0x3c) = 0;
            if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
               (temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
              *(unsigned char *)(temp_v4 + 0x40) = 1;
            }
            return 0;
          }
          *(unsigned char *)(temp_v4 + 0x40) = 1;
        }
        else {
          temp_v3 = FUN_00297674();
          if (temp_v3 != 0) {
            if (temp_v3 == 1) {
              *(unsigned char *)(temp_v4 + 0x40) = 1;
            }
            if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
               (temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
              *(unsigned char *)(temp_v4 + 0x40) = 1;
            }
            return 0;
          }
          FUN_0025485c();
          FUN_00254840(0);
          FUN_002971e4(*(unsigned int *)(temp_v4 + 4),9);
          temp_v3 = FUN_002a8a08();
          temp_v5 = 0;
          do {
            if (-1 < *(char *)(temp_v3 + temp_v5 + 0x90f0)) {
              temp_v1 = FUN_002a89e4();
              temp_v2 = FUN_0029ee4c(temp_v1,2);
              if (temp_v2 != 0) {
                temp_v1 = FUN_002a89e4((int)*(char *)(temp_v3 + temp_v5 + 0x90f0));
                FUN_00263194(temp_v1,4);
              }
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 0x18);
          *(unsigned char *)(temp_v4 + 0x3f) = 1;
        }
        *(unsigned char *)(temp_v4 + 0x3c) = 0;
        if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
           (temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
          *(unsigned char *)(temp_v4 + 0x40) = 1;
        }
        return 0;
      }
      temp_v3 = FUN_00297674();
      if (temp_v3 == 0) {
        FUN_002b8b78(0x3c);
        temp_v3 = FUN_002e1a88();
        temp_v6 = temp_v3 == 3;
        if (temp_v6) {
          temp_v3 = 3;
        }
        *(unsigned char *)(temp_v4 + 0x3c) = (*(unsigned char *)(temp_v4 + 0x3c) & 0xfe) | 2;
        if (!temp_v6) {
          if (temp_v3 != 0x81) {
            if (temp_v3 == 0x11) {
              *(unsigned int *)(temp_v4 + 0x38) = 4;
              FUN_0025485c();
              if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
                 (temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
                *(unsigned char *)(temp_v4 + 0x40) = 1;
              }
              return 0;
            }
            FUN_002599f8();
            temp_v1 = FUN_0025487c();
            FUN_002bd4a4(temp_v1,0,0);
            FUN_0025487c();
            temp_v3 = FUN_002599bc();
            if (temp_v3 == 5) {
              *(unsigned int *)(temp_v4 + 0x38) = 1;
            }
            else if (temp_v3 == 9) {
              *(unsigned int *)(temp_v4 + 0x38) = 2;
            }
            else if (*(int *)(temp_v4 + 0x38) != 2 && *(int *)(temp_v4 + 0x38) != 1) {
              FUN_0026e85c(0x20,1);
              temp_v3 = 6;
              *(int *)(temp_v4 + 0x38) = temp_v3;
              if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
                 (temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
                *(unsigned char *)(temp_v4 + 0x40) = 1;
              }
              return 0;
            }
            FUN_0025485c();
            FUN_00254840(0);
            temp_v3 = FUN_002a8a08();
            temp_v5 = 0;
            do {
              if (-1 < *(char *)(temp_v3 + temp_v5 + 0x90f0)) {
                temp_v1 = FUN_002a89e4();
                temp_v2 = FUN_0029ee4c(temp_v1,2);
                if (temp_v2 != 0) {
                  temp_v1 = FUN_002a89e4((int)*(char *)(temp_v3 + temp_v5 + 0x90f0));
                  FUN_00263194(temp_v1,4);
                }
              }
              temp_v5 = temp_v5 + 1;
              if (temp_v5 >= 0x18) {
                if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
                   (temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
                  *(unsigned char *)(temp_v4 + 0x40) = 1;
                }
                return 0;
              }
            } while( 1 );
          }
          temp_v3 = FUN_002597cc(0x20);
          if (temp_v3 != 0) {
            temp_v3 = 5;
          }
          else {
            FUN_0026e85c(0x20,1);
            temp_v3 = 8;
          }
        }
        *(int *)(temp_v4 + 0x38) = temp_v3;
        if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
           (temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
          *(unsigned char *)(temp_v4 + 0x40) = 1;
        }
        return 0;
      }
      if (temp_v3 == 1) {
        FUN_002b8b78(0x3c);
        temp_v3 = FUN_002597f4();
        if ((temp_v3 != 0) && (temp_v3 = FUN_002597cc(0x20), temp_v3 != 0)) {
          *(unsigned int *)(temp_v4 + 0x38) = 9;
          temp_v0 = (*(unsigned char *)(temp_v4 + 0x3c) & 0xfe) | 2;
          *(unsigned char *)(temp_v4 + 0x3c) = temp_v0;
        }
        else {
          temp_v3 = FUN_002597f4();
          if (temp_v3 == 0) {
            temp_v1 = 8;
          }
          else {
            temp_v1 = 0xc;
          }
          FUN_002971e4(*(unsigned int *)(temp_v4 + 4),temp_v1);
          *(unsigned char *)(temp_v4 + 0x3f) = 1;
          *(unsigned char *)(temp_v4 + 0x3c) = 0;
        }
      }
    }
  }
  else if ((*(unsigned char *)(temp_v4 + 0x3c) & 2) != 0) {
    FUN_002971e4(*(unsigned int *)(temp_v4 + 4),
                 *(unsigned int *)(temp_v4 + *(int *)(temp_v4 + 0x38) * 4 + 0x10));
    temp_v0 = (*(unsigned char *)(temp_v4 + 0x3c) & 0xfd) | 1;
    *(unsigned char *)(temp_v4 + 0x3c) = temp_v0;
  }
  if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
     (temp_v3 = FUN_0019dfbc(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
    *(unsigned char *)(temp_v4 + 0x40) = 1;
  }
  return 0;
}
