/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00274fac` (_code @ 0x274fac, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int FUN_002671f4(int);
int FUN_0028c618(unsigned int, int);
int nodeSetTranslation(unsigned int, int, int *);
int FUN_002a5710(unsigned int);
int asdMdlManagerDestroy(void);

extern int *g_mapGimic; /* 0x447a48 */
extern signed char DAT_0049f93e; /* 0x49f93e */

/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: FUN_002671f4. */
extern int FUN_0027cda0(void);
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: FUN_002a5710. */
/* Supplied declaration required: asdMdlManagerDestroy. */


void FUN_00274fac(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if ((char)g_mapGimic[1] == '\0') {
    temp_v0 = 0;
    do {
      piVar2 = g_mapGimic;
      if ((char)g_mapGimic[temp_v0 * 10 + 7] != '\0') {
        puVar3 = (unsigned int *)g_mapGimic[temp_v0 * 10 + 0xd];
        temp_v1 = *puVar3;
        if (DAT_0049f93e != '\0') {
          if ((temp_v1 & 2) == 0) {
            *puVar3 = temp_v1 | 2;
            *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
          }
        }
        else {
          if ((temp_v1 & 2) != 0) {
            *puVar3 = temp_v1 & 0xfffffffd;
            *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 1;
          }
          if (*(char *)((int)piVar2 + temp_v0 * 0x28 + 0x1d) != '\0') {
            nodeSetTranslation(*(unsigned int *)(piVar2[temp_v0 * 10 + 0xd] + 8),0,piVar2 + temp_v0 * 10 + 8);
            FUN_0028c618(*(unsigned int *)(piVar2[temp_v0 * 10 + 0xd] + 8),0);
            if (*(int *)(*(int *)(piVar2[temp_v0 * 10 + 0xd] + 8) + 0x38) !=
                (int)(short)piVar2[temp_v0 * 10 + 0xc]) {
              FUN_002a5710(*(unsigned int *)(piVar2[temp_v0 * 10 + 0xd] + 8));
            }
            *(unsigned char *)((int)piVar2 + temp_v0 * 0x28 + 0x1d) = 0;
          }
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x18);
    return;
  }
  temp_v0 = *g_mapGimic;
  if (temp_v0 == 0) {
    temp_v0 = 0x17;
    do {
      if (g_mapGimic[temp_v0 * 10 + 0xd] != 0) {
        asdMdlManagerMarkDestroy();
      }
      temp_v0 = temp_v0 - 1;
      piVar2 = g_mapGimic;
    } while (-1 < temp_v0);
  }
  else {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        return;
      }
      temp_v0 = FUN_0027cda0();
      if (temp_v0 == 0) {
        return;
      }
      temp_v0 = 0;
      do {
        if (((char)g_mapGimic[temp_v0 * 10 + 7] != '\0') &&
           (*(short *)((int)g_mapGimic + temp_v0 * 0x28 + 0x32) == 0xc)) {
          FUN_002671f4((int)(short)g_mapGimic[temp_v0 * 10 + 0xe]);
        }
        piVar2 = g_mapGimic;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x18);
      *(unsigned char *)(g_mapGimic + 1) = 0;
      *piVar2 = 0;
      return;
    }
    temp_v0 = 0x17;
    do {
      if (g_mapGimic[temp_v0 * 10 + 0xd] != 0) {
        asdMdlManagerDestroy();
        g_mapGimic[temp_v0 * 10 + 0xd] = 0;
      }
      piVar2 = g_mapGimic;
      temp_v0 = temp_v0 - 1;
    } while (-1 < temp_v0);
    temp_v2 = 0;
    temp_v0 = 0;
    do {
      temp_v3 = temp_v2 + 1;
      temp_v0 = temp_v0 + 2;
      *(unsigned char *)(piVar2 + temp_v2 * 10 + 7) = 0;
      temp_v2 = temp_v2 + 2;
      *(unsigned char *)(piVar2 + temp_v3 * 10 + 7) = 0;
    } while (temp_v0 < 0x18);
  }
  *piVar2 = *piVar2 + 1;
  return;
}

} /* extern "C" */
