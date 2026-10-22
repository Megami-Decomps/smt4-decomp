/* NON_MATCHING: registry address grouping and stack frame differ; native lock and string cleanup are integrated. */
#include "shard/W4_Match4_Obj559ecc.h"
#include "classes/Obj55b28c.h"

struct OnlineMutex;
struct OnlineRegistry;
class Obj558bd0;

extern "C" {
void FUN_0012ce48(OnlineRegistry* registry, Obj558bd0** object);
void FUN_004322f4(Obj558bd0* object);
extern OnlineRegistry DAT_0062e5fc;
extern OnlineMutex DAT_0062e610;
}

class Obj558bd0 {
public:
    virtual ~Obj558bd0();

private:
    u8 unk04[0x44];       // 0x04
    Obj55aff4 first; // 0x48
    u8 active;            // 0x50
    u8 unk51[0x0f];       // 0x51
    Obj55aff4 second; // 0x60
    Obj55aff4 third; // 0x68
};

// Unregister under the shared lock, finish active work, then destroy the owned strings.
Obj558bd0::~Obj558bd0()
{
    Obj55b28c guard(&DAT_0062e610);
    Obj558bd0* object = this;
    FUN_0012ce48(&DAT_0062e5fc, &object);
    if (active != 0) {
        FUN_004322f4(this);
    }
}
