/* NON_MATCHING: cflags -Ospace; with the getter/setter emulation only the listener-part accesses differ: retail adjusts `this` with `adds r0, r0, #136` before each call (virtual partVfunc08 via ldr/ldr, setValue with vldr first), this build folds the adjustment into ldr writeback and puts `add` after the vldr. */
#include "classes/Obj558cbc.h"
#include "classes/Obj559020.h"
#include "classes/Obj55a218.h"
#include "classes/OperatorNew.h"

extern "C" void FUN_002f5940(void);
extern "C" Obj559020 *FUN_002eac34(u8 index);

/* Builds a session for a slot: creates the Obj558650 session and the Obj5594d4 object that tracks it,
 * sets the slot's two timing values and copies the system table's speed into the listener. */
Obj558cbc::Obj558cbc(u8 slot, Obj558cbcListener *listener)
{
    this->slot = slot;
    this->listener = listener;
    child14 = NULL;
    FUN_002f5940();
    applySlotName();
    session = new Obj558650(this->slot, this->listener);
    FUN_002eac34(this->slot)->setValue74(30000);
    FUN_002eac34(this->slot)->setValue6c(5000);
    if (g_systemTable.unk14 > 0.0f) {
        this->listener->partVfunc08();
        this->listener->setValue(g_systemTable.unk14);
    }
    child18 = new Obj5594d4(this, 2, 1, 0);
    child18->registerSession(session, 1);
    active = 0;
    child10 = NULL;
    token = 0;
}
