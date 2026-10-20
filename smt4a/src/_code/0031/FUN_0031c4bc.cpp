#include "common.h"

extern "C" {

int eventEffectIsFinished(int obj);
int eventEffectExists(void);
int FUN_002a3cc8(void);
int scrGetCommandFrame(void);
int FUN_0035c2b4(void);

/* Script command: if there is a current object, runs FUN_0035c2b4 when eventEffectIsFinished accepts it (else runs FUN_002a3cc8 unless scrGetCommandFrame is set and fails). */
u32 FUN_0031c4bc(void)
{
    int obj = eventEffectExists();

    if (obj == 0) {
        return 1;
    }
    if (eventEffectIsFinished(obj) == 0) {
        if (scrGetCommandFrame() == 0) {
            FUN_002a3cc8();
        }
        return 0;
    }
    FUN_0035c2b4();
    return 1;
}

} /* extern "C" */
