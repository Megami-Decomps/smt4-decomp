/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a078` (_code @ 0x37a078, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002237a0(void);
int FUN_002242a0(void);
int FUN_002332f4(void);
int FUN_00234b30(void);
int FUN_0023534c(void);
int FUN_0023a52c(void);
int FUN_00243ea0(void);
int mapEplUpdateEntries(void);
int FUN_00249dec(void);
int FUN_0024aeb0(void);
int FUN_002737a8(void);
int FUN_0027461c(void);
int FUN_00274e4c(void);
int FUN_00275558(void);
int FUN_00292b84(void);
int FUN_00296530(void);
int FUN_00297c3c(void);
int FUN_002b7490(void);
int FUN_002d26a4(unsigned int);
int FUN_002d8cec(void);
int FUN_003254a0(void);
int gameStateSelectKind(void);
int FUN_00395904(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_mapMain; /* 0x581274 */

/* Supplied declaration required: FUN_002237a0. */
/* Supplied declaration required: FUN_002242a0. */
/* Supplied declaration required: FUN_002332f4. */
/* Supplied declaration required: FUN_00234b30. */
/* Supplied declaration required: FUN_0023534c. */
/* Supplied declaration required: FUN_0023a52c. */
/* Supplied declaration required: FUN_00243ea0. */
/* Supplied declaration required: mapEplUpdateEntries. */
extern unsigned char FUN_00246bd4(void);
/* Supplied declaration required: FUN_00249dec. */
/* Supplied declaration required: FUN_0024aeb0. */
/* Supplied declaration required: FUN_002737a8. */
/* Supplied declaration required: FUN_0027461c. */
/* Supplied declaration required: FUN_00274e4c. */
/* Supplied declaration required: FUN_00275558. */
/* Supplied declaration required: FUN_00292b84. */
/* Supplied declaration required: FUN_00296530. */
/* Supplied declaration required: FUN_00297c3c. */
/* Supplied declaration required: FUN_002b7490. */
/* Supplied declaration required: FUN_002d26a4. */
/* Supplied declaration required: FUN_002d8cec. */
/* Supplied declaration required: FUN_003254a0. */
extern unsigned int uiSelectionRefresh(void);
/* Supplied declaration required: gameStateSelectKind. */
/* Supplied declaration required: FUN_00395904. */


void FUN_0037a078(void)

{
/* irregular: 23 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = g_mapMain;
  mapEplUpdateEntries();
  temp_v2 = uiSelectionRefresh();
  FUN_002d26a4(temp_v2);
  FUN_00395904();
  temp_v1 = FUN_00246bd4();
  FUN_00249dec();
  *(unsigned char *)(temp_v0 + 0xbc) = temp_v1;
  FUN_002332f4();
  FUN_002242a0();
  FUN_002237a0();
  FUN_00274e4c();
  FUN_00234b30();
  FUN_0023534c();
  FUN_002737a8();
  FUN_00292b84();
  FUN_00296530();
  FUN_002b7490();
  FUN_00243ea0();
  FUN_00297c3c();
  FUN_0027461c();
  FUN_0024aeb0();
  FUN_002d8cec();
  FUN_0023a52c();
  FUN_003254a0();
  gameStateSelectKind();
  FUN_00275558();
  return;
}

} /* extern "C" */
