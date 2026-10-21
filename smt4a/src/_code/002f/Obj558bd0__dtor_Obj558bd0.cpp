/* NON_MATCHING: registry/lock class identities and owned-string destructor names are not yet recovered. */
#include "shard/W6_W6Match2_OnlineString.h"
#include "shard/W6_W6Match2_OnlineScopedGuard.h"

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
    OnlineStringValue first; // 0x48
    u8 active;            // 0x50
    u8 unk51[0x0f];       // 0x51
    OnlineStringValue second; // 0x60
    OnlineStringValue third; // 0x68
};

// Unregister under the shared lock, finish active work, then destroy the owned strings.
Obj558bd0::~Obj558bd0()
{
    OnlineScopedGuard guard(&DAT_0062e610);
    Obj558bd0* object = this;
    FUN_0012ce48(&DAT_0062e5fc, &object);
    if (active != 0) {
        FUN_004322f4(this);
    }
}
