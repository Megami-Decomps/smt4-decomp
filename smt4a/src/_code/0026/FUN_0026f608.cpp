/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f608` (_code @ 0x26f608, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int FUN_00184310(...);
int sysMemClear(...);
int rt_memclr(...);
int FUN_0032fea0(...);
int FUN_003c3f1c(...);
int FUN_004daf18(...);

extern int FUN_002b2ca8(...); /* 0x2b2ca8 */
extern int *g_unite; /* 0x57f290 */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_00229210(int);
extern int FUN_0026140c(void);
extern unsigned long long FUN_0026264c(unsigned short);
extern unsigned long long FUN_002a4b28(unsigned short);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: FUN_0032fea0. */
/* Supplied declaration required: FUN_003c3f1c. */
extern int FUN_004da77c(int, unsigned short);
/* Supplied declaration required: FUN_004daf18. */


void FUN_0026f608(void)

{
/* irregular: 8 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar8;
  int temp_v5;
  int temp_v6;
  unsigned long long temp_v7;
  
  piVar1 = g_unite;
  temp_v0 = FUN_0026140c();
  sysMemClear(piVar1 + 0x175,0x962);
  temp_v1 = (int)piVar1 + 0xf36;
  rt_memclr(temp_v1,0x82);
  sysMemClear(piVar1 + 0x3ee,0x3ea);
  temp_v6 = 0;
  temp_v5 = 0;
  puVar8 = (unsigned short *)0x0;
  do {
    temp_v2 = *piVar1;
    FUN_004daf18(temp_v2,puVar8);
    if (temp_v2 != 0) {
      puVar5 = puVar8;
      FUN_00184310();
      temp_v7 = FUN_002a4b28(*puVar5);
      temp_v4 = (unsigned int)((unsigned long long)temp_v7 >> 0x20);
      if (((int)temp_v7 != 0) ||
         (temp_v7 = FUN_0026264c(*puVar5), temp_v4 = (unsigned int)((unsigned long long)temp_v7 >> 0x20),
         (int)temp_v7 != 0)) {
        temp_v3 = (unsigned int)*(short *)(temp_v0 + 0x28);
        if (temp_v3 != 0) {
          temp_v4 = (unsigned int)*(unsigned char *)(puVar5 + 1);
        }
        if ((temp_v3 == 0 || temp_v3 == temp_v4) &&
           ((*(char *)(temp_v0 + 0x43) == '\0' ||
            (temp_v2 = FUN_004da77c(*piVar1,puVar5[3]), temp_v2 != 0)))) {
          temp_v2 = temp_v6 * 2;
          temp_v6 = temp_v6 + 1;
          *(unsigned short *)((int)piVar1 + temp_v2 + 0x5d4) = *puVar5;
        }
      }
      temp_v2 = temp_v1;
      FUN_0032fea0(temp_v1,temp_v5,*(unsigned char *)(puVar5 + 1));
      if (temp_v2 == 0) {
        temp_v2 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)((int)piVar1 + temp_v2 + 0xf36) = (unsigned short)*(unsigned char *)(puVar5 + 1);
      }
    }
    puVar8 = (unsigned short *)(((int)puVar8 + 1U) & 0xffff);
  } while (puVar8 < (unsigned short *)0x4b1);
  qsort(piVar1 + 0x175,temp_v6,2,FUN_002b2ca8);
  temp_v1 = 0;
  temp_v4 = 0;
  do {
    temp_v3 = temp_v4;
    FUN_003c3f1c();
    if (((temp_v3 != 0) && ((*(unsigned char *)(temp_v3 + 3) & 0x20) != 0)) &&
       ((*(char *)(temp_v0 + 0x35) < 0 ||
        (*(unsigned int *)(*(char *)(temp_v0 + 0x35) * 4 + 0x52f210) == (unsigned int)*(unsigned char *)(temp_v3 + 2))))) {
      temp_v2 = FUN_00229210((int)(short)temp_v4);
      if (temp_v2 != 0) {
        temp_v2 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)((int)piVar1 + temp_v2 + 0xfb8) = (short)temp_v4;
      }
    }
    temp_v4 = (temp_v4 + 1) & 0xffff;
  } while (temp_v4 < 0x1f5);
  piVar1[0x4e9] = temp_v6;
  piVar1[0x4ea] = temp_v5;
  piVar1[0x4eb] = temp_v1;
  return;
}

} /* extern "C" */
