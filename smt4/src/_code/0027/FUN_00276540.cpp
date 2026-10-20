/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276540` (_code @ 0x276540, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019dc04(void);
int FUN_0019dd38(void);
int FUN_001a8cf8(void);
int mapEplUpdateEntries(void);
int FUN_001b4b54(void);
int FUN_001d350c(void);
int FUN_001d36cc(void);
int FUN_00208cbc(void);
int FUN_0020d91c(void);
int FUN_0027052c(void);
int FUN_00273f90(void);
int FUN_00273fc0(void);
int FUN_00274798(void);
int FUN_00274fac(void);
int FUN_0027522c(void);
int FUN_00275364(void);
int FUN_002755a8(void);
int FUN_00276a3c(void);
int FUN_002c8858(void);
int FUN_002d5374(void);
int FUN_002df788(void);
int FUN_002f3c28(void);
int FUN_003079b4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_mapMain; /* 0x447e28 */

/* Supplied declaration required: FUN_0019dc04. */
/* Supplied declaration required: FUN_0019dd38. */
/* Supplied declaration required: FUN_001a8cf8. */
/* Supplied declaration required: mapEplUpdateEntries. */
/* Supplied declaration required: FUN_001b4b54. */
/* Supplied declaration required: FUN_001d350c. */
/* Supplied declaration required: FUN_001d36cc. */
/* Supplied declaration required: FUN_00208cbc. */
/* Supplied declaration required: FUN_0020d91c. */
/* Supplied declaration required: FUN_0027052c. */
extern unsigned char FUN_002712dc(void);
/* Supplied declaration required: FUN_00273f90. */
/* Supplied declaration required: FUN_00273fc0. */
/* Supplied declaration required: FUN_00274798. */
/* Supplied declaration required: FUN_00274fac. */
/* Supplied declaration required: FUN_0027522c. */
/* Supplied declaration required: FUN_00275364. */
/* Supplied declaration required: FUN_002755a8. */
/* Supplied declaration required: FUN_00276a3c. */
/* Supplied declaration required: FUN_002c8858. */
/* Supplied declaration required: FUN_002d5374. */
/* Supplied declaration required: FUN_002df788. */
/* Supplied declaration required: FUN_002f3c28. */
/* Supplied declaration required: FUN_003079b4. */


void FUN_00276540(void)

{
/* irregular: 23 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = g_mapMain;
  mapEplUpdateEntries();
  FUN_002d5374();
  FUN_002f3c28();
  FUN_00208cbc();
  FUN_003079b4();
  temp_v1 = FUN_002712dc();
  FUN_0027052c();
  *(unsigned char *)(temp_v0 + 0xb8) = temp_v1;
  FUN_001a8cf8();
  FUN_0019dd38();
  FUN_0019dc04();
  FUN_001d350c();
  FUN_00274798();
  FUN_0027522c();
  FUN_00274fac();
  FUN_00276a3c();
  FUN_00273fc0();
  FUN_00275364();
  FUN_002755a8();
  FUN_001b4b54();
  FUN_0020d91c();
  FUN_00273f90();
  FUN_002c8858();
  FUN_002df788();
  FUN_001d36cc();
  return;
}

} /* extern "C" */
