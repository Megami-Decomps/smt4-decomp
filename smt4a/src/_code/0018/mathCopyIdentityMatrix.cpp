#include "shard/W5_W5Match2_PlainData.h"
extern "C" {
extern u32 DAT_005c4c30;
extern Matrix44 DAT_0064c084;
s32 __cxa_guard_acquire(u32*);
__weak void __cxa_guard_release(u32*);
void mtx44Copy(Matrix44*, const Matrix44*);

Matrix44* mathCopyIdentityMatrix(Matrix44* destination)
{
    if ((DAT_005c4c30 & 1) == 0 && __cxa_guard_acquire(&DAT_005c4c30) != 0) {
        DAT_0064c084.values[0] = 1.0f;
        DAT_0064c084.values[1] = 0.0f;
        DAT_0064c084.values[2] = 0.0f;
        DAT_0064c084.values[3] = 0.0f;
        DAT_0064c084.values[4] = 0.0f;
        DAT_0064c084.values[5] = 1.0f;
        DAT_0064c084.values[6] = 0.0f;
        DAT_0064c084.values[7] = 0.0f;
        DAT_0064c084.values[8] = 0.0f;
        DAT_0064c084.values[9] = 0.0f;
        DAT_0064c084.values[10] = 1.0f;
        DAT_0064c084.values[11] = 0.0f;
        DAT_0064c084.values[12] = 0.0f;
        DAT_0064c084.values[13] = 0.0f;
        DAT_0064c084.values[14] = 0.0f;
        DAT_0064c084.values[15] = 1.0f;
        __cxa_guard_release(&DAT_005c4c30);
    }
    mtx44Copy(destination, &DAT_0064c084);
    return destination;
}
}
