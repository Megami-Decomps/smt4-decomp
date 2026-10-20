#include "common.h"

extern "C" {

int FUN_00239134(int obj);
int FUN_002835cc(void);
int FUN_002a3cc8(void);
int FUN_002deb84(void);
int FUN_0035c2b4(void);

/* Script command: if there is a current object, runs FUN_0035c2b4 when FUN_00239134 accepts it (else runs FUN_002a3cc8 unless FUN_002deb84 is set and fails). */
u32 FUN_0031c4bc(void)
{
    int obj = FUN_002835cc();

    if (obj == 0) {
        return 1;
    }
    if (FUN_00239134(obj) == 0) {
        if (FUN_002deb84() == 0) {
            FUN_002a3cc8();
        }
        return 0;
    }
    FUN_0035c2b4();
    return 1;
}

} /* extern "C" */
