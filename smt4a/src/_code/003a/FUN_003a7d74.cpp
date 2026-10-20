/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7d74` (_code @ 0x3a7d74, 0x514 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagSetValue(...);

int FUN_00180118(...);
int gameFlagIsSet(...);
int __aeabi_memset4(...);
int FUN_00237898(...);
int scrWorkGetValue(...);
int scrWorkSetValue(...);
int libc_strcpy(...);
int FUN_003180c4(...);
int FUN_0034a240(int);
int FUN_0035dd74(void);
int FUN_003b7348(...);
int dataTable5Type9Count(void);
int FUN_004da858(...);
int FUN_004db450(int, int *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern int *g_unite; /* 0x57f290 */

extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: FUN_00237898. */
extern int FUN_0026140c(void);
/* Supplied declaration required: scrWorkGetValue. */
/* Supplied declaration required: scrWorkSetValue. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_003180c4. */
extern int FUN_00330bb4(unsigned short);
/* Supplied declaration required: FUN_0034a240. */
/* Supplied declaration required: FUN_0035dd74. */
/* Supplied declaration required: FUN_003b7348. */
/* Supplied declaration required: dataTable5Type9Count. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_004da858. */
extern int FUN_004db07c(int, unsigned short, unsigned int *);
/* Supplied declaration required: FUN_004db450. */


unsigned int FUN_003a7d74(void)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int *piVar3;
  char temp_v2;
  int temp_v3;
  unsigned short *puVar6;
  unsigned char *pbVar7;
  unsigned short *puVar8;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar13;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int unaff_r11;
  unsigned int temp_v10 [33];
  
  piVar3 = g_unite;
  temp_v3 = g_unite[0x246c];
  if (temp_v3 == 10) {
    temp_v3 = gameFlagIsSet(0x52b);
    if (temp_v3 != 0) {
      piVar3[0x241b] = 0;
      __aeabi_memset4(piVar3 + 0x2407,0x50,0xffffffff);
      temp_v6 = *piVar3;
      FUN_004db450(temp_v6,piVar3 + 0x23df);
      temp_v9 = 0;
      *(short *)(piVar3 + 0x23de) = (short)temp_v6;
      temp_v3 = 0;
      if (0 < temp_v6) {
        do {
          temp_v4 = (unsigned int)*(unsigned short *)((int)piVar3 + temp_v9 * 2 + 0x8f7c);
          FUN_0035dd74();
          temp_v6 = temp_v3;
          if (((temp_v4 != 0) &&
              (temp_v7 = FUN_00330bb4(*(unsigned short *)((int)piVar3 + temp_v9 * 2 + 0x8f7c)),
              temp_v7 == 0)) &&
             (temp_v7 = FUN_004db07c(*piVar3,*(unsigned short *)((int)piVar3 + temp_v9 * 2 + 0x8f7c),
                                    temp_v10), temp_v7 != 0)) {
            temp_v6 = temp_v3 + 1;
            *(char *)((int)piVar3 + temp_v3 + 0x901c) =
                 (char)*(unsigned short *)((int)piVar3 + temp_v9 * 2 + 0x8f7c);
            FUN_0034a240(*(unsigned short *)((int)piVar3 + temp_v9 * 2 + 0x8f7c));
          }
          temp_v9 = temp_v9 + 1;
          temp_v3 = temp_v6;
        } while (temp_v9 < (int)(unsigned int)*(unsigned short *)(piVar3 + 0x23de));
        if (0 < temp_v6) {
          temp_v3 = piVar3[0x246c] + 1;
          piVar3[0x246c] = temp_v3;
          return 0;
        }
      }
    }
    piVar3[0x246c] = 100;
    return 0;
  }
  if (temp_v3 >= 10) {
    if (temp_v3 != 0xb) {
      if (temp_v3 == 0xc) {
        temp_v4 = (int)*(char *)((int)g_unite + g_unite[0x241b] + 0x901c) & 0xffff;
        FUN_0035dd74();
        temp_v8 = (unsigned int)*(unsigned short *)(temp_v4 + 0x1a);
        FUN_00180118(temp_v8);
        libc_strcpy(temp_v10,temp_v8);
        FUN_003180c4(8,temp_v10);
        temp_v5 = FUN_0014bf3c(*(unsigned short *)(temp_v4 + 0x1a),0);
        libc_strcpy(temp_v10,temp_v5);
        FUN_003180c4(0x10,temp_v10);
        piVar3[0x246c] = piVar3[0x246c] + 1;
        return 0;
      }
      if (temp_v3 != 0xd) {
        if (temp_v3 == 100) {
          *(unsigned char *)(g_unite + 0x246b) = 0;
          return 1;
        }
        return 0;
      }
      temp_v5 = scrWorkGetValue(1);
      temp_v10[0] = 0;
      temp_v3 = piVar3[0x109];
      FUN_00237898(temp_v3,4,temp_v5,7);
      temp_v6 = scrWorkGetValue(1);
      scrWorkSetValue(1,temp_v6 + 1);
      if (temp_v3 != 1) {
        return 0;
      }
      scrWorkSetValue(1,0);
      temp_v3 = piVar3[0x241b];
      temp_v6 = temp_v3 + 1;
      piVar3[0x241b] = temp_v6;
      if ((temp_v6 >= 0x50) || (*(char *)((int)piVar3 + temp_v3 + 0x901d) < '\0')) {
        piVar3[0x246c] = 100;
        return 0;
      }
      temp_v3 = 0xc;
    }
    else {
      temp_v5 = scrWorkGetValue(1);
      temp_v10[0] = 0;
      temp_v3 = piVar3[0x109];
      FUN_00237898(temp_v3,3,temp_v5,5);
      temp_v6 = scrWorkGetValue(1);
      scrWorkSetValue(1,temp_v6 + 1);
      if (temp_v3 != 1) {
        return 0;
      }
      scrWorkSetValue(1,0);
      temp_v3 = piVar3[0x246c] + 1;
    }
    piVar3[0x246c] = temp_v3;
    return 0;
  }
  piVar13 = g_unite + 0x246d;
  if (temp_v3 != 0) {
    if (temp_v3 != 1) {
      if (temp_v3 != 2) {
        if (temp_v3 != 3) {
          return 0;
        }
        temp_v5 = scrWorkGetValue(1);
        temp_v10[0] = 0;
        temp_v3 = piVar3[0x109];
        FUN_00237898(temp_v3,2,temp_v5,7);
        temp_v6 = scrWorkGetValue(1);
        scrWorkSetValue(1,temp_v6 + 1);
        if (temp_v3 != 1) {
          return 0;
        }
        scrWorkSetValue(1,0);
        temp_v2 = (char)piVar3[0x2481] + '\x01';
        *(char *)(piVar3 + 0x2481) = temp_v2;
        if ((temp_v2 < 0x50) && (-1 < *(char *)((int)piVar3 + temp_v2 + 0x91b4))) {
          temp_v3 = 2;
          piVar3[0x246c] = temp_v3;
          return 0;
        }
        piVar3[0x246c] = 10;
        return 0;
      }
      puVar8 = (unsigned short *)
               FUN_003b7348((short)*(char *)((int)(char)g_unite[0x2481] + (int)piVar13));
      temp_v4 = (unsigned int)*puVar8;
      FUN_00180118(temp_v4);
      libc_strcpy(temp_v10,temp_v4);
      FUN_003180c4(8,temp_v10);
      temp_v5 = FUN_0014bf3c(*puVar8,0);
      libc_strcpy(temp_v10,temp_v5);
      FUN_003180c4(0x10,temp_v10);
    }
    else {
      temp_v5 = scrWorkGetValue(1);
      temp_v10[0] = 0;
      temp_v3 = piVar3[0x109];
      FUN_00237898(temp_v3,1,temp_v5,5);
      temp_v6 = scrWorkGetValue(1);
      scrWorkSetValue(1,temp_v6 + 1);
      if (temp_v3 != 1) {
        return 0;
      }
      scrWorkSetValue(1,0);
    }
    piVar3[0x246c] = piVar3[0x246c] + 1;
    return 0;
  }
  *(unsigned char *)(g_unite + 0x246b) = 1;
  *(unsigned char *)(piVar3 + 0x2481) = 0;
  __aeabi_memset4(piVar13,0x50,0xffffffff);
  temp_v3 = 0;
  temp_v4 = gameFlagIsSet(0x52b);
  if (temp_v4 != 0) {
    dataTable5Type9Count();
    if (temp_v4 != 0) {
      unaff_r11 = 0x45a;
    }
    temp_v8 = 0;
    if (temp_v4 != 0) {
      do {
        puVar6 = (unsigned short *)FUN_003b7348(temp_v8 & 0xffff);
        if (puVar6 != (unsigned short *)0x0) {
          temp_v6 = *piVar3;
          FUN_004da858(temp_v6,*puVar6);
          if (temp_v6 != 0) {
            temp_v6 = FUN_0026140c();
            pbVar7 = (unsigned char *)(temp_v6 + ((int)(temp_v8 + ((unsigned int)((int)temp_v8 >> 0x1f) >> 0x1d)) >> 3)
                             + 0x39);
            temp_v1 = *pbVar7;
            temp_v0 = 1 << (((int)temp_v8 % 8) & 0xffU);
            if ((temp_v1 & temp_v0) == 0) {
              *pbVar7 = temp_v1 | (unsigned char)temp_v0;
              *(char *)((int)piVar3 + temp_v3 + 0x91b4) = (char)temp_v8;
              temp_v3 = temp_v3 + 1;
              gameFlagSetValue(unaff_r11,1);
            }
          }
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < temp_v4);
      if (0 < temp_v3) {
        piVar3[0x246c] = piVar3[0x246c] + 1;
        return 0;
      }
    }
  }
  piVar3[0x246c] = 10;
  return 0;
}

} /* extern "C" */
