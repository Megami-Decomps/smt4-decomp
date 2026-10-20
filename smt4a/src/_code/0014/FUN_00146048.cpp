/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146048` (_code @ 0x146048, 0x2bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00144ab4(int);
int FUN_00145e24(...);
int FUN_00156974(...);
int FUN_00156bfc(unsigned int, int);
int FUN_00157008(unsigned int);
int FUN_00157050(int, int);
int FUN_00157268(unsigned char [184]);
int FUN_001573a4(...);
int FUN_00157520(unsigned char [184]);
int FUN_00157558(int);
int FUN_001575cc(int);
int FUN_00157b7c(unsigned int);
int FUN_00157be4(unsigned int);
int FUN_00157c3c(unsigned int, unsigned int);
int FUN_00158124(void);
int FUN_001582a8(unsigned int, unsigned int);
int FUN_0016bad8(unsigned char [184]);
int FUN_0016d304(unsigned int);
int FUN_0017d158(unsigned int);
int FUN_0017dd80(void);

extern int DAT_0056fcb8; /* 0x56fcb8 */
extern int DAT_0056fcbc; /* 0x56fcbc */
extern int g_handleRegistry; /* 0x56fcc0 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00144ab4. */
/* Supplied declaration required: FUN_00145e24. */
extern unsigned int FUN_00152f54(void);
/* Supplied declaration required: FUN_00156974. */
extern int FUN_00156bec(unsigned int);
/* Supplied declaration required: FUN_00156bfc. */
/* Supplied declaration required: FUN_00157008. */
/* Supplied declaration required: FUN_00157050. */
/* Supplied declaration required: FUN_00157268. */
/* Supplied declaration required: FUN_001573a4. */
/* Supplied declaration required: FUN_00157520. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001575cc. */
/* Supplied declaration required: FUN_00157b7c. */
/* Supplied declaration required: FUN_00157be4. */
/* Supplied declaration required: FUN_00157c3c. */
extern int FUN_00157e98(unsigned int, int);
/* Supplied declaration required: FUN_00158124. */
/* Supplied declaration required: FUN_001582a8. */
extern int FUN_001582c0(void);
/* Supplied declaration required: FUN_0016bad8. */
/* Supplied declaration required: FUN_0016d304. */
/* Supplied declaration required: FUN_0017d158. */
/* Supplied declaration required: FUN_0017dd80. */


unsigned int FUN_00146048(void)

{
/* irregular: 20 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned char temp_v4 [184];
  
  FUN_0017d158(*(unsigned int *)(g_handleRegistry + 0x10));
  temp_v1 = g_handleRegistry;
  temp_v2 = g_handleRegistry;
  FUN_00158124();
  if (temp_v2 != 0) {
    temp_v2 = *(int *)(temp_v1 + 4);
    temp_v3 = *(unsigned int *)(temp_v1 + 0x14);
    if ((DAT_0056fcb8 != 0) &&
       (!((*(unsigned int *)(DAT_0056fcb8 + 4) & 1) == 0 || (*(unsigned int *)(DAT_0056fcb8 + 4) & 2) == 0))) {
      temp_v1 = DAT_0056fcb8 + 0x10;
    }
    else {
      temp_v1 = *(int *)(temp_v1 + 0xc);
    }
    FUN_00157050(temp_v2,temp_v1);
    FUN_00156bfc(temp_v3,temp_v2 + 0x10);
  }
  temp_v1 = g_handleRegistry;
  temp_v2 = g_handleRegistry;
  FUN_00158124();
  if ((temp_v2 != 0) && (temp_v2 = FUN_00156bec(*(unsigned int *)(temp_v1 + 0x14)), temp_v2 != 0)) {
    FUN_00157c3c(*(unsigned int *)(temp_v1 + 0x10),*(unsigned int *)(temp_v1 + 0x14));
    if ((*(char *)(*(int *)(temp_v1 + 0x14) + 0xc4) != '\0') &&
       (temp_v2 = *(int *)(*(int *)(temp_v1 + 0x10) + 0xac), temp_v2 != 0)) {
      if ((DAT_0056fcb8 != 0) &&
         (!((*(unsigned int *)(DAT_0056fcb8 + 4) & 1) == 0 || (*(unsigned int *)(DAT_0056fcb8 + 4) & 2) == 0))) {
        temp_v0 = DAT_0056fcb8 + 0x10;
      }
      else {
        temp_v0 = *(int *)(temp_v1 + 0xc);
      }
      FUN_001573a4(temp_v4,temp_v2,*(unsigned int *)(temp_v1 + 4),temp_v0 + 0x38);
      FUN_0016bad8(temp_v4);
      FUN_00157520(temp_v4);
    }
    FUN_00157be4(*(unsigned int *)(temp_v1 + 0x10));
  }
  temp_v1 = g_handleRegistry;
  temp_v2 = g_handleRegistry;
  FUN_00158124();
  if (temp_v2 != 0) {
    FUN_0016d304(*(unsigned int *)(temp_v1 + 0x10));
    if ((DAT_0056fcb8 != 0) &&
       (!((*(unsigned int *)(DAT_0056fcb8 + 4) & 1) == 0 || (*(unsigned int *)(DAT_0056fcb8 + 4) & 2) == 0))) {
      temp_v1 = DAT_0056fcb8 + 0x10;
    }
    else {
      temp_v1 = *(int *)(g_handleRegistry + 0xc);
    }
    FUN_001573a4(temp_v4,*(unsigned int *)(*(int *)(g_handleRegistry + 0x10) + 0xa8),
                 *(unsigned int *)(g_handleRegistry + 4),temp_v1 + 0x38);
    FUN_00157268(temp_v4);
    FUN_00157520(temp_v4);
    temp_v1 = g_handleRegistry;
    if ((*(int *)(g_handleRegistry + 0x3c) != 0) && (temp_v2 = FUN_001582c0(), temp_v2 != 0)) {
      FUN_001582a8(*(unsigned int *)(temp_v1 + 0x3c),**(unsigned int **)(DAT_0056fcbc + 0xa8));
    }
    temp_v1 = g_handleRegistry;
    FUN_00157b7c(*(unsigned int *)(g_handleRegistry + 0x10));
    FUN_00157008(*(unsigned int *)(temp_v1 + 4));
  }
  FUN_00144ab4(0);
  *(unsigned int *)(g_renderCtx + 0x52c) = 0;
  FUN_0017dd80();
  FUN_001575cc(g_renderCtx);
  FUN_00157558(g_renderCtx);
  temp_v1 = g_handleRegistry;
  temp_v2 = g_handleRegistry;
  FUN_00158124();
  if (temp_v2 != 0) {
    if ((DAT_0056fcb8 != 0) &&
       (!((*(unsigned int *)(DAT_0056fcb8 + 4) & 1) == 0 || (*(unsigned int *)(DAT_0056fcb8 + 4) & 2) == 0))) {
      temp_v2 = DAT_0056fcb8 + 0x10;
    }
    else {
      temp_v2 = *(int *)(temp_v1 + 0xc);
    }
    temp_v1 = FUN_00157e98(*(unsigned int *)(temp_v1 + 0x10),temp_v2);
    if (temp_v1 == 0) {
      FUN_001575cc(g_renderCtx);
    }
  }
  else {
    FUN_001575cc(g_renderCtx);
  }
  temp_v3 = FUN_00152f54();
  FUN_00145e24(g_renderCtx,temp_v3);
  puVar6 = *(unsigned int **)(g_handleRegistry + 0x1c);
  for (puVar4 = *(unsigned int **)(g_handleRegistry + 0x18); puVar4 != puVar6; puVar4 = puVar4 + 1) {
    FUN_00156974(*puVar4);
  }
  return 0;
}

} /* extern "C" */
