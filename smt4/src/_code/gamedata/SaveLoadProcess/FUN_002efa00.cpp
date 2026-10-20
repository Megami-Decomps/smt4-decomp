/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efa00` (_code @ 0x2efa00, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1d08(void);
int FUN_00247af8(int, int, unsigned int, unsigned int, unsigned int);
int FUN_0026b4cc(void);
int FUN_002ad8b4(unsigned int, int);
int FUN_002c09bc(void);
int asdMemoryAlloc(int, int, int, unsigned int, int);
int rt_memcpy_w(unsigned int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0043e2f0; /* 0x43e2f0 */
extern unsigned char DAT_0043e2f3; /* 0x43e2f3 */

/* Supplied declaration required: FUN_001a1d08. */
/* Supplied declaration required: FUN_00247af8. */
/* Supplied declaration required: FUN_0026b4cc. */
extern unsigned int FUN_0026b5c8(void);
extern unsigned int FUN_0026b5dc(void);
/* Supplied declaration required: FUN_002ad8b4. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c09bc. */
/* Supplied declaration required: asdMemoryAlloc. */
extern int FUN_002cedbc(void);
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_002efa00(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = jobGetWork();
  temp_v2 = *(int *)(temp_v0 + 4);
  if (temp_v2 != 4) {
    if (temp_v2 != 5) {
      if (temp_v2 == 6) {
        DAT_0043e2f3 = 1;
        DAT_0043e2f0 = 1;
        return 0xffffffff;
      }
      if (temp_v2 == 7) {
        DAT_0043e2f3 = 0;
        DAT_0043e2f0 = 1;
        return 0xffffffff;
      }
    }
    else {
      temp_v2 = temp_v0;
      FUN_001a1d08();
      if (temp_v2 == 1) {
        temp_v2 = FUN_002cedbc();
        if (temp_v2 != 0) {
          temp_v1 = 7;
        }
        else {
          temp_v2 = *(int *)(temp_v0 + 8);
          temp_v1 = FUN_0026b5dc();
          rt_memcpy_w(temp_v1,temp_v2,0x80);
          temp_v1 = FUN_0026b5c8();
          FUN_002ad8b4(temp_v1,temp_v2 + 0x80);
          temp_v1 = FUN_002c09bc();
          rt_memcpy_w(temp_v1,temp_v2 + 0x88,0x24d28);
          temp_v2 = FUN_002c09bc();
          *(char *)(temp_v2 + 3) = (char)*(unsigned int *)(temp_v0 + 0x10);
          FUN_0026b4cc();
          temp_v1 = 6;
        }
        *(unsigned int *)(temp_v0 + 4) = temp_v1;
      }
    }
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = 0x24db0;
    temp_v1 = 0x100;
    asdMemoryAlloc(0x100,0x100,0,*(unsigned int *)(temp_v0 + 0xc),1);
    *(unsigned int *)(temp_v0 + 8) = temp_v1;
    FUN_00247af8(3,0,*(unsigned int *)(temp_v0 + 0x10),temp_v1,*(unsigned int *)(temp_v0 + 0xc));
    *(unsigned int *)(temp_v0 + 4) = 5;
  }
  return 0;
}

} /* extern "C" */
