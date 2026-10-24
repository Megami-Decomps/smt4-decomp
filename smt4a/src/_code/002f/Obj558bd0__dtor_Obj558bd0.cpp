/* NON_MATCHING: registry address grouping and stack frame differ; native lock and string cleanup are integrated. */
#include "classes/Obj558bd0.h"
#include "classes/Obj55b28c.h"

struct OnlineMutex;
struct OnlineRegistry;

extern "C" {
void FUN_0012ce48(OnlineRegistry* registry, Obj558bd0** object);
extern OnlineRegistry DAT_0062e5fc;
extern OnlineMutex DAT_0062e610;
}

// Unregister under the shared lock, finish active work, then destroy the owned strings.
Obj558bd0::~Obj558bd0()
{
    Obj55b28c guard(&DAT_0062e610);
    Obj558bd0* object = this;
    FUN_0012ce48(&DAT_0062e5fc, &object);
    if (active != 0) {
        printProfile();
    }
}
